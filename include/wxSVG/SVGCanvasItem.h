/////////////////////////////////////////////////////////////////////////////
// Name:        SVGCanvasItem.h
// Purpose:     Canvas items
// Author:      Alex Thuering
// Created:     2005/05/09
// RCS-ID:      $Id: SVGCanvasItem.h,v 1.7 2005-11-17 17:53:03 ntalex Exp $
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_CANVAS_ITEM_H
#define WX_SVG_CANVAS_ITEM_H

#include "svg.h"

/** Base class for canvas items */
class wxSVGCanvasItem
{
  public:
	enum wxSVGCanvasItemType
	{
	  wxSVG_CANVAS_ITEM_PATH,
	  wxSVG_CANVAS_ITEM_TEXT,
	  wxSVG_CANVAS_ITEM_IMAGE
	};
	
	wxSVGCanvasItem(wxSVGCanvasItemType type) { m_type = type; }
	virtual ~wxSVGCanvasItem() {}
	wxSVGCanvasItemType GetType() { return m_type; }
	
    /** returns the bounding box of the item */
	virtual wxSVGRect GetBBox() = 0;
	//virtual wxSVGRect GetResultBBox() = 0;
	
  protected:
	wxSVGCanvasItemType m_type;
};

/** Canvas item, that saves a graphic path (SVGPathElement) and
  * and other elements that can be converted to a path (SVGRectElement, etc.)
  */
class wxSVGCanvasPath: public wxSVGCanvasItem
{
  public:
	wxSVGCanvasPath();
	virtual ~wxSVGCanvasPath() {}
	
	void Init(wxSVGLineElement& element);
	void Init(wxSVGPolylineElement& element);
	void Init(wxSVGPolygonElement& element);
	void Init(wxSVGRectElement& element);
	void Init(wxSVGCircleElement& element);
	void Init(wxSVGEllipseElement& element);
	void Init(wxSVGPathElement& element);
		
	void MoveTo(double x, double y, bool relative = false);
	void LineTo(double x, double y, bool relative = false);
	void LineToHorizontal(double x, bool relative = false);
	void LineToVertical(double y, bool relative = false);
	void CurveToCubic(double x1, double y1, double x2, double y2, double x, double y, bool relative = false);
	void CurveToCubicSmooth(double x2, double y2, double x, double y, bool relative = false);
	void CurveToQuadratic(double x1, double y1, double x, double y, bool relative = false);
	void CurveToQuadraticSmooth(double x, double y, bool relative = false);
	void Arc(double x, double y, double r1, double r2, double angle,
	  bool largeArcFlag, bool sweepFlag, bool relative = false);
	bool ClosePath();
	
	virtual void End() = 0;
	
	inline void SetFill(bool fill = true) { m_fill = fill; }
	inline bool GetFill() { return m_fill; }
  
  protected:
	bool m_fill; /* define, if a path can be filled (disabled for line) */
	double m_curx, m_cury, m_cubicx, m_cubicy, m_quadx, m_quady, m_begx, m_begy;
	virtual void MoveToImpl(double x, double y) = 0;
	virtual void LineToImpl(double x, double y) = 0;
	virtual void CurveToCubicImpl(double x1, double y1, double x2, double y2, double x, double y) = 0;
	virtual bool ClosePathImpl() = 0;
};

/** text-chunk */
struct wxSVGCanvasTextChunk
{
  wxSVGCanvasPath* path;
  wxCSSStyleDeclaration style;
  wxSVGMatrix matrix;
};

#include <wx/dynarray.h>
WX_DECLARE_OBJARRAY(wxSVGCanvasTextChunk, wxSVGCanvasTextChunkList);

/** Canvas item, that saves text (SVGTextElement) as list of chunks */
class wxSVGCanvasText: public wxSVGCanvasItem
{
  public:
	wxSVGCanvasText(wxSVGCanvas* canvas);
	virtual ~wxSVGCanvasText();
	
	virtual void Init(wxSVGTextElement& element, wxCSSStyleDeclaration& style);
    wxSVGRect GetBBox();
	
  public:
    wxSVGCanvasTextChunkList m_chunks; /** list of text-chunks */
	wxSVGCanvasTextChunk* m_chunk; /** current text-xhunk */
  
  protected:
    wxSVGCanvas* m_canvas;
    double m_tx, m_ty; /** current text position */
    wxCSS_VALUE m_textAnchor; /** current text anchor */
	int m_textAnchorBeginIndex; /** index of first chunk with current text anchor */
	double m_textAnchorBeginPos; /** x-coordinate of text with current text anchor */
	virtual void Init(wxSVGTSpanElement& element, wxCSSStyleDeclaration& style);
	virtual void InitChildren(wxSVGTextPositioningElement& element, wxCSSStyleDeclaration& style);
	virtual void BeginChunk(wxCSSStyleDeclaration& style);
	virtual void EndTextAnchor();
    /** Converts text in path and saves in current chunk (m_chunk->path) */
    virtual void InitText(const wxString& text, wxCSSStyleDeclaration& style) = 0;
};

/** Canvas item, that saves image (SVGImageElement) */
class wxSVGCanvasImage: public wxSVGCanvasItem
{
  public:
	wxSVGCanvasImage(): wxSVGCanvasItem(wxSVG_CANVAS_ITEM_IMAGE) {}
	virtual ~wxSVGCanvasImage() {}
	virtual void Init(wxSVGImageElement& element);
	wxSVGRect GetBBox() { return wxSVGRect(); } /** not used */
    inline int GetDefaultWidth() { return m_image.GetWidth(); }
    inline int GetDefaultHeight() { return m_image.GetHeight(); }
  
  public:
	double m_x, m_y, m_width, m_height; /** position and size of image */
    wxString m_href; /** link to the image (filename) */
	wxImage m_image; /** image data */
};

#endif // WX_SVG_CANVAS_ITEM_H

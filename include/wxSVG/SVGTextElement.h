//////////////////////////////////////////////////////////////////////////////
// Name:        SVGTextElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_TEXT_ELEMENT_H
#define WX_SVG_TEXT_ELEMENT_H

class wxSVGCanvasItem;

#include "SVGTextPositioningElement.h"
#include "SVGTransformable.h"
#include "String.h"

class wxSVGTextElement:
  public wxSVGTextPositioningElement,
  public wxSVGTransformable
{
  public:

  protected:
	wxSVGCanvasItem* m_canvasItem;
  public:
	inline wxSVGCanvasItem* GetCanvasItem() { return m_canvasItem; }
	inline void SetCanvasItem(wxSVGCanvasItem* canvasItem) { m_canvasItem = canvasItem; }

  public:
    wxSVGTextElement(wxSVGDocument* doc, wxString tagName = wxT("text")):
      wxSVGTextPositioningElement(doc, tagName), m_canvasItem(NULL) {}
    wxSVGTextElement(wxSVGTextElement& src);
    virtual ~wxSVGTextElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGTextElement(*this); }
    wxSVGRect GetBBox();
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_TEXT_ELEMENT; }
};

#endif // WX_SVG_TEXT_ELEMENT_H

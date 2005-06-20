//////////////////////////////////////////////////////////////////////////////
// Name:        SVGImageElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_IMAGE_ELEMENT_H
#define WX_SVG_IMAGE_ELEMENT_H

class wxSVGCanvasItem;

#include "SVGElement.h"
#include "SVGURIReference.h"
#include "SVGTests.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGTransformable.h"
#include "EventTarget.h"
#include "SVGAnimatedLength.h"
#include "SVGAnimatedPreserveAspectRatio.h"
#include "SVGSVGElement.h"
#include "String.h"

class wxSVGImageElement:
  public wxSVGElement,
  public wxSVGURIReference,
  public wxSVGTests,
  public wxSVGLangSpace,
  public wxSVGExternalResourcesRequired,
  public wxSVGStylable,
  public wxSVGTransformable,
  public wxEventTarget
{
  protected:
    wxSVGAnimatedLength m_x;
    wxSVGAnimatedLength m_y;
    wxSVGAnimatedLength m_width;
    wxSVGAnimatedLength m_height;
    wxSVGAnimatedPreserveAspectRatio m_preserveAspectRatio;

  public:
    inline const wxSVGAnimatedLength& GetX() const { WX_SVG_ANIM_LENGTH_CALC_WIDTH(m_x, GetViewportElement()); return m_x; }
    inline void SetX(const wxSVGAnimatedLength& n) { m_x = n; }
    inline void SetX(const wxSVGLength& n) { m_x.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetY() const { WX_SVG_ANIM_LENGTH_CALC_HEIGHT(m_y, GetViewportElement()); return m_y; }
    inline void SetY(const wxSVGAnimatedLength& n) { m_y = n; }
    inline void SetY(const wxSVGLength& n) { m_y.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetWidth() const { WX_SVG_ANIM_LENGTH_CALC_WIDTH(m_width, GetViewportElement()); return m_width; }
    inline void SetWidth(const wxSVGAnimatedLength& n) { m_width = n; }
    inline void SetWidth(const wxSVGLength& n) { m_width.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetHeight() const { WX_SVG_ANIM_LENGTH_CALC_HEIGHT(m_height, GetViewportElement()); return m_height; }
    inline void SetHeight(const wxSVGAnimatedLength& n) { m_height = n; }
    inline void SetHeight(const wxSVGLength& n) { m_height.SetBaseVal(n); }

    inline const wxSVGAnimatedPreserveAspectRatio& GetPreserveAspectRatio() const { return m_preserveAspectRatio; }
    inline void SetPreserveAspectRatio(const wxSVGAnimatedPreserveAspectRatio& n) { m_preserveAspectRatio = n; }
    inline void SetPreserveAspectRatio(const wxSVGPreserveAspectRatio& n) { m_preserveAspectRatio.SetBaseVal(n); }


  protected:
	wxSVGCanvasItem* m_canvasItem;
  public:
	inline wxSVGCanvasItem* GetCanvasItem() { return m_canvasItem; }
	inline void SetCanvasItem(wxSVGCanvasItem* canvasItem) { m_canvasItem = canvasItem; }

  public:
    wxSVGImageElement(wxSVGDocument* doc, wxString tagName = wxT("image")):
      wxSVGElement(doc, tagName), m_canvasItem(NULL) {}
    virtual ~wxSVGImageElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGImageElement(*this); }
    wxSVGRect GetBBox();
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_IMAGE_ELEMENT; }
};

#endif // WX_SVG_IMAGE_ELEMENT_H

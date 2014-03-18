//////////////////////////////////////////////////////////////////////////////
// Name:        SVGLineElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_LINE_ELEMENT_H
#define WX_SVG_LINE_ELEMENT_H

class wxSVGCanvasItem;

#include "SVGElement.h"
#include "SVGTests.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGTransformable.h"
#include "EventTarget.h"
#include "SVGAnimatedLength.h"
#include "SVGSVGElement.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGLineElement:
  public wxSVGElement,
  public wxSVGTests,
  public wxSVGLangSpace,
  public wxSVGExternalResourcesRequired,
  public wxSVGStylable,
  public wxSVGTransformable,
  public wxEventTarget
{
  protected:
    wxSVGAnimatedLength m_x1;
    wxSVGAnimatedLength m_y1;
    wxSVGAnimatedLength m_x2;
    wxSVGAnimatedLength m_y2;

  public:
    inline const wxSVGAnimatedLength& GetX1() const { WX_SVG_ANIM_LENGTH_CALC_WIDTH(m_x1, GetViewportElement()); return m_x1; }
    inline void SetX1(const wxSVGAnimatedLength& n) { m_x1 = n; }
    inline void SetX1(const wxSVGLength& n) { m_x1.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetY1() const { WX_SVG_ANIM_LENGTH_CALC_HEIGHT(m_y1, GetViewportElement()); return m_y1; }
    inline void SetY1(const wxSVGAnimatedLength& n) { m_y1 = n; }
    inline void SetY1(const wxSVGLength& n) { m_y1.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetX2() const { WX_SVG_ANIM_LENGTH_CALC_WIDTH(m_x2, GetViewportElement()); return m_x2; }
    inline void SetX2(const wxSVGAnimatedLength& n) { m_x2 = n; }
    inline void SetX2(const wxSVGLength& n) { m_x2.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetY2() const { WX_SVG_ANIM_LENGTH_CALC_HEIGHT(m_y2, GetViewportElement()); return m_y2; }
    inline void SetY2(const wxSVGAnimatedLength& n) { m_y2 = n; }
    inline void SetY2(const wxSVGLength& n) { m_y2.SetBaseVal(n); }

  protected:
    wxSVGCanvasItem* m_canvasItem;
  public:
    inline wxSVGCanvasItem* GetCanvasItem() { return m_canvasItem; }
    void SetCanvasItem(wxSVGCanvasItem* canvasItem);

  public:
    wxSVGLineElement(wxString tagName = wxT("line")):
      wxSVGElement(tagName), m_canvasItem(NULL) {}
    wxSVGLineElement(wxSVGLineElement& src);
    virtual ~wxSVGLineElement();
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGLineElement(*this); }
    wxSVGRect GetBBox(wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER);
    wxSVGRect GetResultBBox(wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER);
    wxSVGMatrix GetCTM() { return wxSVGLocatable::GetCTM(this); }
    wxSVGMatrix GetScreenCTM() { return wxSVGLocatable::GetScreenCTM(this); }
    bool HasAttribute(const wxString& name) const;
    wxString GetAttribute(const wxString& name) const;
    bool SetAttribute(const wxString& name, const wxString& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_LINE_ELEMENT; }
};

#endif // WX_SVG_LINE_ELEMENT_H

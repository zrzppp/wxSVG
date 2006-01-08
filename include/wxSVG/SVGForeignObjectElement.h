//////////////////////////////////////////////////////////////////////////////
// Name:        SVGForeignObjectElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FOREIGN_OBJECT_ELEMENT_H
#define WX_SVG_FOREIGN_OBJECT_ELEMENT_H

#include "SVGElement.h"
#include "SVGTests.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGTransformable.h"
#include "EventTarget.h"
#include "SVGAnimatedLength.h"
#include "SVGSVGElement.h"
#include "String.h"
#include "Element.h"

class wxSVGForeignObjectElement:
  public wxSVGElement,
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

  public:
    wxSVGForeignObjectElement(wxString tagName = wxT("foreignObject")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGForeignObjectElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGForeignObjectElement(*this); }
    wxSVGRect GetBBox(wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER) { return wxSVGLocatable::GetChildrenBBox(*this, coordinates); }
    wxSVGRect GetResultBBox(wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER) { return wxSVGLocatable::GetChildrenResultBBox(*this, coordinates); }
    wxSVGMatrix GetCTM() { return wxSVGLocatable::GetCTM(this); }
    wxSVGMatrix GetScreenCTM() { return wxSVGLocatable::GetScreenCTM(this); }
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    wxXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_FOREIGNOBJECT_ELEMENT; }
};

#endif // WX_SVG_FOREIGN_OBJECT_ELEMENT_H

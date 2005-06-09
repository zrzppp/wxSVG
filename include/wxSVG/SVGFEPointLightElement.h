//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFEPointLightElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_POINT_LIGHT_ELEMENT_H
#define WX_SVG_FE_POINT_LIGHT_ELEMENT_H

#include "SVGElement.h"
#include "SVGAnimatedNumber.h"
#include "String.h"

class wxSVGFEPointLightElement:
  public wxSVGElement
{
  protected:
    wxSVGAnimatedNumber m_x;
    wxSVGAnimatedNumber m_y;
    wxSVGAnimatedNumber m_z;

  public:
    inline float GetX() const { return m_x.GetBaseVal(); }
    inline void SetX(const float n) { m_x.GetBaseVal() = n; }

    inline float GetY() const { return m_y.GetBaseVal(); }
    inline void SetY(const float n) { m_y.GetBaseVal() = n; }

    inline float GetZ() const { return m_z.GetBaseVal(); }
    inline void SetZ(const float n) { m_z.GetBaseVal() = n; }

  public:
    inline float GetAnimatedX() const { return m_x.GetAnimVal(); }
    inline void SetAnimatedX(const float n) { m_x.GetAnimVal() = n; }

    inline float GetAnimatedY() const { return m_y.GetAnimVal(); }
    inline void SetAnimatedY(const float n) { m_y.GetAnimVal() = n; }

    inline float GetAnimatedZ() const { return m_z.GetAnimVal(); }
    inline void SetAnimatedZ(const float n) { m_z.GetAnimVal() = n; }

  public:
    wxSVGFEPointLightElement(wxSVGDocument* doc, wxString tagName = wxT("fePointLight")):
      wxSVGElement(doc, tagName) {}
    virtual ~wxSVGFEPointLightElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGFEPointLightElement(*this); }
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_FEPOINTLIGHT_ELEMENT; }
};

#endif // WX_SVG_FE_POINT_LIGHT_ELEMENT_H

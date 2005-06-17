//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFESpecularLightingElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_SPECULAR_LIGHTING_ELEMENT_H
#define WX_SVG_FE_SPECULAR_LIGHTING_ELEMENT_H

#include "SVGElement.h"
#include "SVGFilterPrimitiveStandardAttributes.h"
#include "SVGAnimatedString.h"
#include "SVGAnimatedNumber.h"
#include "String.h"

class wxSVGFESpecularLightingElement:
  public wxSVGElement,
  public wxSVGFilterPrimitiveStandardAttributes
{
  protected:
    wxSVGAnimatedString m_in1;
    wxSVGAnimatedNumber m_surfaceScale;
    wxSVGAnimatedNumber m_specularConstant;
    wxSVGAnimatedNumber m_specularExponent;

  public:
    inline const wxSVGAnimatedString& GetIn1() const { return m_in1; }
    inline void SetIn1(const wxSVGAnimatedString& n) { m_in1 = n; }
    inline void SetIn1(const wxString& n) { m_in1.SetBaseVal(n); }

    inline const wxSVGAnimatedNumber& GetSurfaceScale() const { return m_surfaceScale; }
    inline void SetSurfaceScale(const wxSVGAnimatedNumber& n) { m_surfaceScale = n; }
    inline void SetSurfaceScale(float n) { m_surfaceScale.SetBaseVal(n); }

    inline const wxSVGAnimatedNumber& GetSpecularConstant() const { return m_specularConstant; }
    inline void SetSpecularConstant(const wxSVGAnimatedNumber& n) { m_specularConstant = n; }
    inline void SetSpecularConstant(float n) { m_specularConstant.SetBaseVal(n); }

    inline const wxSVGAnimatedNumber& GetSpecularExponent() const { return m_specularExponent; }
    inline void SetSpecularExponent(const wxSVGAnimatedNumber& n) { m_specularExponent = n; }
    inline void SetSpecularExponent(float n) { m_specularExponent.SetBaseVal(n); }

  public:
    wxSVGFESpecularLightingElement(wxSVGDocument* doc, wxString tagName = wxT("feSpecularLighting")):
      wxSVGElement(doc, tagName) {}
    virtual ~wxSVGFESpecularLightingElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGFESpecularLightingElement(*this); }
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_FESPECULARLIGHTING_ELEMENT; }
};

#endif // WX_SVG_FE_SPECULAR_LIGHTING_ELEMENT_H

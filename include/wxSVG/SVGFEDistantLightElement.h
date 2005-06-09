//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFEDistantLightElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_DISTANT_LIGHT_ELEMENT_H
#define WX_SVG_FE_DISTANT_LIGHT_ELEMENT_H

#include "SVGElement.h"
#include "SVGAnimatedNumber.h"
#include "String.h"

class wxSVGFEDistantLightElement:
  public wxSVGElement
{
  protected:
    wxSVGAnimatedNumber m_azimuth;
    wxSVGAnimatedNumber m_elevation;

  public:
    inline float GetAzimuth() const { return m_azimuth.GetBaseVal(); }
    inline void SetAzimuth(const float n) { m_azimuth.GetBaseVal() = n; }

    inline float GetElevation() const { return m_elevation.GetBaseVal(); }
    inline void SetElevation(const float n) { m_elevation.GetBaseVal() = n; }

  public:
    inline float GetAnimatedAzimuth() const { return m_azimuth.GetAnimVal(); }
    inline void SetAnimatedAzimuth(const float n) { m_azimuth.GetAnimVal() = n; }

    inline float GetAnimatedElevation() const { return m_elevation.GetAnimVal(); }
    inline void SetAnimatedElevation(const float n) { m_elevation.GetAnimVal() = n; }

  public:
    wxSVGFEDistantLightElement(wxSVGDocument* doc, wxString tagName = wxT("feDistantLight")):
      wxSVGElement(doc, tagName) {}
    virtual ~wxSVGFEDistantLightElement() {}
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_FEDISTANTLIGHT_ELEMENT; }
};

#endif // WX_SVG_FE_DISTANT_LIGHT_ELEMENT_H

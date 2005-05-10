//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFESpotLightElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_SPOT_LIGHT_ELEMENT_H
#define WX_SVG_FE_SPOT_LIGHT_ELEMENT_H

#include "SVGElement.h"
#include "SVGAnimatedNumber.h"
#include "String.h"

class wxSVGFESpotLightElement:
  public wxSVGElement
{
  protected:
	wxSVGAnimatedNumber m_x;
	wxSVGAnimatedNumber m_y;
	wxSVGAnimatedNumber m_z;
	wxSVGAnimatedNumber m_pointsAtX;
	wxSVGAnimatedNumber m_pointsAtY;
	wxSVGAnimatedNumber m_pointsAtZ;
	wxSVGAnimatedNumber m_specularExponent;
	wxSVGAnimatedNumber m_limitingConeAngle;

  public:
	inline float GetX() const { return m_x.GetBaseVal(); }
	inline void SetX(const float n) { m_x.GetBaseVal() = n; }

	inline float GetY() const { return m_y.GetBaseVal(); }
	inline void SetY(const float n) { m_y.GetBaseVal() = n; }

	inline float GetZ() const { return m_z.GetBaseVal(); }
	inline void SetZ(const float n) { m_z.GetBaseVal() = n; }

	inline float GetPointsAtX() const { return m_pointsAtX.GetBaseVal(); }
	inline void SetPointsAtX(const float n) { m_pointsAtX.GetBaseVal() = n; }

	inline float GetPointsAtY() const { return m_pointsAtY.GetBaseVal(); }
	inline void SetPointsAtY(const float n) { m_pointsAtY.GetBaseVal() = n; }

	inline float GetPointsAtZ() const { return m_pointsAtZ.GetBaseVal(); }
	inline void SetPointsAtZ(const float n) { m_pointsAtZ.GetBaseVal() = n; }

	inline float GetSpecularExponent() const { return m_specularExponent.GetBaseVal(); }
	inline void SetSpecularExponent(const float n) { m_specularExponent.GetBaseVal() = n; }

	inline float GetLimitingConeAngle() const { return m_limitingConeAngle.GetBaseVal(); }
	inline void SetLimitingConeAngle(const float n) { m_limitingConeAngle.GetBaseVal() = n; }

  public:
	inline float GetAnimatedX() const { return m_x.GetAnimVal(); }
	inline void SetAnimatedX(const float n) { m_x.GetAnimVal() = n; }

	inline float GetAnimatedY() const { return m_y.GetAnimVal(); }
	inline void SetAnimatedY(const float n) { m_y.GetAnimVal() = n; }

	inline float GetAnimatedZ() const { return m_z.GetAnimVal(); }
	inline void SetAnimatedZ(const float n) { m_z.GetAnimVal() = n; }

	inline float GetAnimatedPointsAtX() const { return m_pointsAtX.GetAnimVal(); }
	inline void SetAnimatedPointsAtX(const float n) { m_pointsAtX.GetAnimVal() = n; }

	inline float GetAnimatedPointsAtY() const { return m_pointsAtY.GetAnimVal(); }
	inline void SetAnimatedPointsAtY(const float n) { m_pointsAtY.GetAnimVal() = n; }

	inline float GetAnimatedPointsAtZ() const { return m_pointsAtZ.GetAnimVal(); }
	inline void SetAnimatedPointsAtZ(const float n) { m_pointsAtZ.GetAnimVal() = n; }

	inline float GetAnimatedSpecularExponent() const { return m_specularExponent.GetAnimVal(); }
	inline void SetAnimatedSpecularExponent(const float n) { m_specularExponent.GetAnimVal() = n; }

	inline float GetAnimatedLimitingConeAngle() const { return m_limitingConeAngle.GetAnimVal(); }
	inline void SetAnimatedLimitingConeAngle(const float n) { m_limitingConeAngle.GetAnimVal() = n; }

  public:
	wxSVGFESpotLightElement(wxSVGDocument* doc, wxString tagName = wxT("feSpotLight")):
	  wxSVGElement(doc, tagName) {}
	virtual ~wxSVGFESpotLightElement() {}
	bool SetAttribute(const wxString& name, const wxString& value);
	virtual const wxSVGDTD GetDtd() const { return wxSVG_FESPOTLIGHT_ELEMENT; }
};

#endif // WX_SVG_FE_SPOT_LIGHT_ELEMENT_H

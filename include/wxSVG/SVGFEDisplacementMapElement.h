//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFEDisplacementMapElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_DISPLACEMENT_MAP_ELEMENT_H
#define WX_SVG_FE_DISPLACEMENT_MAP_ELEMENT_H

#include "SVGElement.h"
#include "SVGFilterPrimitiveStandardAttributes.h"
#include "SVGAnimatedString.h"
#include "SVGAnimatedNumber.h"
#include "SVGAnimatedEnumeration.h"
#include "String.h"


enum wxSVG_CHANNEL
{
  wxSVG_CHANNEL_UNKNOWN = 0,
  wxSVG_CHANNEL_R = 1,
  wxSVG_CHANNEL_G = 2,
  wxSVG_CHANNEL_B = 3,
  wxSVG_CHANNEL_A = 4
};

class wxSVGFEDisplacementMapElement:
  public wxSVGElement,
  public wxSVGFilterPrimitiveStandardAttributes
{
  protected:
	wxSVGAnimatedString m_in1;
	wxSVGAnimatedString m_in2;
	wxSVGAnimatedNumber m_scale;
	wxSVGAnimatedEnumeration m_xChannelSelector;
	wxSVGAnimatedEnumeration m_yChannelSelector;

  public:
	inline wxString GetIn1() const { return m_in1.GetBaseVal(); }
	inline void SetIn1(const wxString& n) { m_in1.GetBaseVal() = n; }

	inline wxString GetIn2() const { return m_in2.GetBaseVal(); }
	inline void SetIn2(const wxString& n) { m_in2.GetBaseVal() = n; }

	inline float GetScale() const { return m_scale.GetBaseVal(); }
	inline void SetScale(const float n) { m_scale.GetBaseVal() = n; }

	inline char GetXChannelSelector() const { return m_xChannelSelector.GetBaseVal(); }
	inline void SetXChannelSelector(const char n) { m_xChannelSelector.GetBaseVal() = n; }

	inline char GetYChannelSelector() const { return m_yChannelSelector.GetBaseVal(); }
	inline void SetYChannelSelector(const char n) { m_yChannelSelector.GetBaseVal() = n; }

  public:
	inline wxString GetAnimatedIn1() const { return m_in1.GetAnimVal(); }
	inline void SetAnimatedIn1(const wxString& n) { m_in1.GetAnimVal() = n; }

	inline wxString GetAnimatedIn2() const { return m_in2.GetAnimVal(); }
	inline void SetAnimatedIn2(const wxString& n) { m_in2.GetAnimVal() = n; }

	inline float GetAnimatedScale() const { return m_scale.GetAnimVal(); }
	inline void SetAnimatedScale(const float n) { m_scale.GetAnimVal() = n; }

	inline char GetAnimatedXChannelSelector() const { return m_xChannelSelector.GetAnimVal(); }
	inline void SetAnimatedXChannelSelector(const char n) { m_xChannelSelector.GetAnimVal() = n; }

	inline char GetAnimatedYChannelSelector() const { return m_yChannelSelector.GetAnimVal(); }
	inline void SetAnimatedYChannelSelector(const char n) { m_yChannelSelector.GetAnimVal() = n; }

  public:
	wxSVGFEDisplacementMapElement(wxSVGDocument* doc, wxString tagName = wxT("feDisplacementMap")):
	  wxSVGElement(doc, tagName) {}
	virtual ~wxSVGFEDisplacementMapElement() {}
	bool SetAttribute(const wxString& name, const wxString& value);
	virtual const wxSVGDTD GetDtd() const { return wxSVG_FEDISPLACEMENTMAP_ELEMENT; }
};

#endif // WX_SVG_FE_DISPLACEMENT_MAP_ELEMENT_H

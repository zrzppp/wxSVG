//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFECompositeElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_COMPOSITE_ELEMENT_H
#define WX_SVG_FE_COMPOSITE_ELEMENT_H

#include "SVGElement.h"
#include "SVGFilterPrimitiveStandardAttributes.h"
#include "SVGAnimatedString.h"
#include "SVGAnimatedEnumeration.h"
#include "SVGAnimatedNumber.h"
#include "String.h"


enum wxSVG_FECOMPOSITE_OPERATOR
{
  wxSVG_FECOMPOSITE_OPERATOR_UNKNOWN = 0,
  wxSVG_FECOMPOSITE_OPERATOR_OVER = 1,
  wxSVG_FECOMPOSITE_OPERATOR_IN = 2,
  wxSVG_FECOMPOSITE_OPERATOR_OUT = 3,
  wxSVG_FECOMPOSITE_OPERATOR_ATOP = 4,
  wxSVG_FECOMPOSITE_OPERATOR_XOR = 5,
  wxSVG_FECOMPOSITE_OPERATOR_ARITHMETIC = 6
};

class wxSVGFECompositeElement:
  public wxSVGElement,
  public wxSVGFilterPrimitiveStandardAttributes
{
  protected:
	wxSVGAnimatedString m_in1;
	wxSVGAnimatedString m_in2;
	wxSVGAnimatedEnumeration m_operator;
	wxSVGAnimatedNumber m_k1;
	wxSVGAnimatedNumber m_k2;
	wxSVGAnimatedNumber m_k3;
	wxSVGAnimatedNumber m_k4;

  public:
	inline const wxString& GetIn1() { return m_in1.GetBaseVal(); }
	inline void SetIn1(const wxString& n) { m_in1.GetBaseVal() = n; }

	inline const wxString& GetIn2() { return m_in2.GetBaseVal(); }
	inline void SetIn2(const wxString& n) { m_in2.GetBaseVal() = n; }

	inline char GetOperator() const { return m_operator.GetBaseVal(); }
	inline void SetOperator(const char n) { m_operator.GetBaseVal() = n; }

	inline float GetK1() const { return m_k1.GetBaseVal(); }
	inline void SetK1(const float n) { m_k1.GetBaseVal() = n; }

	inline float GetK2() const { return m_k2.GetBaseVal(); }
	inline void SetK2(const float n) { m_k2.GetBaseVal() = n; }

	inline float GetK3() const { return m_k3.GetBaseVal(); }
	inline void SetK3(const float n) { m_k3.GetBaseVal() = n; }

	inline float GetK4() const { return m_k4.GetBaseVal(); }
	inline void SetK4(const float n) { m_k4.GetBaseVal() = n; }

  public:
	inline const wxString& GetAnimatedIn1() { return m_in1.GetAnimVal(); }
	inline void SetAnimatedIn1(const wxString& n) { m_in1.GetAnimVal() = n; }

	inline const wxString& GetAnimatedIn2() { return m_in2.GetAnimVal(); }
	inline void SetAnimatedIn2(const wxString& n) { m_in2.GetAnimVal() = n; }

	inline char GetAnimatedOperator() const { return m_operator.GetAnimVal(); }
	inline void SetAnimatedOperator(const char n) { m_operator.GetAnimVal() = n; }

	inline float GetAnimatedK1() const { return m_k1.GetAnimVal(); }
	inline void SetAnimatedK1(const float n) { m_k1.GetAnimVal() = n; }

	inline float GetAnimatedK2() const { return m_k2.GetAnimVal(); }
	inline void SetAnimatedK2(const float n) { m_k2.GetAnimVal() = n; }

	inline float GetAnimatedK3() const { return m_k3.GetAnimVal(); }
	inline void SetAnimatedK3(const float n) { m_k3.GetAnimVal() = n; }

	inline float GetAnimatedK4() const { return m_k4.GetAnimVal(); }
	inline void SetAnimatedK4(const float n) { m_k4.GetAnimVal() = n; }

  public:
	wxSVGFECompositeElement(wxSVGDocument* doc, wxString tagName = wxT("feComposite")):
	  wxSVGElement(doc, tagName) {}
	virtual ~wxSVGFECompositeElement() {}
	bool SetAttribute(const wxString& name, const wxString& value);
	virtual const wxSVGDTD GetDtd() const { return wxSVG_FECOMPOSITE_ELEMENT; }
};

#endif // WX_SVG_FE_COMPOSITE_ELEMENT_H

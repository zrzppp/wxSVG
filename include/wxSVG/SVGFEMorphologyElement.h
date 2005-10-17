//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFEMorphologyElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_MORPHOLOGY_ELEMENT_H
#define WX_SVG_FE_MORPHOLOGY_ELEMENT_H

#include "SVGElement.h"
#include "SVGFilterPrimitiveStandardAttributes.h"
#include "SVGAnimatedString.h"
#include "SVGAnimatedEnumeration.h"
#include "SVGAnimatedLength.h"
#include "SVGSVGElement.h"
#include "String.h"


enum wxSVG_MORPHOLOGY_OPERATOR
{
  wxSVG_MORPHOLOGY_OPERATOR_UNKNOWN = 0,
  wxSVG_MORPHOLOGY_OPERATOR_ERODE = 1,
  wxSVG_MORPHOLOGY_OPERATOR_DILATE = 2
};

class wxSVGFEMorphologyElement:
  public wxSVGElement,
  public wxSVGFilterPrimitiveStandardAttributes
{
  protected:
    wxSVGAnimatedString m_in1;
    wxSVGAnimatedEnumeration m_operator;
    wxSVGAnimatedLength m_radiusX;
    wxSVGAnimatedLength m_radiusY;

  public:
    inline const wxSVGAnimatedString& GetIn1() const { return m_in1; }
    inline void SetIn1(const wxSVGAnimatedString& n) { m_in1 = n; }
    inline void SetIn1(const wxString& n) { m_in1.SetBaseVal(n); }

    inline const wxSVGAnimatedEnumeration& GetOperator() const { return m_operator; }
    inline void SetOperator(const wxSVGAnimatedEnumeration& n) { m_operator = n; }
    inline void SetOperator(char n) { m_operator.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetRadiusX() const { WX_SVG_ANIM_LENGTH_CALC_WIDTH(m_radiusX, GetViewportElement()); return m_radiusX; }
    inline void SetRadiusX(const wxSVGAnimatedLength& n) { m_radiusX = n; }
    inline void SetRadiusX(const wxSVGLength& n) { m_radiusX.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetRadiusY() const { WX_SVG_ANIM_LENGTH_CALC_HEIGHT(m_radiusY, GetViewportElement()); return m_radiusY; }
    inline void SetRadiusY(const wxSVGAnimatedLength& n) { m_radiusY = n; }
    inline void SetRadiusY(const wxSVGLength& n) { m_radiusY.SetBaseVal(n); }

  public:
    wxSVGFEMorphologyElement(wxString tagName = wxT("feMorphology")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGFEMorphologyElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGFEMorphologyElement(*this); }
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_FEMORPHOLOGY_ELEMENT; }
};

#endif // WX_SVG_FE_MORPHOLOGY_ELEMENT_H

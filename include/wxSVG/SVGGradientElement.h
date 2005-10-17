//////////////////////////////////////////////////////////////////////////////
// Name:        SVGGradientElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_GRADIENT_ELEMENT_H
#define WX_SVG_GRADIENT_ELEMENT_H

#include "SVGElement.h"
#include "SVGURIReference.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGUnitTypes.h"
#include "SVGAnimatedEnumeration.h"
#include "SVGAnimatedTransformList.h"
#include "String.h"


enum wxSVG_SPREADMETHOD
{
  wxSVG_SPREADMETHOD_UNKNOWN = 0,
  wxSVG_SPREADMETHOD_PAD = 1,
  wxSVG_SPREADMETHOD_REFLECT = 2,
  wxSVG_SPREADMETHOD_REPEAT = 3
};

class wxSVGGradientElement:
  public wxSVGElement,
  public wxSVGURIReference,
  public wxSVGExternalResourcesRequired,
  public wxSVGStylable,
  public wxSVGUnitTypes
{
  protected:
    wxSVGAnimatedEnumeration m_gradientUnits;
    wxSVGAnimatedTransformList m_gradientTransform;
    wxSVGAnimatedEnumeration m_spreadMethod;

  public:
    inline const wxSVGAnimatedEnumeration& GetGradientUnits() const { return m_gradientUnits; }
    inline void SetGradientUnits(const wxSVGAnimatedEnumeration& n) { m_gradientUnits = n; }
    inline void SetGradientUnits(char n) { m_gradientUnits.SetBaseVal(n); }

    inline const wxSVGAnimatedTransformList& GetGradientTransform() const { return m_gradientTransform; }
    inline void SetGradientTransform(const wxSVGAnimatedTransformList& n) { m_gradientTransform = n; }
    inline void SetGradientTransform(const wxSVGTransformList& n) { m_gradientTransform.SetBaseVal(n); }

    inline const wxSVGAnimatedEnumeration& GetSpreadMethod() const { return m_spreadMethod; }
    inline void SetSpreadMethod(const wxSVGAnimatedEnumeration& n) { m_spreadMethod = n; }
    inline void SetSpreadMethod(char n) { m_spreadMethod.SetBaseVal(n); }

  public:
    wxSVGGradientElement(wxString tagName = wxT("")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGGradientElement() {}
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
};

#endif // WX_SVG_GRADIENT_ELEMENT_H

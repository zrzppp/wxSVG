//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFETurbulenceElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_TURBULENCE_ELEMENT_H
#define WX_SVG_FE_TURBULENCE_ELEMENT_H

#include "SVGElement.h"
#include "SVGFilterPrimitiveStandardAttributes.h"
#include "SVGAnimatedNumber.h"
#include "SVGAnimatedInteger.h"
#include "SVGAnimatedEnumeration.h"
#include "String.h"


enum wxSVG_TURBULENCE_TYPE
{
  wxSVG_TURBULENCE_TYPE_UNKNOWN = 0,
  wxSVG_TURBULENCE_TYPE_FRACTALNOISE = 1,
  wxSVG_TURBULENCE_TYPE_TURBULENCE = 2
};


enum wxSVG_STITCHTYPE
{
  wxSVG_STITCHTYPE_UNKNOWN = 0,
  wxSVG_STITCHTYPE_STITCH = 1,
  wxSVG_STITCHTYPE_NOSTITCH = 2
};

class wxSVGFETurbulenceElement:
  public wxSVGElement,
  public wxSVGFilterPrimitiveStandardAttributes
{
  protected:
    wxSVGAnimatedNumber m_baseFrequencyX;
    wxSVGAnimatedNumber m_baseFrequencyY;
    wxSVGAnimatedInteger m_numOctaves;
    wxSVGAnimatedNumber m_seed;
    wxSVGAnimatedEnumeration m_stitchTiles;
    wxSVGAnimatedEnumeration m_type;

  public:
    inline const wxSVGAnimatedNumber& GetBaseFrequencyX() const { return m_baseFrequencyX; }
    inline void SetBaseFrequencyX(const wxSVGAnimatedNumber& n) { m_baseFrequencyX = n; }
    inline void SetBaseFrequencyX(float n) { m_baseFrequencyX.SetBaseVal(n); }

    inline const wxSVGAnimatedNumber& GetBaseFrequencyY() const { return m_baseFrequencyY; }
    inline void SetBaseFrequencyY(const wxSVGAnimatedNumber& n) { m_baseFrequencyY = n; }
    inline void SetBaseFrequencyY(float n) { m_baseFrequencyY.SetBaseVal(n); }

    inline const wxSVGAnimatedInteger& GetNumOctaves() const { return m_numOctaves; }
    inline void SetNumOctaves(const wxSVGAnimatedInteger& n) { m_numOctaves = n; }
    inline void SetNumOctaves(long n) { m_numOctaves.SetBaseVal(n); }

    inline const wxSVGAnimatedNumber& GetSeed() const { return m_seed; }
    inline void SetSeed(const wxSVGAnimatedNumber& n) { m_seed = n; }
    inline void SetSeed(float n) { m_seed.SetBaseVal(n); }

    inline const wxSVGAnimatedEnumeration& GetStitchTiles() const { return m_stitchTiles; }
    inline void SetStitchTiles(const wxSVGAnimatedEnumeration& n) { m_stitchTiles = n; }
    inline void SetStitchTiles(char n) { m_stitchTiles.SetBaseVal(n); }

    inline const wxSVGAnimatedEnumeration& GetType() const { return m_type; }
    inline void SetType(const wxSVGAnimatedEnumeration& n) { m_type = n; }
    inline void SetType(char n) { m_type.SetBaseVal(n); }

  public:
    wxSVGFETurbulenceElement(wxString tagName = wxT("feTurbulence")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGFETurbulenceElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGFETurbulenceElement(*this); }
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_FETURBULENCE_ELEMENT; }
};

#endif // WX_SVG_FE_TURBULENCE_ELEMENT_H

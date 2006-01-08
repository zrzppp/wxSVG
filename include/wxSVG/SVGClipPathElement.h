//////////////////////////////////////////////////////////////////////////////
// Name:        SVGClipPathElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_CLIP_PATH_ELEMENT_H
#define WX_SVG_CLIP_PATH_ELEMENT_H

#include "SVGElement.h"
#include "SVGTests.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGTransformable.h"
#include "SVGUnitTypes.h"
#include "SVGAnimatedEnumeration.h"
#include "String.h"
#include "Element.h"

class wxSVGClipPathElement:
  public wxSVGElement,
  public wxSVGTests,
  public wxSVGLangSpace,
  public wxSVGExternalResourcesRequired,
  public wxSVGStylable,
  public wxSVGTransformable,
  public wxSVGUnitTypes
{
  protected:
    wxSVGAnimatedEnumeration m_clipPathUnits;

  public:
    inline const wxSVGAnimatedEnumeration& GetClipPathUnits() const { return m_clipPathUnits; }
    inline void SetClipPathUnits(const wxSVGAnimatedEnumeration& n) { m_clipPathUnits = n; }
    inline void SetClipPathUnits(char n) { m_clipPathUnits.SetBaseVal(n); }

  public:
    wxSVGClipPathElement(wxString tagName = wxT("clipPath")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGClipPathElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGClipPathElement(*this); }
    wxSVGRect GetBBox(wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER) { return wxSVGLocatable::GetChildrenBBox(*this, coordinates); }
    wxSVGRect GetResultBBox(wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER) { return wxSVGLocatable::GetChildrenResultBBox(*this, coordinates); }
    wxSVGMatrix GetCTM() { return wxSVGLocatable::GetCTM(this); }
    wxSVGMatrix GetScreenCTM() { return wxSVGLocatable::GetScreenCTM(this); }
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    wxXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_CLIPPATH_ELEMENT; }
};

#endif // WX_SVG_CLIP_PATH_ELEMENT_H

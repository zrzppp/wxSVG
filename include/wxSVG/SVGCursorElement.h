//////////////////////////////////////////////////////////////////////////////
// Name:        SVGCursorElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_CURSOR_ELEMENT_H
#define WX_SVG_CURSOR_ELEMENT_H

#include "SVGElement.h"
#include "SVGURIReference.h"
#include "SVGTests.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGAnimatedLength.h"
#include "String.h"

class wxSVGCursorElement:
  public wxSVGElement,
  public wxSVGURIReference,
  public wxSVGTests,
  public wxSVGExternalResourcesRequired
{
  protected:
    wxSVGAnimatedLength m_x;
    wxSVGAnimatedLength m_y;

  public:
    inline wxSVGLength& GetX() { return m_x.GetBaseVal(); }
    inline void SetX(const wxSVGLength& n) { m_x.GetBaseVal() = n; }

    inline wxSVGLength& GetY() { return m_y.GetBaseVal(); }
    inline void SetY(const wxSVGLength& n) { m_y.GetBaseVal() = n; }

  public:
    inline wxSVGLength& GetAnimatedX() { return m_x.GetAnimVal(); }
    inline void SetAnimatedX(const wxSVGLength& n) { m_x.GetAnimVal() = n; }

    inline wxSVGLength& GetAnimatedY() { return m_y.GetAnimVal(); }
    inline void SetAnimatedY(const wxSVGLength& n) { m_y.GetAnimVal() = n; }

  public:
    wxSVGCursorElement(wxSVGDocument* doc, wxString tagName = wxT("cursor")):
      wxSVGElement(doc, tagName) {}
    virtual ~wxSVGCursorElement() {}
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_CURSOR_ELEMENT; }
};

#endif // WX_SVG_CURSOR_ELEMENT_H

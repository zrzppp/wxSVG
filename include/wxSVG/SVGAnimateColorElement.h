//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAnimateColorElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ANIMATE_COLOR_ELEMENT_H
#define WX_SVG_ANIMATE_COLOR_ELEMENT_H

#include "SVGAnimationElement.h"
#include "String.h"
#include "Element.h"

class wxSVGAnimateColorElement:
  public wxSVGAnimationElement
{
  public:
    wxSVGAnimateColorElement(wxString tagName = wxT("animateColor")):
      wxSVGAnimationElement(tagName) {}
    virtual ~wxSVGAnimateColorElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGAnimateColorElement(*this); }
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    wxXmlAttrHash GetAttributes() const;
    virtual const wxSVGDTD GetDtd() const { return wxSVG_ANIMATECOLOR_ELEMENT; }
};

#endif // WX_SVG_ANIMATE_COLOR_ELEMENT_H

//////////////////////////////////////////////////////////////////////////////
// Name:        SVGMetadataElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_METADATA_ELEMENT_H
#define WX_SVG_METADATA_ELEMENT_H

#include "SVGElement.h"
#include "String.h"
#include "Element.h"

class wxSVGMetadataElement:
  public wxSVGElement
{
  public:
    wxSVGMetadataElement(wxString tagName = wxT("metadata")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGMetadataElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGMetadataElement(*this); }
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    wxXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_METADATA_ELEMENT; }
};

#endif // WX_SVG_METADATA_ELEMENT_H

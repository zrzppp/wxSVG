//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFontFaceUriElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FONT_FACE_URI_ELEMENT_H
#define WX_SVG_FONT_FACE_URI_ELEMENT_H

#include "SVGElement.h"
#include "String.h"

class wxSVGFontFaceUriElement:
  public wxSVGElement
{
  public:
    wxSVGFontFaceUriElement(wxSVGDocument* doc, wxString tagName = wxT("font-face-uri")):
      wxSVGElement(doc, tagName) {}
    virtual ~wxSVGFontFaceUriElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGFontFaceUriElement(*this); }
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_FONT_FACE_URI_ELEMENT; }
};

#endif // WX_SVG_FONT_FACE_URI_ELEMENT_H

//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAltGlyphDefElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ALT_GLYPH_DEF_ELEMENT_H
#define WX_SVG_ALT_GLYPH_DEF_ELEMENT_H

#include "SVGElement.h"
#include "String.h"

class wxSVGAltGlyphDefElement:
  public wxSVGElement
{
  public:
    wxSVGAltGlyphDefElement(wxSVGDocument* doc, wxString tagName = wxT("altGlyphDef")):
      wxSVGElement(doc, tagName) {}
    virtual ~wxSVGAltGlyphDefElement() {}
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_ALTGLYPHDEF_ELEMENT; }
};

#endif // WX_SVG_ALT_GLYPH_DEF_ELEMENT_H

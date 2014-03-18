//////////////////////////////////////////////////////////////////////////////
// Name:        SVGGlyphRefElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_GLYPH_REF_ELEMENT_H
#define WX_SVG_GLYPH_REF_ELEMENT_H

#include "SVGElement.h"
#include "SVGURIReference.h"
#include "SVGStylable.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGGlyphRefElement:
  public wxSVGElement,
  public wxSVGURIReference,
  public wxSVGStylable
{
  protected:
    wxString m_glyphRef;
    wxString m_format;
    double m_x;
    double m_y;
    double m_dx;
    double m_dy;

  public:
    inline const wxString& GetGlyphRef() const { return m_glyphRef; }
    inline void SetGlyphRef(const wxString& n) { m_glyphRef = n; }

    inline const wxString& GetFormat() const { return m_format; }
    inline void SetFormat(const wxString& n) { m_format = n; }

    inline double GetX() const { return m_x; }
    inline void SetX(double n) { m_x = n; }

    inline double GetY() const { return m_y; }
    inline void SetY(double n) { m_y = n; }

    inline double GetDx() const { return m_dx; }
    inline void SetDx(double n) { m_dx = n; }

    inline double GetDy() const { return m_dy; }
    inline void SetDy(double n) { m_dy = n; }

  public:
    wxSVGGlyphRefElement(wxString tagName = wxT("glyphRef")):
      wxSVGElement(tagName), m_x(0), m_y(0), m_dx(0), m_dy(0) {}
    virtual ~wxSVGGlyphRefElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGGlyphRefElement(*this); }
    bool HasAttribute(const wxString& name) const;
    wxString GetAttribute(const wxString& name) const;
    bool SetAttribute(const wxString& name, const wxString& value);
    wxSvgXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_GLYPHREF_ELEMENT; }
};

#endif // WX_SVG_GLYPH_REF_ELEMENT_H

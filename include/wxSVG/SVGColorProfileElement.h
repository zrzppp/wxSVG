//////////////////////////////////////////////////////////////////////////////
// Name:        SVGColorProfileElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_COLOR_PROFILE_ELEMENT_H
#define WX_SVG_COLOR_PROFILE_ELEMENT_H

#include "SVGElement.h"
#include "SVGURIReference.h"
#include "SVGRenderingIntent.h"
#include "String.h"
#include "Element.h"

class wxSVGColorProfileElement:
  public wxSVGElement,
  public wxSVGURIReference,
  public wxSVGRenderingIntent
{
  protected:
    wxString m_local;
    wxString m_name;
    wxRENDERING_INTENT m_renderingIntent;

  public:
    inline const wxString& GetLocal() const { return m_local; }
    inline void SetLocal(const wxString& n) { m_local = n; }

    inline const wxString& GetName() const { return m_name; }
    inline void SetName(const wxString& n) { m_name = n; }

    inline wxRENDERING_INTENT GetRenderingIntent() const { return m_renderingIntent; }
    inline void SetRenderingIntent(const wxRENDERING_INTENT& n) { m_renderingIntent = n; }

  public:
    wxSVGColorProfileElement(wxString tagName = wxT("color-profile")):
      wxSVGElement(tagName), m_renderingIntent(wxRENDERING_INTENT(0)) {}
    virtual ~wxSVGColorProfileElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGColorProfileElement(*this); }
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    wxXmlAttrHash GetAttributes() const;
    virtual wxSVGDTD GetDtd() const { return wxSVG_COLOR_PROFILE_ELEMENT; }
};

#endif // WX_SVG_COLOR_PROFILE_ELEMENT_H

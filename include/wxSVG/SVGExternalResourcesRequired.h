//////////////////////////////////////////////////////////////////////////////
// Name:        SVGExternalResourcesRequired.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_EXTERNAL_RESOURCES_REQUIRED_H
#define WX_SVG_EXTERNAL_RESOURCES_REQUIRED_H

#include "SVGAnimatedBoolean.h"
#include "String.h"
#include "Element.h"

class wxSVGExternalResourcesRequired
{
  protected:
    wxSVGAnimatedBoolean m_externalResourcesRequired;

  public:
    inline const wxSVGAnimatedBoolean& GetExternalResourcesRequired() const { return m_externalResourcesRequired; }
    inline void SetExternalResourcesRequired(const wxSVGAnimatedBoolean& n) { m_externalResourcesRequired = n; }
    inline void SetExternalResourcesRequired(bool n) { m_externalResourcesRequired.SetBaseVal(n); }

  public:
    virtual ~wxSVGExternalResourcesRequired() {}
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    wxSvgXmlAttrHash GetAttributes() const;
};

#endif // WX_SVG_EXTERNAL_RESOURCES_REQUIRED_H

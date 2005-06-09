//////////////////////////////////////////////////////////////////////////////
// Name:        SVGElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ELEMENT_H
#define WX_SVG_ELEMENT_H

class wxSVGSVGElement;
class wxSVGElement;
class wxSVGDocument;

#include "Element.h"
#include "String.h"
#include "SVGDTD.h"

class wxSVGElement:
  public wxXmlElement
{
  protected:
    wxString m_id;
    wxString m_xmlbase;
    wxSVGSVGElement* m_ownerSVGElement;
    wxSVGElement* m_viewportElement;

  public:
    inline const wxString& GetId() { return m_id; }
    inline void SetId(const wxString& n) { m_id = n; }

    inline const wxString& GetXmlbase() { return m_xmlbase; }
    inline void SetXmlbase(const wxString& n) { m_xmlbase = n; }

    inline wxSVGSVGElement* GetOwnerSVGElement() { return m_ownerSVGElement; }
    inline void SetOwnerSVGElement(wxSVGSVGElement* n) { m_ownerSVGElement = n; }

    inline wxSVGElement* GetViewportElement() { return m_viewportElement; }
    inline void SetViewportElement(wxSVGElement* n) { m_viewportElement = n; }


  protected:
    wxSVGDocument* m_doc;
	
  public:
	wxSVGElement(wxSVGDocument* doc, wxString tagName = wxT("")):
	  wxXmlElement(wxXML_ELEMENT_NODE, tagName) { m_doc = doc; }
	virtual ~wxSVGElement() {}
	
	virtual const wxSVGDTD GetDtd() const = 0;
	virtual void AddProperty(const wxString& name, const wxString& value)
	  { SetAttribute(name, value); }
  public:
    bool SetAttribute(const wxString& name, const wxString& value);
};

#endif // WX_SVG_ELEMENT_H

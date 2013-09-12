//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAnimationElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ANIMATION_ELEMENT_H
#define WX_SVG_ANIMATION_ELEMENT_H

class wxSVGElement;

#include "SVGElement.h"
#include "SVGTests.h"
#include "SVGExternalResourcesRequired.h"
#include "ElementTimeControl.h"
#include "EventTarget.h"
#include "SVGLength.h"
#include "String_wxsvg.h"
#include "Element.h"

class wxSVGAnimationElement:
  public wxSVGElement,
  public wxSVGTests,
  public wxSVGExternalResourcesRequired,
  public wxElementTimeControl,
  public wxEventTarget
{
  protected:
    wxSVGElement* m_targetElement;
    wxString m_attributeName;
    double m_begin;
    double m_dur;
    wxSVGLength m_from;
    wxSVGLength m_to;

  public:
    inline wxSVGElement* GetTargetElement() const { return m_targetElement; }
    inline void SetTargetElement(wxSVGElement* n) { m_targetElement = n; }
    
    inline const wxString& GetAttributeName() const { return m_attributeName; }
	inline void SetAttributeName(const wxString& n) { m_attributeName = n; }
    
    inline double GetBegin() const { return m_begin; }
	inline void SetBegin(double n) { m_begin = n; }

	inline double GetDur() const { return m_dur; }
	inline void SetDur(double n) { m_dur = n; }

	inline const wxSVGLength& GetFrom() const { return m_from; }
	inline void SetFrom(const wxSVGLength& n) { m_from = n; }

	inline const wxSVGLength& GetTo() const { return m_to; }
	inline void SetTo(const wxSVGLength& n) { m_to = n; }

  public:
    wxSVGAnimationElement(wxString tagName = wxT("")):
      wxSVGElement(tagName), m_targetElement(NULL), m_begin(0), m_dur(0), m_from(0), m_to(0) {}
    virtual ~wxSVGAnimationElement() {}
    virtual double GetStartTime();
    virtual double GetCurrentTime();
    virtual double GetSimpleDuration();
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    wxSvgXmlAttrHash GetAttributes() const;
    void ApplyAnimation();
};

#endif // WX_SVG_ANIMATION_ELEMENT_H

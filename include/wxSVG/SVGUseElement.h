//////////////////////////////////////////////////////////////////////////////
// Name:        SVGUseElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_USE_ELEMENT_H
#define WX_SVG_USE_ELEMENT_H

class wxSVGElementInstance;
class wxSVGElementInstance;

#include "SVGElement.h"
#include "SVGURIReference.h"
#include "SVGTests.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGTransformable.h"
#include "EventTarget.h"
#include "SVGAnimatedLength.h"
#include "String.h"

class wxSVGUseElement:
  public wxSVGElement,
  public wxSVGURIReference,
  public wxSVGTests,
  public wxSVGLangSpace,
  public wxSVGExternalResourcesRequired,
  public wxSVGStylable,
  public wxSVGTransformable,
  public wxEventTarget
{
  protected:
	wxSVGAnimatedLength m_x;
	wxSVGAnimatedLength m_y;
	wxSVGAnimatedLength m_width;
	wxSVGAnimatedLength m_height;
	wxSVGElementInstance* m_instanceRoot;
	wxSVGElementInstance* m_animatedInstanceRoot;

  public:
	inline wxSVGLength& GetX() { return m_x.GetBaseVal(); }
	inline void SetX(const wxSVGLength& n) { m_x.GetBaseVal() = n; }

	inline wxSVGLength& GetY() { return m_y.GetBaseVal(); }
	inline void SetY(const wxSVGLength& n) { m_y.GetBaseVal() = n; }

	inline wxSVGLength& GetWidth() { return m_width.GetBaseVal(); }
	inline void SetWidth(const wxSVGLength& n) { m_width.GetBaseVal() = n; }

	inline wxSVGLength& GetHeight() { return m_height.GetBaseVal(); }
	inline void SetHeight(const wxSVGLength& n) { m_height.GetBaseVal() = n; }

	inline wxSVGElementInstance* GetInstanceRoot() { return m_instanceRoot; }
	inline void SetInstanceRoot(wxSVGElementInstance* n) { m_instanceRoot = n; }

	inline wxSVGElementInstance* GetAnimatedInstanceRoot() { return m_animatedInstanceRoot; }
	inline void SetAnimatedInstanceRoot(wxSVGElementInstance* n) { m_animatedInstanceRoot = n; }

  public:
	wxSVGUseElement(wxSVGDocument* doc, wxString tagName = wxT("use")):
	  wxSVGElement(doc, tagName), m_instanceRoot(NULL), m_animatedInstanceRoot(NULL) {}
	virtual ~wxSVGUseElement() {}
	virtual wxSVGRect GetBBox() { return wxSVGLocatable::GetBBox(this); }
	bool SetAttribute(const wxString& name, const wxString& value);
	virtual const wxSVGDTD GetDtd() const { return wxSVG_USE_ELEMENT; }
};

#endif // WX_SVG_USE_ELEMENT_H

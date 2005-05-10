//////////////////////////////////////////////////////////////////////////////
// Name:        SVGCircleElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_CIRCLE_ELEMENT_H
#define WX_SVG_CIRCLE_ELEMENT_H

class wxSVGCanvasItem;

#include "SVGElement.h"
#include "SVGTests.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGTransformable.h"
#include "EventTarget.h"
#include "SVGAnimatedLength.h"
#include "String.h"

class wxSVGCircleElement:
  public wxSVGElement,
  public wxSVGTests,
  public wxSVGLangSpace,
  public wxSVGExternalResourcesRequired,
  public wxSVGStylable,
  public wxSVGTransformable,
  public wxEventTarget
{
  protected:
	wxSVGAnimatedLength m_cx;
	wxSVGAnimatedLength m_cy;
	wxSVGAnimatedLength m_r;

  public:
	inline wxSVGLength& GetCx() { return m_cx.GetBaseVal(); }
	inline void SetCx(const wxSVGLength& n) { m_cx.GetBaseVal() = n; }

	inline wxSVGLength& GetCy() { return m_cy.GetBaseVal(); }
	inline void SetCy(const wxSVGLength& n) { m_cy.GetBaseVal() = n; }

	inline wxSVGLength& GetR() { return m_r.GetBaseVal(); }
	inline void SetR(const wxSVGLength& n) { m_r.GetBaseVal() = n; }

  public:
	inline wxSVGLength& GetAnimatedCx() { return m_cx.GetAnimVal(); }
	inline void SetAnimatedCx(const wxSVGLength& n) { m_cx.GetAnimVal() = n; }

	inline wxSVGLength& GetAnimatedCy() { return m_cy.GetAnimVal(); }
	inline void SetAnimatedCy(const wxSVGLength& n) { m_cy.GetAnimVal() = n; }

	inline wxSVGLength& GetAnimatedR() { return m_r.GetAnimVal(); }
	inline void SetAnimatedR(const wxSVGLength& n) { m_r.GetAnimVal() = n; }


  protected:
	wxSVGCanvasItem* m_canvasItem;
  public:
	inline wxSVGCanvasItem* GetCanvasItem() { return m_canvasItem; }
	inline void SetCanvasItem(wxSVGCanvasItem* canvasItem) { m_canvasItem = canvasItem; }

  public:
	wxSVGCircleElement(wxSVGDocument* doc, wxString tagName = wxT("circle")):
	  wxSVGElement(doc, tagName), m_canvasItem(NULL) {}
	virtual ~wxSVGCircleElement() {}
	wxSVGRect GetBBox();
	bool SetAttribute(const wxString& name, const wxString& value);
	virtual const wxSVGDTD GetDtd() const { return wxSVG_CIRCLE_ELEMENT; }
};

#endif // WX_SVG_CIRCLE_ELEMENT_H

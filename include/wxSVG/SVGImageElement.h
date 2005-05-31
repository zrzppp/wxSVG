//////////////////////////////////////////////////////////////////////////////
// Name:        SVGImageElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_IMAGE_ELEMENT_H
#define WX_SVG_IMAGE_ELEMENT_H

class wxSVGCanvasItem;

#include "SVGElement.h"
#include "SVGURIReference.h"
#include "SVGTests.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGTransformable.h"
#include "EventTarget.h"
#include "SVGAnimatedLength.h"
#include "SVGAnimatedPreserveAspectRatio.h"
#include "String.h"

class wxSVGImageElement:
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
	wxSVGAnimatedPreserveAspectRatio m_preserveAspectRatio;

  public:
	inline wxSVGLength& GetX() { return m_x.GetBaseVal(); }
	inline void SetX(const wxSVGLength& n) { m_x.GetBaseVal() = n; }

	inline wxSVGLength& GetY() { return m_y.GetBaseVal(); }
	inline void SetY(const wxSVGLength& n) { m_y.GetBaseVal() = n; }

	inline wxSVGLength& GetWidth() { return m_width.GetBaseVal(); }
	inline void SetWidth(const wxSVGLength& n) { m_width.GetBaseVal() = n; }

	inline wxSVGLength& GetHeight() { return m_height.GetBaseVal(); }
	inline void SetHeight(const wxSVGLength& n) { m_height.GetBaseVal() = n; }

	inline wxSVGPreserveAspectRatio& GetPreserveAspectRatio() { return m_preserveAspectRatio.GetBaseVal(); }
	inline void SetPreserveAspectRatio(const wxSVGPreserveAspectRatio& n) { m_preserveAspectRatio.GetBaseVal() = n; }

  public:
	inline wxSVGLength& GetAnimatedX() { return m_x.GetAnimVal(); }
	inline void SetAnimatedX(const wxSVGLength& n) { m_x.GetAnimVal() = n; }

	inline wxSVGLength& GetAnimatedY() { return m_y.GetAnimVal(); }
	inline void SetAnimatedY(const wxSVGLength& n) { m_y.GetAnimVal() = n; }

	inline wxSVGLength& GetAnimatedWidth() { return m_width.GetAnimVal(); }
	inline void SetAnimatedWidth(const wxSVGLength& n) { m_width.GetAnimVal() = n; }

	inline wxSVGLength& GetAnimatedHeight() { return m_height.GetAnimVal(); }
	inline void SetAnimatedHeight(const wxSVGLength& n) { m_height.GetAnimVal() = n; }

	inline wxSVGPreserveAspectRatio& GetAnimatedPreserveAspectRatio() { return m_preserveAspectRatio.GetAnimVal(); }
	inline void SetAnimatedPreserveAspectRatio(const wxSVGPreserveAspectRatio& n) { m_preserveAspectRatio.GetAnimVal() = n; }


  protected:
	wxSVGCanvasItem* m_canvasItem;
  public:
	inline wxSVGCanvasItem* GetCanvasItem() { return m_canvasItem; }
	inline void SetCanvasItem(wxSVGCanvasItem* canvasItem) { m_canvasItem = canvasItem; }

  public:
	wxSVGImageElement(wxSVGDocument* doc, wxString tagName = wxT("image")):
	  wxSVGElement(doc, tagName), m_canvasItem(NULL) {}
	virtual ~wxSVGImageElement() {}
	wxSVGRect GetBBox();
	bool SetAttribute(const wxString& name, const wxString& value);
	virtual const wxSVGDTD GetDtd() const { return wxSVG_IMAGE_ELEMENT; }
};

#endif // WX_SVG_IMAGE_ELEMENT_H

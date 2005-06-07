//////////////////////////////////////////////////////////////////////////////
// Name:        SVGStylable.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_STYLABLE_H
#define WX_SVG_STYLABLE_H

#include "SVGAnimatedString.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "String.h"

class wxSVGStylable
{
  protected:
	wxSVGAnimatedString m_className;
	wxCSSStyleDeclaration m_style;
	bool SetCustomAttribute(const wxString& name, const wxString& value);

  public:
	inline wxString GetClassName() const { return m_className.GetBaseVal(); }
	inline void SetClassName(const wxString& n) { m_className.GetBaseVal() = n; }

	inline wxCSSStyleDeclaration& GetStyle() { return m_style; }
	inline void SetStyle(const wxCSSStyleDeclaration& n) { m_style = n; }

  public:
    inline void SetClipPath(const wxString& value) { m_style.SetClipPath(value); }
    inline wxString GetClipPath() { return m_style.GetClipPath(); }
    inline bool HasClipPath() { return m_style.HasClipPath(); }
    
    inline void SetColor(const wxRGBColor& value) { m_style.SetColor(value); }
    inline wxRGBColor GetColor() { return m_style.GetColor(); }
    inline bool HasColor() { return m_style.HasColor(); }
    
    inline void SetDisplay(const wxString& value) { m_style.SetDisplay(value); }
    inline wxString GetDisplay() { return m_style.GetDisplay(); }
    inline bool HasDisplay() { return m_style.HasDisplay(); }
    
    inline void SetFill(const wxSVGPaint& value) { m_style.SetFill(value); }
    inline const wxSVGPaint& GetFill() { return m_style.GetFill(); }
    inline bool HasFill() { return m_style.HasFill(); }
    
    inline void SetFillOpacity(double value) { m_style.SetFillOpacity(value); }
    inline double GetFillOpacity() { return m_style.GetFillOpacity(); }
    inline bool HasFillOpacity() { return m_style.HasFillOpacity(); }
    
    inline void SetFillRule(const wxString& value) { m_style.SetFillRule(value); }
    inline wxString GetFillRule() { return m_style.GetFillRule(); }
    inline bool HasFillRule() { return m_style.HasFillRule(); }
    
    inline void SetFilter(const wxString& value) { m_style.SetFilter(value); }
    inline wxString GetFilter() { return m_style.GetFilter(); }
    inline bool HasFilter() { return m_style.HasFilter(); }
    
    inline void SetFontFamily(const wxString& value) { m_style.SetFontFamily(value); }
    inline wxString GetFontFamily() { return m_style.GetFontFamily(); }
    inline bool HasFontFamily() { return m_style.HasFontFamily(); }
    
    inline void SetFontSize(double value) { m_style.SetFontSize(value); }
    inline double GetFontSize() { return m_style.GetFontSize(); }
    inline bool HasFontSize() { return m_style.HasFontSize(); }
    
    inline void SetFontStretch(const wxString& value) { m_style.SetFontStretch(value); }
    inline wxString GetFontStretch() { return m_style.GetFontStretch(); }
    inline bool HasFontStretch() { return m_style.HasFontStretch(); }
    
    inline void SetFontStyle(const wxString& value) { m_style.SetFontStyle(value); }
    inline wxString GetFontStyle() { return m_style.GetFontStyle(); }
    inline bool HasFontStyle() { return m_style.HasFontStyle(); }
    
    inline void SetFontVariant(const wxString& value) { m_style.SetFontVariant(value); }
    inline wxString GetFontVariant() { return m_style.GetFontVariant(); }
    inline bool HasFontVariant() { return m_style.HasFontVariant(); }
    
    inline void SetFontWeight(const wxString& value) { m_style.SetFontWeight(value); }
    inline wxString GetFontWeight() { return m_style.GetFontWeight(); }
    inline bool HasFontWeight() { return m_style.HasFontWeight(); }
    
    inline void SetMarker(const wxString& value) { m_style.SetMarker(value); }
    inline wxString GetMarker() { return m_style.GetMarker(); }
    inline bool HasMarker() { return m_style.HasMarker(); }
    
    inline void SetMarkerEnd(const wxString& value) { m_style.SetMarkerEnd(value); }
    inline wxString GetMarkerEnd() { return m_style.GetMarkerEnd(); }
    inline bool HasMarkerEnd() { return m_style.HasMarkerEnd(); }
    
    inline void SetMarkerMid(const wxString& value) { m_style.SetMarkerMid(value); }
    inline wxString GetMarkerMid() { return m_style.GetMarkerMid(); }
    inline bool HasMarkerMid() { return m_style.HasMarkerMid(); }
    
    inline void SetMarkerStart(const wxString& value) { m_style.SetMarkerStart(value); }
    inline wxString GetMarkerStart() { return m_style.GetMarkerStart(); }
    inline bool HasMarkerStart() { return m_style.HasMarkerStart(); }
    
    inline void SetOpacity(double value) { m_style.SetOpacity(value); }
    inline double GetOpacity() { return m_style.GetOpacity(); }
    inline bool HasOpacity() { return m_style.HasOpacity(); }
    
    inline void SetStopColor(const wxSVGColor& value) { m_style.SetStopColor(value); }
    inline const wxSVGColor& GetStopColor() { return m_style.GetStopColor(); }
    inline bool HasStopColor() { return m_style.HasStopColor(); }
    
    inline void SetStopOpacity(double value) { m_style.SetStopOpacity(value); }
    inline double GetStopOpacity() { return m_style.GetStopOpacity(); }
    inline bool HasStopOpacity() { return m_style.HasStopOpacity(); }
    
    inline void SetStroke(const wxSVGPaint& value) { m_style.SetStroke(value); }
    inline const wxSVGPaint& GetStroke() { return m_style.GetStroke(); }
    inline bool HasStroke() { return m_style.HasStroke(); }
    
    inline void SetStrokeDashoffset(double value) { m_style.SetStrokeDashoffset(value); }
    inline double GetStrokeDashoffset() { return m_style.GetStrokeDashoffset(); }
    inline bool HasStrokeDashoffset() { return m_style.HasStrokeDashoffset(); }
    
    inline void SetStrokeLinecap(const wxString& value) { m_style.SetStrokeLinecap(value); }
    inline wxString GetStrokeLinecap() { return m_style.GetStrokeLinecap(); }
    inline bool HasStrokeLinecap() { return m_style.HasStrokeLinecap(); }
    
    inline void SetStrokeLinejoin(const wxString& value) { m_style.SetStrokeLinejoin(value); }
    inline wxString GetStrokeLinejoin() { return m_style.GetStrokeLinejoin(); }
    inline bool HasStrokeLinejoin() { return m_style.HasStrokeLinejoin(); }
    
    inline void SetStrokeMiterlimit(double value) { m_style.SetStrokeMiterlimit(value); }
    inline double GetStrokeMiterlimit() { return m_style.GetStrokeMiterlimit(); }
    inline bool HasStrokeMiterlimit() { return m_style.HasStrokeMiterlimit(); }
    
    inline void SetStrokeOpacity(double value) { m_style.SetStrokeOpacity(value); }
    inline double GetStrokeOpacity() { return m_style.GetStrokeOpacity(); }
    inline bool HasStrokeOpacity() { return m_style.HasStrokeOpacity(); }
    
    inline void SetStrokeWidth(double value) { m_style.SetStrokeWidth(value); }
    inline double GetStrokeWidth() { return m_style.GetStrokeWidth(); }
    inline bool HasStrokeWidth() { return m_style.HasStrokeWidth(); }
    
    inline void SetTextAnchor(const wxString& value) { m_style.SetTextAnchor(value); }
    inline wxString GetTextAnchor() { return m_style.GetTextAnchor(); }
    inline bool HasTextAnchor() { return m_style.HasTextAnchor(); }
    
    inline void SetVisibility(const wxString& value) { m_style.SetVisibility(value); }
    inline wxString GetVisibility() { return m_style.GetVisibility(); }
    inline bool HasVisibility() { return m_style.HasVisibility(); }
    
  public:
	virtual ~wxSVGStylable() {}
	inline void UpdateStyle(wxCSSStyleDeclaration& style) { style.Add(GetStyle()); }
	virtual const wxCSSValue& GetPresentationAttribute(const wxString& name);
	bool SetAttribute(const wxString& name, const wxString& value);
};

#endif // WX_SVG_STYLABLE_H

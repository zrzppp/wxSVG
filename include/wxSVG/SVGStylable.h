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
#include "String_wxsvg.h"
#include "Element.h"
#include "SVGElement.h"

class wxSVGStylable
{
  protected:
    wxSVGAnimatedString m_className;
    wxCSSStyleDeclaration m_style;
    wxCSSStyleDeclaration m_animStyle;
    bool HasCustomAttribute(const wxString& name);
    wxString GetCustomAttribute(const wxString& name);
    bool SetCustomAttribute(const wxString& name, const wxString& value);

  public:
    inline const wxSVGAnimatedString& GetClassName() const { return m_className; }
    inline void SetClassName(const wxSVGAnimatedString& n) { m_className = n; }
    inline void SetClassName(const wxString& n) { m_className.SetBaseVal(n); }

    inline const wxCSSStyleDeclaration& GetStyle() const { return m_style; }
    inline void SetStyle(const wxCSSStyleDeclaration& n) { m_style = n; }

    inline const wxCSSStyleDeclaration& GetAnimStyle() const { return m_animStyle; }
    inline void SetAnimStyle(const wxCSSStyleDeclaration& n) { m_animStyle = n; }

  public:
    inline void SetAlignmentBaseline(wxCSS_VALUE value) { m_style.SetAlignmentBaseline(value); }
    inline wxCSS_VALUE GetAlignmentBaseline() { return m_style.GetAlignmentBaseline(); }
    inline bool HasAlignmentBaseline() { return m_style.HasAlignmentBaseline(); }
    
    inline void SetBaselineShift(const wxCSSPrimitiveValue& value) { m_style.SetBaselineShift(value); }
    inline const wxCSSPrimitiveValue& GetBaselineShift() { return m_style.GetBaselineShift(); }
    inline bool HasBaselineShift() { return m_style.HasBaselineShift(); }
    
    inline void SetClip(const wxCSSPrimitiveValue& value) { m_style.SetClip(value); }
    inline const wxCSSPrimitiveValue& GetClip() { return m_style.GetClip(); }
    inline bool HasClip() { return m_style.HasClip(); }
    
    inline void SetClipPath(const wxCSSPrimitiveValue& value) { m_style.SetClipPath(value); }
    inline const wxCSSPrimitiveValue& GetClipPath() { return m_style.GetClipPath(); }
    inline bool HasClipPath() { return m_style.HasClipPath(); }
    
    inline void SetClipRule(wxCSS_VALUE value) { m_style.SetClipRule(value); }
    inline wxCSS_VALUE GetClipRule() { return m_style.GetClipRule(); }
    inline bool HasClipRule() { return m_style.HasClipRule(); }
    
    inline void SetColor(const wxRGBColor& value) { m_style.SetColor(value); }
    inline wxRGBColor GetColor() { return m_style.GetColor(); }
    inline bool HasColor() { return m_style.HasColor(); }
    
    inline void SetColorInterpolation(wxCSS_VALUE value) { m_style.SetColorInterpolation(value); }
    inline wxCSS_VALUE GetColorInterpolation() { return m_style.GetColorInterpolation(); }
    inline bool HasColorInterpolation() { return m_style.HasColorInterpolation(); }
    
    inline void SetColorInterpolationFilters(wxCSS_VALUE value) { m_style.SetColorInterpolationFilters(value); }
    inline wxCSS_VALUE GetColorInterpolationFilters() { return m_style.GetColorInterpolationFilters(); }
    inline bool HasColorInterpolationFilters() { return m_style.HasColorInterpolationFilters(); }
    
    inline void SetColorProfile(const wxCSSPrimitiveValue& value) { m_style.SetColorProfile(value); }
    inline const wxCSSPrimitiveValue& GetColorProfile() { return m_style.GetColorProfile(); }
    inline bool HasColorProfile() { return m_style.HasColorProfile(); }
    
    inline void SetColorRendering(wxCSS_VALUE value) { m_style.SetColorRendering(value); }
    inline wxCSS_VALUE GetColorRendering() { return m_style.GetColorRendering(); }
    inline bool HasColorRendering() { return m_style.HasColorRendering(); }
    
    inline void SetCursor(const wxCSSPrimitiveValue& value) { m_style.SetCursor(value); }
    inline const wxCSSPrimitiveValue& GetCursor() { return m_style.GetCursor(); }
    inline bool HasCursor() { return m_style.HasCursor(); }
    
    inline void SetDirection(wxCSS_VALUE value) { m_style.SetDirection(value); }
    inline wxCSS_VALUE GetDirection() { return m_style.GetDirection(); }
    inline bool HasDirection() { return m_style.HasDirection(); }
    
    inline void SetDisplay(wxCSS_VALUE value) { m_style.SetDisplay(value); }
    inline wxCSS_VALUE GetDisplay() { return m_style.GetDisplay(); }
    inline bool HasDisplay() { return m_style.HasDisplay(); }
    
    inline void SetDominantBaseline(wxCSS_VALUE value) { m_style.SetDominantBaseline(value); }
    inline wxCSS_VALUE GetDominantBaseline() { return m_style.GetDominantBaseline(); }
    inline bool HasDominantBaseline() { return m_style.HasDominantBaseline(); }
    
    inline void SetEnableBackground(wxCSS_VALUE value) { m_style.SetEnableBackground(value); }
    inline wxCSS_VALUE GetEnableBackground() { return m_style.GetEnableBackground(); }
    inline bool HasEnableBackground() { return m_style.HasEnableBackground(); }
    
    inline void SetFill(const wxSVGPaint& value) { m_style.SetFill(value); }
    inline const wxSVGPaint& GetFill() { return m_style.GetFill(); }
    inline bool HasFill() { return m_style.HasFill(); }
    
    inline void SetFillOpacity(double value) { m_style.SetFillOpacity(value); }
    inline double GetFillOpacity() { return m_style.GetFillOpacity(); }
    inline bool HasFillOpacity() { return m_style.HasFillOpacity(); }
    
    inline void SetFillRule(wxCSS_VALUE value) { m_style.SetFillRule(value); }
    inline wxCSS_VALUE GetFillRule() { return m_style.GetFillRule(); }
    inline bool HasFillRule() { return m_style.HasFillRule(); }
    
    inline void SetFilter(const wxCSSPrimitiveValue& value) { m_style.SetFilter(value); }
    inline const wxCSSPrimitiveValue& GetFilter() { return m_style.GetFilter(); }
    inline bool HasFilter() { return m_style.HasFilter(); }
    
    inline void SetFloodColor(const wxSVGColor& value) { m_style.SetFloodColor(value); }
    inline const wxSVGColor& GetFloodColor() { return m_style.GetFloodColor(); }
    inline bool HasFloodColor() { return m_style.HasFloodColor(); }
    
    inline void SetFloodOpacity(double value) { m_style.SetFloodOpacity(value); }
    inline double GetFloodOpacity() { return m_style.GetFloodOpacity(); }
    inline bool HasFloodOpacity() { return m_style.HasFloodOpacity(); }
    
    inline void SetFontFamily(const wxString& value) { m_style.SetFontFamily(value); }
    inline wxString GetFontFamily() { return m_style.GetFontFamily(); }
    inline bool HasFontFamily() { return m_style.HasFontFamily(); }
    
    inline void SetFontSize(double value) { m_style.SetFontSize(value); }
    inline double GetFontSize() { return m_style.GetFontSize(); }
    inline bool HasFontSize() { return m_style.HasFontSize(); }
    
    inline void SetFontSizeAdjust(const wxCSSPrimitiveValue& value) { m_style.SetFontSizeAdjust(value); }
    inline const wxCSSPrimitiveValue& GetFontSizeAdjust() { return m_style.GetFontSizeAdjust(); }
    inline bool HasFontSizeAdjust() { return m_style.HasFontSizeAdjust(); }
    
    inline void SetFontStretch(wxCSS_VALUE value) { m_style.SetFontStretch(value); }
    inline wxCSS_VALUE GetFontStretch() { return m_style.GetFontStretch(); }
    inline bool HasFontStretch() { return m_style.HasFontStretch(); }
    
    inline void SetFontStyle(wxCSS_VALUE value) { m_style.SetFontStyle(value); }
    inline wxCSS_VALUE GetFontStyle() { return m_style.GetFontStyle(); }
    inline bool HasFontStyle() { return m_style.HasFontStyle(); }
    
    inline void SetFontVariant(wxCSS_VALUE value) { m_style.SetFontVariant(value); }
    inline wxCSS_VALUE GetFontVariant() { return m_style.GetFontVariant(); }
    inline bool HasFontVariant() { return m_style.HasFontVariant(); }
    
    inline void SetFontWeight(wxCSS_VALUE value) { m_style.SetFontWeight(value); }
    inline wxCSS_VALUE GetFontWeight() { return m_style.GetFontWeight(); }
    inline bool HasFontWeight() { return m_style.HasFontWeight(); }
    
    inline void SetGlyphOrientationHorizontal(double value) { m_style.SetGlyphOrientationHorizontal(value); }
    inline double GetGlyphOrientationHorizontal() { return m_style.GetGlyphOrientationHorizontal(); }
    inline bool HasGlyphOrientationHorizontal() { return m_style.HasGlyphOrientationHorizontal(); }
    
    inline void SetGlyphOrientationVertical(const wxCSSPrimitiveValue& value) { m_style.SetGlyphOrientationVertical(value); }
    inline const wxCSSPrimitiveValue& GetGlyphOrientationVertical() { return m_style.GetGlyphOrientationVertical(); }
    inline bool HasGlyphOrientationVertical() { return m_style.HasGlyphOrientationVertical(); }
    
    inline void SetImageRendering(wxCSS_VALUE value) { m_style.SetImageRendering(value); }
    inline wxCSS_VALUE GetImageRendering() { return m_style.GetImageRendering(); }
    inline bool HasImageRendering() { return m_style.HasImageRendering(); }
    
    inline void SetKerning(const wxCSSPrimitiveValue& value) { m_style.SetKerning(value); }
    inline const wxCSSPrimitiveValue& GetKerning() { return m_style.GetKerning(); }
    inline bool HasKerning() { return m_style.HasKerning(); }
    
    inline void SetLetterSpacing(const wxCSSPrimitiveValue& value) { m_style.SetLetterSpacing(value); }
    inline const wxCSSPrimitiveValue& GetLetterSpacing() { return m_style.GetLetterSpacing(); }
    inline bool HasLetterSpacing() { return m_style.HasLetterSpacing(); }
    
    inline void SetLightingColor(const wxSVGColor& value) { m_style.SetLightingColor(value); }
    inline const wxSVGColor& GetLightingColor() { return m_style.GetLightingColor(); }
    inline bool HasLightingColor() { return m_style.HasLightingColor(); }
    
    inline void SetMarkerEnd(const wxCSSPrimitiveValue& value) { m_style.SetMarkerEnd(value); }
    inline const wxCSSPrimitiveValue& GetMarkerEnd() { return m_style.GetMarkerEnd(); }
    inline bool HasMarkerEnd() { return m_style.HasMarkerEnd(); }
    
    inline void SetMarkerMid(const wxCSSPrimitiveValue& value) { m_style.SetMarkerMid(value); }
    inline const wxCSSPrimitiveValue& GetMarkerMid() { return m_style.GetMarkerMid(); }
    inline bool HasMarkerMid() { return m_style.HasMarkerMid(); }
    
    inline void SetMarkerStart(const wxCSSPrimitiveValue& value) { m_style.SetMarkerStart(value); }
    inline const wxCSSPrimitiveValue& GetMarkerStart() { return m_style.GetMarkerStart(); }
    inline bool HasMarkerStart() { return m_style.HasMarkerStart(); }
    
    inline void SetMask(const wxCSSPrimitiveValue& value) { m_style.SetMask(value); }
    inline const wxCSSPrimitiveValue& GetMask() { return m_style.GetMask(); }
    inline bool HasMask() { return m_style.HasMask(); }
    
    inline void SetOpacity(double value) { m_style.SetOpacity(value); }
    inline double GetOpacity() { return m_style.GetOpacity(); }
    inline bool HasOpacity() { return m_style.HasOpacity(); }
    
    inline void SetOverflow(wxCSS_VALUE value) { m_style.SetOverflow(value); }
    inline wxCSS_VALUE GetOverflow() { return m_style.GetOverflow(); }
    inline bool HasOverflow() { return m_style.HasOverflow(); }
    
    inline void SetPointerEvents(wxCSS_VALUE value) { m_style.SetPointerEvents(value); }
    inline wxCSS_VALUE GetPointerEvents() { return m_style.GetPointerEvents(); }
    inline bool HasPointerEvents() { return m_style.HasPointerEvents(); }
    
    inline void SetShapeRendering(wxCSS_VALUE value) { m_style.SetShapeRendering(value); }
    inline wxCSS_VALUE GetShapeRendering() { return m_style.GetShapeRendering(); }
    inline bool HasShapeRendering() { return m_style.HasShapeRendering(); }
    
    inline void SetStopColor(const wxSVGColor& value) { m_style.SetStopColor(value); }
    inline const wxSVGColor& GetStopColor() { return m_style.GetStopColor(); }
    inline bool HasStopColor() { return m_style.HasStopColor(); }
    
    inline void SetStopOpacity(double value) { m_style.SetStopOpacity(value); }
    inline double GetStopOpacity() { return m_style.GetStopOpacity(); }
    inline bool HasStopOpacity() { return m_style.HasStopOpacity(); }
    
    inline void SetStroke(const wxSVGPaint& value) { m_style.SetStroke(value); }
    inline const wxSVGPaint& GetStroke() { return m_style.GetStroke(); }
    inline bool HasStroke() { return m_style.HasStroke(); }
    
    inline void SetStrokeDasharray(const wxCSSPrimitiveValue& value) { m_style.SetStrokeDasharray(value); }
    inline const wxCSSPrimitiveValue& GetStrokeDasharray() { return m_style.GetStrokeDasharray(); }
    inline bool HasStrokeDasharray() { return m_style.HasStrokeDasharray(); }
    
    inline void SetStrokeDashoffset(double value) { m_style.SetStrokeDashoffset(value); }
    inline double GetStrokeDashoffset() { return m_style.GetStrokeDashoffset(); }
    inline bool HasStrokeDashoffset() { return m_style.HasStrokeDashoffset(); }
    
    inline void SetStrokeLinecap(wxCSS_VALUE value) { m_style.SetStrokeLinecap(value); }
    inline wxCSS_VALUE GetStrokeLinecap() { return m_style.GetStrokeLinecap(); }
    inline bool HasStrokeLinecap() { return m_style.HasStrokeLinecap(); }
    
    inline void SetStrokeLinejoin(wxCSS_VALUE value) { m_style.SetStrokeLinejoin(value); }
    inline wxCSS_VALUE GetStrokeLinejoin() { return m_style.GetStrokeLinejoin(); }
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
    
    inline void SetTextAnchor(wxCSS_VALUE value) { m_style.SetTextAnchor(value); }
    inline wxCSS_VALUE GetTextAnchor() { return m_style.GetTextAnchor(); }
    inline bool HasTextAnchor() { return m_style.HasTextAnchor(); }
    
    inline void SetTextDecoration(wxCSS_VALUE value) { m_style.SetTextDecoration(value); }
    inline wxCSS_VALUE GetTextDecoration() { return m_style.GetTextDecoration(); }
    inline bool HasTextDecoration() { return m_style.HasTextDecoration(); }
    
    inline void SetTextRendering(wxCSS_VALUE value) { m_style.SetTextRendering(value); }
    inline wxCSS_VALUE GetTextRendering() { return m_style.GetTextRendering(); }
    inline bool HasTextRendering() { return m_style.HasTextRendering(); }
    
    inline void SetUnicodeBidi(wxCSS_VALUE value) { m_style.SetUnicodeBidi(value); }
    inline wxCSS_VALUE GetUnicodeBidi() { return m_style.GetUnicodeBidi(); }
    inline bool HasUnicodeBidi() { return m_style.HasUnicodeBidi(); }
    
    inline void SetVisibility(wxCSS_VALUE value) { m_style.SetVisibility(value); }
    inline wxCSS_VALUE GetVisibility() { return m_style.GetVisibility(); }
    inline bool HasVisibility() { return m_style.HasVisibility(); }
    
    inline void SetWordSpacing(const wxCSSPrimitiveValue& value) { m_style.SetWordSpacing(value); }
    inline const wxCSSPrimitiveValue& GetWordSpacing() { return m_style.GetWordSpacing(); }
    inline bool HasWordSpacing() { return m_style.HasWordSpacing(); }
    
    inline void SetWritingMode(wxCSS_VALUE value) { m_style.SetWritingMode(value); }
    inline wxCSS_VALUE GetWritingMode() { return m_style.GetWritingMode(); }
    inline bool HasWritingMode() { return m_style.HasWritingMode(); }
    
  public:
    virtual ~wxSVGStylable() {}
    static wxSVGStylable* GetSVGStylable(wxSVGElement& element);
    static const wxSVGStylable* GetSVGStylable(const wxSVGElement& element);
    static const wxCSSStyleDeclaration& GetElementStyle(const wxSVGElement& element);
    static wxCSSStyleDeclaration GetResultStyle(const wxSVGElement& element);
    virtual const wxCSSValue& GetPresentationAttribute(const wxString& name);
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    wxSvgXmlAttrHash GetAttributes() const;
};

#endif // WX_SVG_STYLABLE_H

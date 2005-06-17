//////////////////////////////////////////////////////////////////////////////
// Name:        CSSStyleDeclaration.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by genCSS.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_CSS_STYLE_DECLARATION_H
#define WX_CSS_STYLE_DECLARATION_H


#include "CSSValue.h"
#include "SVGPaint.h"
#include <wx/hashmap.h>

enum wxCSS_PROPERTY
{
  wxCSS_PROPERTY_UNKNOWN,
  wxCSS_PROPERTY_CLIP_PATH,
  wxCSS_PROPERTY_COLOR,
  wxCSS_PROPERTY_DISPLAY,
  wxCSS_PROPERTY_FILL,
  wxCSS_PROPERTY_FILL_OPACITY,
  wxCSS_PROPERTY_FILL_RULE,
  wxCSS_PROPERTY_FILTER,
  wxCSS_PROPERTY_FONT_FAMILY,
  wxCSS_PROPERTY_FONT_SIZE,
  wxCSS_PROPERTY_FONT_STRETCH,
  wxCSS_PROPERTY_FONT_STYLE,
  wxCSS_PROPERTY_FONT_VARIANT,
  wxCSS_PROPERTY_FONT_WEIGHT,
  wxCSS_PROPERTY_MARKER,
  wxCSS_PROPERTY_MARKER_END,
  wxCSS_PROPERTY_MARKER_MID,
  wxCSS_PROPERTY_MARKER_START,
  wxCSS_PROPERTY_OPACITY,
  wxCSS_PROPERTY_STOP_COLOR,
  wxCSS_PROPERTY_STOP_OPACITY,
  wxCSS_PROPERTY_STROKE,
  wxCSS_PROPERTY_STROKE_DASHOFFSET,
  wxCSS_PROPERTY_STROKE_LINECAP,
  wxCSS_PROPERTY_STROKE_LINEJOIN,
  wxCSS_PROPERTY_STROKE_MITERLIMIT,
  wxCSS_PROPERTY_STROKE_OPACITY,
  wxCSS_PROPERTY_STROKE_WIDTH,
  wxCSS_PROPERTY_TEXT_ANCHOR,
  wxCSS_PROPERTY_VISIBILITY
};

WX_DECLARE_HASH_MAP(wxCSS_PROPERTY, wxCSSValue*, wxIntegerHash, wxIntegerEqual, wxHashMapCSSValue);

typedef wxString wxCSSStyler;

class wxCSSStyleDeclaration: public wxHashMapCSSValue
{
  public:
    wxCSSStyleDeclaration() {}
    wxCSSStyleDeclaration(const wxCSSStyleDeclaration& src) { Add(src); }
    ~wxCSSStyleDeclaration();
    void Add(const wxCSSStyleDeclaration& style);

  public:
    wxString GetCSSText();
    void SetCSSText(const wxString& text);
    
    inline wxString GetPropertyValue(const wxString& propertyName)
    { return GetPropertyValue(GetPropertyId(propertyName)); }
    
    inline const wxCSSValue& GetPropertyCSSValue(const wxString& propertyName)
    { return GetPropertyCSSValue(GetPropertyId(propertyName)); }
    
    inline wxString RemoveProperty(const wxString& propertyName)
    { return RemoveProperty(GetPropertyId(propertyName)); }
      
    void SetProperty(const wxString& propertyName, const wxString& value)
    { SetProperty(GetPropertyId(propertyName), value); }
    
    inline bool HasProperty(const wxString& propertyName)
    { return HasProperty(GetPropertyId(propertyName)); }
  
  public:
    inline wxString GetPropertyValue(wxCSS_PROPERTY propertyId)
    { iterator it = find(propertyId); if (it != end()) return it->second->GetCSSText(); return wxT(""); }
    
    inline const wxCSSValue& GetPropertyCSSValue(wxCSS_PROPERTY propertyId)
    { iterator it = find(propertyId); if (it != end()) return *it->second; return *s_emptyCSSValue; }
    
    inline wxString RemoveProperty(wxCSS_PROPERTY propertyId)
    { erase(propertyId); return wxT(""); }
      
    void SetProperty(wxCSS_PROPERTY propertyId, const wxString& value);
    
    inline bool HasProperty(wxCSS_PROPERTY propertyId)
    { return find(propertyId) != end(); }
    
    static wxCSS_PROPERTY GetPropertyId(const wxString& propertyName);
    
    static wxString GetPropertyName(wxCSS_PROPERTY propertyId);
  
  public:
    inline const wxCSSPrimitiveValue& GetClipPath()
    {
      iterator it = find(wxCSS_PROPERTY_CLIP_PATH);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second) : *s_emptyCSSValue;
    }
    inline bool HasClipPath() { return HasProperty(wxCSS_PROPERTY_CLIP_PATH); }
    inline void SetClipPath(const wxCSSPrimitiveValue& value)
    {
      iterator it = find(wxCSS_PROPERTY_CLIP_PATH);
      if (it != end())
      {
        delete it->second;
        it->second = new wxCSSPrimitiveValue(value);
      }
      else
        (*this)[wxCSS_PROPERTY_CLIP_PATH] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxRGBColor GetColor()
    {
      iterator it = find(wxCSS_PROPERTY_COLOR);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetRGBColorValue() : wxRGBColor();
    }
    inline bool HasColor() { return HasProperty(wxCSS_PROPERTY_COLOR); }
    inline void SetColor(const wxRGBColor& value)
    {
      iterator it = find(wxCSS_PROPERTY_COLOR);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetRGBColorValue(value);
      else
        (*this)[wxCSS_PROPERTY_COLOR] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetDisplay()
    {
      iterator it = find(wxCSS_PROPERTY_DISPLAY);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_INLINE;
    }
    inline bool HasDisplay() { return HasProperty(wxCSS_PROPERTY_DISPLAY); }
    inline void SetDisplay(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_DISPLAY);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_DISPLAY] = new wxCSSPrimitiveValue(value);
    }
    

    inline const wxSVGPaint& GetFill()
    {
      iterator it = find(wxCSS_PROPERTY_FILL);
      return it != end() ? ((wxSVGPaint&)*it->second) : *s_blackSVGPaint;
    }
    inline bool HasFill() { return HasProperty(wxCSS_PROPERTY_FILL); }
    inline void SetFill(const wxSVGPaint& value)
    {
      iterator it = find(wxCSS_PROPERTY_FILL);
      if (it != end())
      {
        delete it->second;
        it->second = new wxSVGPaint(value);
      }
      else
        (*this)[wxCSS_PROPERTY_FILL] = new wxSVGPaint(value);
    }
    

    inline double GetFillOpacity()
    {
      iterator it = find(wxCSS_PROPERTY_FILL_OPACITY);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetFloatValue() : 1;
    }
    inline bool HasFillOpacity() { return HasProperty(wxCSS_PROPERTY_FILL_OPACITY); }
    inline void SetFillOpacity(double value)
    {
      iterator it = find(wxCSS_PROPERTY_FILL_OPACITY);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetFloatValue(wxCSS_NUMBER, value);
      else
        (*this)[wxCSS_PROPERTY_FILL_OPACITY] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetFillRule()
    {
      iterator it = find(wxCSS_PROPERTY_FILL_RULE);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_NONZERO;
    }
    inline bool HasFillRule() { return HasProperty(wxCSS_PROPERTY_FILL_RULE); }
    inline void SetFillRule(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_FILL_RULE);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_FILL_RULE] = new wxCSSPrimitiveValue(value);
    }
    

    inline const wxCSSPrimitiveValue& GetFilter()
    {
      iterator it = find(wxCSS_PROPERTY_FILTER);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second) : *s_emptyCSSValue;
    }
    inline bool HasFilter() { return HasProperty(wxCSS_PROPERTY_FILTER); }
    inline void SetFilter(const wxCSSPrimitiveValue& value)
    {
      iterator it = find(wxCSS_PROPERTY_FILTER);
      if (it != end())
      {
        delete it->second;
        it->second = new wxCSSPrimitiveValue(value);
      }
      else
        (*this)[wxCSS_PROPERTY_FILTER] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxString GetFontFamily()
    {
      iterator it = find(wxCSS_PROPERTY_FONT_FAMILY);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetStringValue() : wxT("");
    }
    inline bool HasFontFamily() { return HasProperty(wxCSS_PROPERTY_FONT_FAMILY); }
    inline void SetFontFamily(const wxString& value)
    {
      iterator it = find(wxCSS_PROPERTY_FONT_FAMILY);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetStringValue(wxCSS_STRING, value);
      else
        (*this)[wxCSS_PROPERTY_FONT_FAMILY] = new wxCSSPrimitiveValue(value);
    }
    

    inline double GetFontSize()
    {
      iterator it = find(wxCSS_PROPERTY_FONT_SIZE);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetFloatValue() : 20;
    }
    inline bool HasFontSize() { return HasProperty(wxCSS_PROPERTY_FONT_SIZE); }
    inline void SetFontSize(double value)
    {
      iterator it = find(wxCSS_PROPERTY_FONT_SIZE);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetFloatValue(wxCSS_NUMBER, value);
      else
        (*this)[wxCSS_PROPERTY_FONT_SIZE] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetFontStretch()
    {
      iterator it = find(wxCSS_PROPERTY_FONT_STRETCH);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_NORMAL;
    }
    inline bool HasFontStretch() { return HasProperty(wxCSS_PROPERTY_FONT_STRETCH); }
    inline void SetFontStretch(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_FONT_STRETCH);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_FONT_STRETCH] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetFontStyle()
    {
      iterator it = find(wxCSS_PROPERTY_FONT_STYLE);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_NORMAL;
    }
    inline bool HasFontStyle() { return HasProperty(wxCSS_PROPERTY_FONT_STYLE); }
    inline void SetFontStyle(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_FONT_STYLE);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_FONT_STYLE] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetFontVariant()
    {
      iterator it = find(wxCSS_PROPERTY_FONT_VARIANT);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_NORMAL;
    }
    inline bool HasFontVariant() { return HasProperty(wxCSS_PROPERTY_FONT_VARIANT); }
    inline void SetFontVariant(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_FONT_VARIANT);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_FONT_VARIANT] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetFontWeight()
    {
      iterator it = find(wxCSS_PROPERTY_FONT_WEIGHT);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_NORMAL;
    }
    inline bool HasFontWeight() { return HasProperty(wxCSS_PROPERTY_FONT_WEIGHT); }
    inline void SetFontWeight(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_FONT_WEIGHT);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_FONT_WEIGHT] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxString GetMarker()
    {
      iterator it = find(wxCSS_PROPERTY_MARKER);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetStringValue() : wxT("");
    }
    inline bool HasMarker() { return HasProperty(wxCSS_PROPERTY_MARKER); }
    inline void SetMarker(const wxString& value)
    {
      iterator it = find(wxCSS_PROPERTY_MARKER);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetStringValue(wxCSS_STRING, value);
      else
        (*this)[wxCSS_PROPERTY_MARKER] = new wxCSSPrimitiveValue(value);
    }
    

    inline const wxCSSPrimitiveValue& GetMarkerEnd()
    {
      iterator it = find(wxCSS_PROPERTY_MARKER_END);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second) : *s_emptyCSSValue;
    }
    inline bool HasMarkerEnd() { return HasProperty(wxCSS_PROPERTY_MARKER_END); }
    inline void SetMarkerEnd(const wxCSSPrimitiveValue& value)
    {
      iterator it = find(wxCSS_PROPERTY_MARKER_END);
      if (it != end())
      {
        delete it->second;
        it->second = new wxCSSPrimitiveValue(value);
      }
      else
        (*this)[wxCSS_PROPERTY_MARKER_END] = new wxCSSPrimitiveValue(value);
    }
    

    inline const wxCSSPrimitiveValue& GetMarkerMid()
    {
      iterator it = find(wxCSS_PROPERTY_MARKER_MID);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second) : *s_emptyCSSValue;
    }
    inline bool HasMarkerMid() { return HasProperty(wxCSS_PROPERTY_MARKER_MID); }
    inline void SetMarkerMid(const wxCSSPrimitiveValue& value)
    {
      iterator it = find(wxCSS_PROPERTY_MARKER_MID);
      if (it != end())
      {
        delete it->second;
        it->second = new wxCSSPrimitiveValue(value);
      }
      else
        (*this)[wxCSS_PROPERTY_MARKER_MID] = new wxCSSPrimitiveValue(value);
    }
    

    inline const wxCSSPrimitiveValue& GetMarkerStart()
    {
      iterator it = find(wxCSS_PROPERTY_MARKER_START);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second) : *s_emptyCSSValue;
    }
    inline bool HasMarkerStart() { return HasProperty(wxCSS_PROPERTY_MARKER_START); }
    inline void SetMarkerStart(const wxCSSPrimitiveValue& value)
    {
      iterator it = find(wxCSS_PROPERTY_MARKER_START);
      if (it != end())
      {
        delete it->second;
        it->second = new wxCSSPrimitiveValue(value);
      }
      else
        (*this)[wxCSS_PROPERTY_MARKER_START] = new wxCSSPrimitiveValue(value);
    }
    

    inline double GetOpacity()
    {
      iterator it = find(wxCSS_PROPERTY_OPACITY);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetFloatValue() : 1;
    }
    inline bool HasOpacity() { return HasProperty(wxCSS_PROPERTY_OPACITY); }
    inline void SetOpacity(double value)
    {
      iterator it = find(wxCSS_PROPERTY_OPACITY);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetFloatValue(wxCSS_NUMBER, value);
      else
        (*this)[wxCSS_PROPERTY_OPACITY] = new wxCSSPrimitiveValue(value);
    }
    

    inline const wxSVGColor& GetStopColor()
    {
      iterator it = find(wxCSS_PROPERTY_STOP_COLOR);
      return it != end() ? ((wxSVGColor&)*it->second) : *s_emptySVGColor;
    }
    inline bool HasStopColor() { return HasProperty(wxCSS_PROPERTY_STOP_COLOR); }
    inline void SetStopColor(const wxSVGColor& value)
    {
      iterator it = find(wxCSS_PROPERTY_STOP_COLOR);
      if (it != end())
      {
        delete it->second;
        it->second = new wxSVGColor(value);
      }
      else
        (*this)[wxCSS_PROPERTY_STOP_COLOR] = new wxSVGColor(value);
    }
    

    inline double GetStopOpacity()
    {
      iterator it = find(wxCSS_PROPERTY_STOP_OPACITY);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetFloatValue() :  1;
    }
    inline bool HasStopOpacity() { return HasProperty(wxCSS_PROPERTY_STOP_OPACITY); }
    inline void SetStopOpacity(double value)
    {
      iterator it = find(wxCSS_PROPERTY_STOP_OPACITY);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetFloatValue(wxCSS_NUMBER, value);
      else
        (*this)[wxCSS_PROPERTY_STOP_OPACITY] = new wxCSSPrimitiveValue(value);
    }
    

    inline const wxSVGPaint& GetStroke()
    {
      iterator it = find(wxCSS_PROPERTY_STROKE);
      return it != end() ? ((wxSVGPaint&)*it->second) : *s_emptySVGPaint;
    }
    inline bool HasStroke() { return HasProperty(wxCSS_PROPERTY_STROKE); }
    inline void SetStroke(const wxSVGPaint& value)
    {
      iterator it = find(wxCSS_PROPERTY_STROKE);
      if (it != end())
      {
        delete it->second;
        it->second = new wxSVGPaint(value);
      }
      else
        (*this)[wxCSS_PROPERTY_STROKE] = new wxSVGPaint(value);
    }
    

    inline double GetStrokeDashoffset()
    {
      iterator it = find(wxCSS_PROPERTY_STROKE_DASHOFFSET);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetFloatValue() : 0;
    }
    inline bool HasStrokeDashoffset() { return HasProperty(wxCSS_PROPERTY_STROKE_DASHOFFSET); }
    inline void SetStrokeDashoffset(double value)
    {
      iterator it = find(wxCSS_PROPERTY_STROKE_DASHOFFSET);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetFloatValue(wxCSS_NUMBER, value);
      else
        (*this)[wxCSS_PROPERTY_STROKE_DASHOFFSET] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetStrokeLinecap()
    {
      iterator it = find(wxCSS_PROPERTY_STROKE_LINECAP);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_BUTT;
    }
    inline bool HasStrokeLinecap() { return HasProperty(wxCSS_PROPERTY_STROKE_LINECAP); }
    inline void SetStrokeLinecap(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_STROKE_LINECAP);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_STROKE_LINECAP] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetStrokeLinejoin()
    {
      iterator it = find(wxCSS_PROPERTY_STROKE_LINEJOIN);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_MITER;
    }
    inline bool HasStrokeLinejoin() { return HasProperty(wxCSS_PROPERTY_STROKE_LINEJOIN); }
    inline void SetStrokeLinejoin(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_STROKE_LINEJOIN);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_STROKE_LINEJOIN] = new wxCSSPrimitiveValue(value);
    }
    

    inline double GetStrokeMiterlimit()
    {
      iterator it = find(wxCSS_PROPERTY_STROKE_MITERLIMIT);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetFloatValue() : 4;
    }
    inline bool HasStrokeMiterlimit() { return HasProperty(wxCSS_PROPERTY_STROKE_MITERLIMIT); }
    inline void SetStrokeMiterlimit(double value)
    {
      iterator it = find(wxCSS_PROPERTY_STROKE_MITERLIMIT);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetFloatValue(wxCSS_NUMBER, value);
      else
        (*this)[wxCSS_PROPERTY_STROKE_MITERLIMIT] = new wxCSSPrimitiveValue(value);
    }
    

    inline double GetStrokeOpacity()
    {
      iterator it = find(wxCSS_PROPERTY_STROKE_OPACITY);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetFloatValue() : 1;
    }
    inline bool HasStrokeOpacity() { return HasProperty(wxCSS_PROPERTY_STROKE_OPACITY); }
    inline void SetStrokeOpacity(double value)
    {
      iterator it = find(wxCSS_PROPERTY_STROKE_OPACITY);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetFloatValue(wxCSS_NUMBER, value);
      else
        (*this)[wxCSS_PROPERTY_STROKE_OPACITY] = new wxCSSPrimitiveValue(value);
    }
    

    inline double GetStrokeWidth()
    {
      iterator it = find(wxCSS_PROPERTY_STROKE_WIDTH);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetFloatValue() : 1;
    }
    inline bool HasStrokeWidth() { return HasProperty(wxCSS_PROPERTY_STROKE_WIDTH); }
    inline void SetStrokeWidth(double value)
    {
      iterator it = find(wxCSS_PROPERTY_STROKE_WIDTH);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetFloatValue(wxCSS_NUMBER, value);
      else
        (*this)[wxCSS_PROPERTY_STROKE_WIDTH] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetTextAnchor()
    {
      iterator it = find(wxCSS_PROPERTY_TEXT_ANCHOR);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_START;
    }
    inline bool HasTextAnchor() { return HasProperty(wxCSS_PROPERTY_TEXT_ANCHOR); }
    inline void SetTextAnchor(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_TEXT_ANCHOR);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_TEXT_ANCHOR] = new wxCSSPrimitiveValue(value);
    }
    

    inline wxCSS_VALUE GetVisibility()
    {
      iterator it = find(wxCSS_PROPERTY_VISIBILITY);
      return it != end() ? ((wxCSSPrimitiveValue&)*it->second).GetIdentValue() : wxCSS_VALUE_VISIBLE;
    }
    inline bool HasVisibility() { return HasProperty(wxCSS_PROPERTY_VISIBILITY); }
    inline void SetVisibility(wxCSS_VALUE value)
    {
      iterator it = find(wxCSS_PROPERTY_VISIBILITY);
      if (it != end())
        ((wxCSSPrimitiveValue*)it->second)->SetIdentValue(value);
      else
        (*this)[wxCSS_PROPERTY_VISIBILITY] = new wxCSSPrimitiveValue(value);
    }
    
  protected:
    static wxCSSPrimitiveValue* s_emptyCSSValue;
    static wxSVGColor* s_emptySVGColor;
    static wxSVGPaint* s_emptySVGPaint;
    static wxSVGPaint* s_blackSVGPaint;
    static double ParseNumber(const wxString& value);
    static wxRGBColor ParseColor(const wxString& value);
    static void ParseSVGPaint(wxSVGPaint& paint, const wxString& value);
};

#endif // WX_CSS_STYLE_DECLARATION_H

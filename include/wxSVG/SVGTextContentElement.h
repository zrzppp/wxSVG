//////////////////////////////////////////////////////////////////////////////
// Name:        SVGTextContentElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_TEXT_CONTENT_ELEMENT_H
#define WX_SVG_TEXT_CONTENT_ELEMENT_H

#include "SVGElement.h"
#include "SVGTests.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "EventTarget.h"
#include "SVGAnimatedLength.h"
#include "SVGAnimatedEnumeration.h"
#include "SVGPoint.h"
#include "SVGRect.h"
#include "String.h"


enum wxLENGTHADJUST
{
  wxLENGTHADJUST_UNKNOWN = 0,
  wxLENGTHADJUST_SPACING = 1,
  wxLENGTHADJUST_SPACINGANDGLYPHS = 2
};

class wxSVGTextContentElement:
  public wxSVGElement,
  public wxSVGTests,
  public wxSVGLangSpace,
  public wxSVGExternalResourcesRequired,
  public wxSVGStylable,
  public wxEventTarget
{
  protected:
    wxSVGAnimatedLength m_textLength;
    wxSVGAnimatedEnumeration m_lengthAdjust;

  public:
    inline const wxSVGAnimatedLength& GetTextLength() const { return m_textLength; }
    inline void SetTextLength(const wxSVGAnimatedLength& n) { m_textLength = n; }
    inline void SetTextLength(const wxSVGLength& n) { m_textLength.SetBaseVal(n); }

    inline const wxSVGAnimatedEnumeration& GetLengthAdjust() const { return m_lengthAdjust; }
    inline void SetLengthAdjust(const wxSVGAnimatedEnumeration& n) { m_lengthAdjust = n; }
    inline void SetLengthAdjust(char n) { m_lengthAdjust.SetBaseVal(n); }

  public:
    wxSVGTextContentElement(wxSVGDocument* doc, wxString tagName = wxT("")):
      wxSVGElement(doc, tagName) {}
    virtual ~wxSVGTextContentElement() {}
    virtual long GetNumberOfChars();
    virtual double GetComputedTextLength();
    virtual double GetSubStringLength(unsigned long charnum, unsigned long nchars);
    virtual wxSVGPoint GetStartPositionOfChar(unsigned long charnum);
    virtual wxSVGPoint GetEndPositionOfChar(unsigned long charnum);
    virtual wxSVGRect GetExtentOfChar(unsigned long charnum);
    virtual double GetRotationOfChar(unsigned long charnum);
    virtual long GetCharNumAtPosition(const wxSVGPoint& point);
    virtual void SelectSubString(unsigned long charnum, unsigned long nchars);
    bool SetAttribute(const wxString& name, const wxString& value);
};

#endif // WX_SVG_TEXT_CONTENT_ELEMENT_H

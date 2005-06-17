//////////////////////////////////////////////////////////////////////////////
// Name:        SVGMarkerElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_MARKER_ELEMENT_H
#define WX_SVG_MARKER_ELEMENT_H

#include "SVGElement.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGFitToViewBox.h"
#include "SVGAnimatedLength.h"
#include "SVGAnimatedEnumeration.h"
#include "SVGAnimatedAngle.h"
#include "SVGAngle.h"
#include "String.h"


enum wxSVG_MARKERUNITS
{
  wxSVG_MARKERUNITS_UNKNOWN = 0,
  wxSVG_MARKERUNITS_USERSPACEONUSE = 1,
  wxSVG_MARKERUNITS_STROKEWIDTH = 2
};


enum wxSVG_MARKER_ORIENT
{
  wxSVG_MARKER_ORIENT_UNKNOWN = 0,
  wxSVG_MARKER_ORIENT_AUTO = 1,
  wxSVG_MARKER_ORIENT_ANGLE = 2
};

class wxSVGMarkerElement:
  public wxSVGElement,
  public wxSVGLangSpace,
  public wxSVGExternalResourcesRequired,
  public wxSVGStylable,
  public wxSVGFitToViewBox
{
  protected:
    wxSVGAnimatedLength m_refX;
    wxSVGAnimatedLength m_refY;
    wxSVGAnimatedEnumeration m_markerUnits;
    wxSVGAnimatedLength m_markerWidth;
    wxSVGAnimatedLength m_markerHeight;
    wxSVGAnimatedEnumeration m_orientType;
    wxSVGAnimatedAngle m_orientAngle;

  public:
    inline const wxSVGAnimatedLength& GetRefX() const { return m_refX; }
    inline void SetRefX(const wxSVGAnimatedLength& n) { m_refX = n; }
    inline void SetRefX(const wxSVGLength& n) { m_refX.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetRefY() const { return m_refY; }
    inline void SetRefY(const wxSVGAnimatedLength& n) { m_refY = n; }
    inline void SetRefY(const wxSVGLength& n) { m_refY.SetBaseVal(n); }

    inline const wxSVGAnimatedEnumeration& GetMarkerUnits() const { return m_markerUnits; }
    inline void SetMarkerUnits(const wxSVGAnimatedEnumeration& n) { m_markerUnits = n; }
    inline void SetMarkerUnits(char n) { m_markerUnits.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetMarkerWidth() const { return m_markerWidth; }
    inline void SetMarkerWidth(const wxSVGAnimatedLength& n) { m_markerWidth = n; }
    inline void SetMarkerWidth(const wxSVGLength& n) { m_markerWidth.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetMarkerHeight() const { return m_markerHeight; }
    inline void SetMarkerHeight(const wxSVGAnimatedLength& n) { m_markerHeight = n; }
    inline void SetMarkerHeight(const wxSVGLength& n) { m_markerHeight.SetBaseVal(n); }

    inline const wxSVGAnimatedEnumeration& GetOrientType() const { return m_orientType; }
    inline void SetOrientType(const wxSVGAnimatedEnumeration& n) { m_orientType = n; }
    inline void SetOrientType(char n) { m_orientType.SetBaseVal(n); }

    inline const wxSVGAnimatedAngle& GetOrientAngle() const { return m_orientAngle; }
    inline void SetOrientAngle(const wxSVGAnimatedAngle& n) { m_orientAngle = n; }
    inline void SetOrientAngle(const wxSVGAngle& n) { m_orientAngle.SetBaseVal(n); }

  public:
    wxSVGMarkerElement(wxSVGDocument* doc, wxString tagName = wxT("marker")):
      wxSVGElement(doc, tagName) {}
    virtual ~wxSVGMarkerElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGMarkerElement(*this); }
    virtual void SetOrientToAuto();
    virtual void SetOrientToAngle(const wxSVGAngle& angle);
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_MARKER_ELEMENT; }
};

#endif // WX_SVG_MARKER_ELEMENT_H

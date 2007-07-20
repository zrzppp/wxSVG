//////////////////////////////////////////////////////////////////////////////
// Name:        SVGLocatable.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_LOCATABLE_H
#define WX_SVG_LOCATABLE_H

class wxSVGElement;

#include "SVGRect.h"
#include "SVGMatrix.h"
#include "SVGElement.h"
#include "SVGCoordinates.h"


class wxSVGLocatable
{
  protected:
    wxSVGElement* m_nearestViewportElement;
    wxSVGElement* m_farthestViewportElement;

  public:
    inline wxSVGElement* GetNearestViewportElement() const { return m_nearestViewportElement; }
    inline void SetNearestViewportElement(wxSVGElement* n) { m_nearestViewportElement = n; }

    inline wxSVGElement* GetFarthestViewportElement() const { return m_farthestViewportElement; }
    inline void SetFarthestViewportElement(wxSVGElement* n) { m_farthestViewportElement = n; }

  public:
    wxSVGLocatable(): m_nearestViewportElement(NULL), m_farthestViewportElement(NULL) {}
    virtual ~wxSVGLocatable() {}
    virtual wxSVGRect GetBBox(wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER) = 0;
    virtual wxSVGRect GetResultBBox(wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER) = 0;
    virtual wxSVGMatrix GetCTM() = 0;
    virtual wxSVGMatrix GetScreenCTM() = 0;
    static wxSVGRect GetElementBBox(const wxSVGElement* element, wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER);
    static wxSVGRect GetElementResultBBox(const wxSVGElement* element, wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER);
    static wxSVGMatrix GetCTM(const wxSVGElement* element);
    static wxSVGMatrix GetScreenCTM(const wxSVGElement* element);
    virtual wxSVGMatrix GetTransformToElement(const wxSVGElement& element);
		static wxSVGMatrix GetParentMatrix(const wxSVGElement* element);
    

  protected:
    static wxSVGRect GetChildrenBBox(const wxSVGElement* element, wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER);
    static wxSVGRect GetChildrenResultBBox(const wxSVGElement* element, wxSVG_COORDINATES coordinates = wxSVG_COORDINATES_USER);
    inline wxSVGMatrix GetMatrix(wxSVG_COORDINATES coordinates)
    { return coordinates == wxSVG_COORDINATES_SCREEN ? GetScreenCTM() : (coordinates == wxSVG_COORDINATES_VIEWPORT ? GetCTM() : wxSVGMatrix()); }

};

#endif // WX_SVG_LOCATABLE_H

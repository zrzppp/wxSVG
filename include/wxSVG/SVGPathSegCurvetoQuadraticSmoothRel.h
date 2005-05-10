//////////////////////////////////////////////////////////////////////////////
// Name:        SVGPathSegCurvetoQuadraticSmoothRel.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_PATH_SEG_CURVETO_QUADRATIC_SMOOTH_REL_H
#define WX_SVG_PATH_SEG_CURVETO_QUADRATIC_SMOOTH_REL_H

#include "SVGPathSeg.h"

class wxSVGPathSegCurvetoQuadraticSmoothRel:
  public wxSVGPathSeg
{
  protected:
	float m_x;
	float m_y;

  public:
	inline float GetX() const { return m_x; }
	inline void SetX(const float n) { m_x = n; }

	inline float GetY() const { return m_y; }
	inline void SetY(const float n) { m_y = n; }

  public:
	wxSVGPathSegCurvetoQuadraticSmoothRel():
	  wxSVGPathSeg(wxPATHSEG_CURVETO_QUADRATIC_SMOOTH_REL), m_x(0), m_y(0) {}
	virtual ~wxSVGPathSegCurvetoQuadraticSmoothRel() {}
};

#endif // WX_SVG_PATH_SEG_CURVETO_QUADRATIC_SMOOTH_REL_H

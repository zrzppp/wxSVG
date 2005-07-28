//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAnimatedAngle.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by genAnimated.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ANIMATED_ANGLE_H
#define WX_SVG_ANIMATED_ANGLE_H

#include "SVGAngle.h"

class wxSVGAnimatedAngle
{
  public:
    wxSVGAnimatedAngle(): m_animVal(NULL) {}
    wxSVGAnimatedAngle(const wxSVGAngle& value): m_baseVal(value), m_animVal(NULL) {}
    wxSVGAnimatedAngle(const wxSVGAnimatedAngle& value): m_baseVal(value.m_baseVal), m_animVal(NULL)
    { if (value.m_animVal != NULL) m_animVal = new wxSVGAngle(*value.m_animVal); }
    ~wxSVGAnimatedAngle() { ResetAnimVal(); }
    
    inline wxSVGAnimatedAngle& operator=(const wxSVGAnimatedAngle& value)
    { m_baseVal = value.m_baseVal; m_animVal = value.m_animVal != NULL ? m_animVal = new wxSVGAngle(*value.m_animVal) : NULL; return *this; }
    
    inline wxSVGAngle& GetBaseVal() { return m_baseVal; }
    inline const wxSVGAngle& GetBaseVal() const { return m_baseVal; }
    inline void SetBaseVal(const wxSVGAngle& value) { m_baseVal = value; ResetAnimVal(); }
    
    inline wxSVGAngle& GetAnimVal()
    {
      if (!m_animVal)
        m_animVal = new wxSVGAngle(m_baseVal);
      return *m_animVal;
    }
    inline const wxSVGAngle& GetAnimVal() const
    {
        return m_animVal ? *m_animVal : m_baseVal;
    }
    inline void SetAnimVal(const wxSVGAngle& value)
    {
      if (!m_animVal)
        m_animVal = new wxSVGAngle(value);
      else
        *m_animVal = value;
    }
    inline void ResetAnimVal()
    {
      if (m_animVal)
      {
        delete m_animVal;
        m_animVal = NULL;
      }
    }
    
  public:
    inline operator const wxSVGAngle&() const { return GetAnimVal(); }
    
  protected:
    wxSVGAngle m_baseVal;
    wxSVGAngle* m_animVal;
};


#endif // WX_SVG_ANIMATED_ANGLE_H

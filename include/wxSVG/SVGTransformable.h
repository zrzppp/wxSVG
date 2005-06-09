//////////////////////////////////////////////////////////////////////////////
// Name:        SVGTransformable.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_TRANSFORMABLE_H
#define WX_SVG_TRANSFORMABLE_H

#include "SVGLocatable.h"
#include "SVGAnimatedTransformList.h"
#include "String.h"

class wxSVGTransformable:
  public wxSVGLocatable
{
  protected:
    wxSVGAnimatedTransformList m_transform;

  public:
    inline wxSVGTransformList& GetTransform() { return m_transform.GetBaseVal(); }
    inline void SetTransform(const wxSVGTransformList& n) { m_transform.GetBaseVal() = n; }

  public:
    inline wxSVGTransformList& GetAnimatedTransform() { return m_transform.GetAnimVal(); }
    inline void SetAnimatedTransform(const wxSVGTransformList& n) { m_transform.GetAnimVal() = n; }

  public:
    virtual ~wxSVGTransformable() {}

    inline void Transform(const wxSVGMatrix& matrix)
    { m_transform.GetBaseVal().Add(new wxSVGTransform(matrix)); }
    inline void Translate(float tx, float ty)
    { wxSVGTransform* t = new wxSVGTransform; t->SetTranslate(tx,ty); m_transform.GetBaseVal().Add(t); }
    inline void Scale(float s)
    { wxSVGTransform* t = new wxSVGTransform; t->SetScale(s,s); m_transform.GetBaseVal().Add(t); }
    inline void Scale(float sx, float sy)
    { wxSVGTransform* t = new wxSVGTransform; t->SetScale(sx,sy); m_transform.GetBaseVal().Add(t); }
    inline void Rotate(float angle, float cx = 0, float cy = 0)
    { wxSVGTransform* t = new wxSVGTransform; t->SetRotate(angle, cx,cy); m_transform.GetBaseVal().Add(t); }
    inline void SkewX(float angle)
    { wxSVGTransform* t = new wxSVGTransform; t->SetSkewX(angle); m_transform.GetBaseVal().Add(t); }
    inline void SkewY(float angle)
    { wxSVGTransform* t = new wxSVGTransform; t->SetSkewY(angle); m_transform.GetBaseVal().Add(t); }

    void UpdateMatrix(wxSVGMatrix& matrix);
    bool SetAttribute(const wxString& name, const wxString& value);
};

#endif // WX_SVG_TRANSFORMABLE_H

//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFEMergeNodeElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_MERGE_NODE_ELEMENT_H
#define WX_SVG_FE_MERGE_NODE_ELEMENT_H

#include "SVGElement.h"
#include "SVGAnimatedString.h"
#include "String.h"

class wxSVGFEMergeNodeElement:
  public wxSVGElement
{
  protected:
    wxSVGAnimatedString m_in1;

  public:
    inline const wxSVGAnimatedString& GetIn1() const { return m_in1; }
    inline void SetIn1(const wxSVGAnimatedString& n) { m_in1 = n; }
    inline void SetIn1(const wxString& n) { m_in1.SetBaseVal(n); }

  public:
    wxSVGFEMergeNodeElement(wxSVGDocument* doc, wxString tagName = wxT("feMergeNode")):
      wxSVGElement(doc, tagName) {}
    virtual ~wxSVGFEMergeNodeElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGFEMergeNodeElement(*this); }
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_FEMERGENODE_ELEMENT; }
};

#endif // WX_SVG_FE_MERGE_NODE_ELEMENT_H

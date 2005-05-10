//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFEFuncBElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_FUNC_B_ELEMENT_H
#define WX_SVG_FE_FUNC_B_ELEMENT_H

#include "SVGComponentTransferFunctionElement.h"
#include "String.h"

class wxSVGFEFuncBElement:
  public wxSVGComponentTransferFunctionElement
{
  public:
	wxSVGFEFuncBElement(wxSVGDocument* doc, wxString tagName = wxT("feFuncB")):
	  wxSVGComponentTransferFunctionElement(doc, tagName) {}
	virtual ~wxSVGFEFuncBElement() {}
	bool SetAttribute(const wxString& name, const wxString& value);
	virtual const wxSVGDTD GetDtd() const { return wxSVG_FEFUNCB_ELEMENT; }
};

#endif // WX_SVG_FE_FUNC_B_ELEMENT_H

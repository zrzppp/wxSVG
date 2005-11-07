//////////////////////////////////////////////////////////////////////////////
// Name:        SVGNumberList.cpp
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by genList.py
//////////////////////////////////////////////////////////////////////////////

#include "SVGNumberList.h"
#include <wx/tokenzr.h>
#include <wx/arrimpl.cpp>
WX_DEFINE_OBJARRAY(wxSVGNumberListBase);

wxString wxSVGNumberList::GetValueAsString() const
{
  wxString value;
  for (int i=0; i<(int)GetCount(); i++)
    value += (i==0 ? wxT("") : wxT(" ")) +
      wxString::Format(wxT("%%f"), (double)Item(i));
  return value;
}

void wxSVGNumberList::SetValueAsString(const wxString& value)
{
  double val;
  wxStringTokenizer tkz(value, wxT(", \t"));
  while (tkz.HasMoreTokens()) 
  { 
    wxString token = tkz.GetNextToken(); 
    if (token.length() && token.ToDouble(&val))
      Add(val); 
  }
}

//////////////////////////////////////////////////////////////////////////////
// Name:        SVGLength.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_LENGTH_H
#define WX_SVG_LENGTH_H

#include "String.h"

class wxSVGLength
{
  public:

	enum wxSVG_LENGTHTYPE
	{
	  wxSVG_LENGTHTYPE_UNKNOWN = 0,
	  wxSVG_LENGTHTYPE_NUMBER = 1,
	  wxSVG_LENGTHTYPE_PERCENTAGE = 2,
	  wxSVG_LENGTHTYPE_EMS = 3,
	  wxSVG_LENGTHTYPE_EXS = 4,
	  wxSVG_LENGTHTYPE_PX = 5,
	  wxSVG_LENGTHTYPE_CM = 6,
	  wxSVG_LENGTHTYPE_MM = 7,
	  wxSVG_LENGTHTYPE_IN = 8,
	  wxSVG_LENGTHTYPE_PT = 9,
	  wxSVG_LENGTHTYPE_PC = 10
	};

  protected:
	wxSVG_LENGTHTYPE m_unitType;
	float m_value;

  public:
	inline wxSVG_LENGTHTYPE GetUnitType() const { return m_unitType; }
	inline void SetUnitType(const wxSVG_LENGTHTYPE& n) { m_unitType = n; }

	inline float GetValue() const { return m_value; }
	inline void SetValue(const float n) { m_value = n; }

	float GetValueInSpecifiedUnits() const;
	void SetValueInSpecifiedUnits(const float n);

	wxString GetValueAsString() const;
	void SetValueAsString(const wxString& n);

  public:
	wxSVGLength() : m_unitType(wxSVG_LENGTHTYPE_UNKNOWN), m_value(0) {}
	wxSVGLength(float v) : m_unitType(wxSVG_LENGTHTYPE_NUMBER), m_value(v) {}
	virtual ~wxSVGLength() {}
	inline operator float() { return GetValue(); }
	virtual void NewValueSpecifiedUnits(wxSVG_LENGTHTYPE unitType, float valueInSpecifiedUnits);
	virtual void ConvertToSpecifiedUnits(wxSVG_LENGTHTYPE unitType);
};

#endif // WX_SVG_LENGTH_H

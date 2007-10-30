//////////////////////////////////////////////////////////////////////////////
// Name:        SVGUIControl.h
// Purpose:     
// Author:      Laurent Bessard
// Created:     2005/07/28
// RCS-ID:      $Id: SVGUIControl.h,v 1.3 2007-10-30 21:59:22 etisserant Exp $
// Copyright:   (c) Laurent Bessard
// Licence:     wxWindows licence
//////////////////////////////////////////////////////////////////////////////

#ifndef SVGUI_CONTROL_H
#define SVGUI_CONTROL_H

#include <wx/wx.h>
#include <wx/event.h>
#include <wxSVG/svg.h>
#include <wxSVG/SVGElement.h>
#include <wxSVG/CSSValue.h>
#include "SVGUIElement.h"


wxSVGRect SumBBox(wxSVGRect bbox1, wxSVGRect bbox2);

class SVGUIControlBase:
	public SVGUIElement,
	public wxEvtHandler
{
	protected:
		wxEvtHandler* m_window;
		
	public:
		SVGUIControlBase();
		SVGUIControlBase(wxSVGDocument* doc, wxEvtHandler* window);
		
		void Refresh();
		
		virtual bool HitTest(wxPoint pt);
		virtual wxSVGRect GetBBox();
		virtual void SendMouseEvent(wxMouseEvent& event);
		virtual void SendKeyEvent(wxKeyEvent& event);
		//virtual void SendNotebookEvent(wxNotebookEvent& event);
		virtual void SendScrollEvent(wxScrollEvent& event);
		virtual void SendCommandEvent(wxCommandEvent& event);
		virtual void Update_Elements() = 0;

		virtual void OnLeftDown(wxMouseEvent& event);		
		virtual void OnLeftUp(wxMouseEvent& event);
		virtual void OnMotion(wxMouseEvent& event);
		virtual void OnChar(wxKeyEvent& event);

		DECLARE_EVENT_TABLE()
		
	private:
		DECLARE_ABSTRACT_CLASS(SVGUIControlBase)
  	
};


class SVGUIControl: public SVGUIControlBase
{
  public:
    SVGUIControl();
		SVGUIControl(wxSVGDocument* doc, wxEvtHandler* window);
	private:
    DECLARE_DYNAMIC_CLASS(SVGUIControl)
};

#endif //SVGUI_CONTROL_H

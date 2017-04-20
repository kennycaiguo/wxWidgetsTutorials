/*
	Copyright (c) 2015 Xavier Leclercq

	Permission is hereby granted, free of charge, to any person obtaining  a
	copy of this software and associated documentation files (the "Software"),
	to deal in the Software without restriction, including without limitation
	the rights to use, copy, modify, merge, publish, distribute, sublicense,
	and/or sell copies of the Software, and to permit persons to whom the
	Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
	THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
	IN THE SOFTWARE.
*/

#ifndef _TUTORIALS_WXWIDGETS_WXSPLITTERWINDOW2FRAME_H_
#define _TUTORIALS_WXWIDGETS_WXSPLITTERWINDOW2FRAME_H_

#include <wx/frame.h>
#include <wx/splitter.h>
#include <wx/menu.h>
#include <wx/panel.h>

class WxSplitterWindow2Frame : public wxFrame
{
public:
	WxSplitterWindow2Frame(const wxString& title);

private:
	void OnMenuSplit(wxCommandEvent& evt);
	void OnUnsplit(wxSplitterEvent& evt);

private:
	wxMenu* m_viewMenu;
	wxSplitterWindow* m_splitterWindow;
	wxPanel* m_panel1;
	wxPanel* m_panel2;

	wxDECLARE_EVENT_TABLE();
};

#endif

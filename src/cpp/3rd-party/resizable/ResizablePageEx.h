#if !defined(AFX_RESIZABLEPAGEEX_H__INCLUDED_)
#define AFX_RESIZABLEPAGEEX_H__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// ResizablePageEx.h : header file
//
/////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2000-2001 by Paolo Messina
// (http://www.geocities.com/ppescher - ppescher@yahoo.com)
//
// The contents of this file are subject to the Artistic License (the "License").
// You may not use this file except in compliance with the License. 
// You may obtain a copy of the License at:
// http://www.opensource.org/licenses/artistic-license.html
//
// If you find this code useful, credits would be nice!
//
/////////////////////////////////////////////////////////////////////////////

#include "ResizableLayout.h"


/////////////////////////////////////////////////////////////////////////////
// CResizablePageEx window

namespace nkresize
{
	class CResizablePageEx : public CPropertyPageEx, public CResizableLayout
	{
		DECLARE_DYNCREATE(CResizablePageEx)
	
	// Construction
	public:
		CResizablePageEx();
		CResizablePageEx(UINT nIDTemplate, UINT nIDCaption = 0, UINT nIDHeaderTitle = 0, UINT nIDHeaderSubTitle = 0);
		CResizablePageEx(LPCTSTR lpszTemplateName, UINT nIDCaption = 0, UINT nIDHeaderTitle = 0, UINT nIDHeaderSubTitle = 0);
	
	// Attributes
	public:
	
	private:
		// internal status
	
		BOOL m_bInitDone;			// if all internal vars initialized
	
	// Operations
	public:
	
	// Overrides
		// ClassWizard generated virtual function overrides
		//{{AFX_VIRTUAL(CResizablePageEx)
		//}}AFX_VIRTUAL
	
	// Implementation
	public:
		virtual ~CResizablePageEx();
	
	// used internally
	private:
		void Construct();
	
	// callable from derived classes
	protected:
	
		virtual CWnd* GetResizableWnd()
		{
			// make the layout know its parent window
			return this;
		};
	
	// Generated message map functions
	protected:
		virtual BOOL NeedsRefresh(HWND hWnd);
		//{{AFX_MSG(CResizablePageEx)
		virtual BOOL OnInitDialog();
		afx_msg void OnSize(UINT nType, int cx, int cy);
		afx_msg BOOL OnEraseBkgnd(CDC* pDC);
		//}}AFX_MSG
		DECLARE_MESSAGE_MAP()
	};
}

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RESIZABLEPAGEEX_H__INCLUDED_)

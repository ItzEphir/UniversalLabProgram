#pragma once
#include "afxdialogex.h"
#include <cstring>
#include <string>
#include <iostream>


// CDialogCountFBG dialog

class CDialogCountFBG : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogCountFBG)

public:
	CDialogCountFBG(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CDialogCountFBG();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGCOUNTFBG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CButton button;
	afx_msg void OnBnClickedButton1();
	CEdit inputLength;
	afx_msg void OnClose();
};

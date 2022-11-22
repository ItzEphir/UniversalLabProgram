#pragma once
#include "afxdialogex.h"


// Диалоговое окно CDialogCountFBG

class CDialogCountFBG : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogCountFBG)

public:
	CDialogCountFBG(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CDialogCountFBG();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGCOUNTWBG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
};

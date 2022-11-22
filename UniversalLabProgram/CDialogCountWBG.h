#pragma once
#include "afxdialogex.h"


// Диалоговое окно CDialogCountWBG

class CDialogCountWBG : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogCountWBG)

public:
	CDialogCountWBG(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CDialogCountWBG();

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

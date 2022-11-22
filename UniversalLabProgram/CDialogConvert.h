#pragma once
#include "afxdialogex.h"


// Диалоговое окно CDialogConvert

class CDialogConvert : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogConvert)

public:
	CDialogConvert(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CDialogConvert();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGCONVERT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

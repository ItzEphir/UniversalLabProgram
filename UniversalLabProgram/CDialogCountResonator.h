#pragma once
#include "afxdialogex.h"


// Диалоговое окно CDialogCountResonator

class CDialogCountResonator : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogCountResonator)

public:
	CDialogCountResonator(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CDialogCountResonator();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGCOUNTRESONATOR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
};

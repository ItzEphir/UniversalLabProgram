#pragma once
#include "afxdialogex.h"


// Диалоговое окно CDialogFileProcessing

class CDialogFileProcessing : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogFileProcessing)

public:
	CDialogFileProcessing(CWnd* pParent = nullptr);   // стандартный конструктор
	virtual ~CDialogFileProcessing();

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOGFILEPROCESSING };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // поддержка DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClose();
};

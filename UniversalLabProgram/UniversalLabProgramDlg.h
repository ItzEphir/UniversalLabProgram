
// UniversalLabProgramDlg.h: файл заголовка
//

#pragma once
#include "CDialogConvert.h"
#include "CDialogCountFBG.h"
#include "CDialogCountResonator.h"
#include "CDialogFileProcessing.h"

// Диалоговое окно CUniversalLabProgramDlg
class CUniversalLabProgramDlg : public CDialogEx
{
// Создание
public:
	CUniversalLabProgramDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_UNIVERSALLABPROGRAM_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	CDialogConvert convertDialog;
	CDialogCountFBG countWBGDialog;
	CDialogCountResonator countResonatorDialog;
	CDialogFileProcessing fileProcessingDialog;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};

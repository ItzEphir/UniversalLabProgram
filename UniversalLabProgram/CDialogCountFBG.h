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
	afx_msg void OnBnClickedButton1();
	afx_msg void OnClose();



	// Кнопка
	CButton button;

	//// Ввод значений
	// Длина волны
	CEdit inputWaveLength;
	// Период
	CEdit inputPhaseMaskPeriod;
	// Глубина первой решетки
	CEdit inputFirstIntensity;
	// Длина первой решетки
	CEdit inputFirstLenght;
	// Глубина второй решетки
	CEdit inputSecondIntensity;
	// Длина второй решетки
	CEdit inputSecondLenght;

	// Вывод значений
	CEdit outputEffectiveIindex;
};

#pragma once
#include "afxdialogex.h"
#include <cstring>
#include <string>
#include <iostream>

#define M_PI 3.14159265358979323846
#define vlight 299792458

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
	// Расстояние между решетками
	CEdit inputSpaceBetween;

	//// Вывод значений
	// Эеффективный индекс
	CEdit outputEffectiveIindex;
	// Сила первой решетки
	CEdit outputFirstStrenght;
	// Сила второй решетки
	CEdit outputSecondStrenght;
	// Пропускная способность первой решетки
	CEdit outputFirstBandwidth;
	// Пропускная способность второй решетки
	CEdit outputSecondBandwidth;
	// ???
	CEdit outputM_S;
	CEdit outputFreq;


	afx_msg void OnEnChangeEditSpace();
};

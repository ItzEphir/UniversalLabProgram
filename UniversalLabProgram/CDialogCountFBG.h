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



	// ������
	CButton button;

	//// ���� ��������
	// ����� �����
	CEdit inputWaveLength;
	// ������
	CEdit inputPhaseMaskPeriod;
	// ������� ������ �������
	CEdit inputFirstIntensity;
	// ����� ������ �������
	CEdit inputFirstLenght;
	// ������� ������ �������
	CEdit inputSecondIntensity;
	// ����� ������ �������
	CEdit inputSecondLenght;
	// ���������� ����� ���������
	CEdit inputSpaceBetween;

	//// ����� ��������
	// ������������ ������
	CEdit outputEffectiveIindex;
	// ���� ������ �������
	CEdit outputFirstStrenght;
	// ���� ������ �������
	CEdit outputSecondStrenght;
	// ���������� ����������� ������ �������
	CEdit outputFirstBandwidth;
	// ���������� ����������� ������ �������
	CEdit outputSecondBandwidth;
	// ???
	CEdit outputM_S;
	CEdit outputFreq;


	afx_msg void OnEnChangeEditSpace();
};

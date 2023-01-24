// CDialogCountFBG.cpp : implementation file
//

#include "pch.h"
#include "UniversalLabProgram.h"
#include "afxdialogex.h"
#include "CDialogCountFBG.h"


// CDialogCountFBG dialog

IMPLEMENT_DYNAMIC(CDialogCountFBG, CDialogEx)

CDialogCountFBG::CDialogCountFBG(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOGCOUNTFBG, pParent)
{

}

CDialogCountFBG::~CDialogCountFBG()
{
}

void CDialogCountFBG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON1, button);
	DDX_Control(pDX, IDC_EDIT_WAVELENGTH, inputLength);
	DDX_Control(pDX, IDC_EDIT_PERIOD, inputPhaseMaskPeriod);
	DDX_Control(pDX, IDC_EDIT3, outputEffectiveIindex);
	DDX_Control(pDX, IDC_EDIT_FBG1_INTENSITY, inputIntensity);
}


BEGIN_MESSAGE_MAP(CDialogCountFBG, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialogCountFBG::OnBnClickedButton1)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// CDialogCountFBG message handlers


void CDialogCountFBG::OnBnClickedButton1()
{
	// ƒлина решетки
	CString inputLengthCString;
	int inputLengthInt;
	inputLength.GetWindowTextW(inputLengthCString);
	inputLengthInt = _ttoi(inputLengthCString);
	// ѕериод
	CString inputPhaseMaskPeriodCString;
	int inputPhaseMaskPeriodInt;
	inputPhaseMaskPeriod.GetWindowTextW(inputPhaseMaskPeriodCString);
	inputPhaseMaskPeriodInt = _ttoi(inputPhaseMaskPeriodCString);
	// √лубина решетки
	CString inputIntensityCString;
	int inputIntensityInt;
	inputPhaseMaskPeriod.GetWindowTextW(inputIntensityCString);
	inputPhaseMaskPeriodInt = _ttoi(inputIntensityCString);

	// Ёффективный индекс
	CString outputEffectiveIindexCString;
	int outputEffectiveIindexInt;
	outputEffectiveIindexInt = inputLengthInt / inputPhaseMaskPeriodInt;
	outputEffectiveIindexCString = std::to_string(outputEffectiveIindexInt).c_str();

	outputEffectiveIindex.SetWindowTextW(outputEffectiveIindexCString);
}


void CDialogCountFBG::OnClose()
{
	// TODO: Add your message handler code here and/or call default

	GetParent()->ShowWindow(1);

	CDialogEx::OnClose();
}

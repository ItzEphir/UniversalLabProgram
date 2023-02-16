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
	DDX_Control(pDX, IDC_EDIT_WAVELENGTH, inputWaveLength);
	DDX_Control(pDX, IDC_EDIT_PERIOD, inputPhaseMaskPeriod);
	DDX_Control(pDX, IDC_EDIT3, outputEffectiveIindex);
	DDX_Control(pDX, IDC_EDIT_FBG1_INTENSITY, inputFirstIntensity);
	DDX_Control(pDX, IDC_EDIT_FBG1_LENGTH, inputFirstLenght);
	DDX_Control(pDX, IDC_EDIT_FBG2_LENGTH, inputSecondLenght);
	DDX_Control(pDX, IDC_EDIT_FBG2_INTENSITY, inputSecondIntensity);
}


BEGIN_MESSAGE_MAP(CDialogCountFBG, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialogCountFBG::OnBnClickedButton1)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// CDialogCountFBG message handlers
int outputData(CEdit& edit)
{
	CString input;
	edit.GetWindowTextW(input);
	return _ttoi(input);
}

void CDialogCountFBG::OnBnClickedButton1()
{
	//// Вводные данные
	// Длина волны
	// CString inputLengthCString;
	// int inputLengthInt;
	// inputWaveLength.GetWindowTextW(inputLengthCString);
	// inputLengthInt = _ttoi(inputLengthCString);
	// Период
	// CString inputPhaseMaskPeriodCString;
	// int inputPhaseMaskPeriodInt;
	// inputPhaseMaskPeriod.GetWindowTextW(inputPhaseMaskPeriodCString);
	// inputPhaseMaskPeriodInt = _ttoi(inputPhaseMaskPeriodCString);
	// 
	// // Глубина первой решетки
	// CString inputFirstIntensityCString;
	// int inputFirstIntensityInt;
	// inputFirstIntensity.GetWindowTextW(inputFirstIntensityCString);
	// inputFirstIntensityInt = _ttoi(inputFirstIntensityCString);
	// // Глубина первой решетки
	// CString inputFirstLenghtCString;
	// int inputFirstLenghtInt;
	// inputFirstLenght.GetWindowTextW(inputFirstLenghtCString);
	// inputFirstLenghtInt = _ttoi(inputFirstLenghtCString);
	// 
	// // Глубина первой решетки
	// CString inputFirstIntensityCString;
	// int inputFirstIntensityInt;
	// inputFirstIntensity.GetWindowTextW(inputFirstIntensityCString);
	// inputFirstIntensityInt = _ttoi(inputFirstIntensityCString);
	// // Глубина первой решетки
	// CString inputFirstLenghtCString;
	// int inputFirstLenghtInt;
	// inputFirstLenght.GetWindowTextW(inputFirstLenghtCString);
	// inputFirstLenghtInt = _ttoi(inputFirstLenghtCString);



	int inputLengthInt = outputData(inputWaveLength);
	int inputPhaseMaskPeriodInt = outputData(inputPhaseMaskPeriod);
	int inputFirstIntensityInt = outputData(inputFirstIntensity);
	int inputFirstLenghtInt = outputData(inputFirstLenght);
	int inputSecondLenghtInt = outputData(inputSecondLenght);
	int inputSecondIntensityInt = outputData(inputSecondIntensity);


	//// Расчеты
	// Эффективный индекс
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

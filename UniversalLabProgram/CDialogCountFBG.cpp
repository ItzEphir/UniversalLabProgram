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
	DDX_Control(pDX, IDC_EDIT_SPACE, inputSpaceBetween);
	DDX_Control(pDX, IDC_EDIT4, outputFirstStrenght);
	DDX_Control(pDX, IDC_EDIT5, outputSecondStrenght);
	DDX_Control(pDX, IDC_EDIT8, outputFirstBandwidth);
	DDX_Control(pDX, IDC_EDIT6, outputSecondBandwidth);
	DDX_Control(pDX, IDC_EDIT9, outputM_S);
	DDX_Control(pDX, IDC_EDIT10, outputFreq);
}


BEGIN_MESSAGE_MAP(CDialogCountFBG, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialogCountFBG::OnBnClickedButton1)
	ON_WM_CLOSE()
	ON_EN_CHANGE(IDC_EDIT_SPACE, &CDialogCountFBG::OnEnChangeEditSpace)
END_MESSAGE_MAP()


// CDialogCountFBG message handlers
int inputData(CEdit& edit)
{
	CString input;
	edit.GetWindowTextW(input);
	return _ttoi(input);
}

void outputDate(CEdit& edit, double i)
{
	CString outputEffectiveIindexCString;
	outputEffectiveIindexCString = std::to_string(i).c_str();
	edit.SetWindowTextW(outputEffectiveIindexCString);
}

void CDialogCountFBG::OnBnClickedButton1()
{
	// Длина волны
	int inputLengthInt = inputData(inputWaveLength);
	// Период
	int inputPhaseMaskPeriodInt = inputData(inputPhaseMaskPeriod);
	// Глубина первой решетки
	int inputFirstIntensityInt = inputData(inputFirstIntensity);
	// Длина первой решетки
	int inputFirstLenghtInt = inputData(inputFirstLenght);
	// Глубина второй решетки
	int inputSecondIntensityInt = inputData(inputSecondIntensity);
	// Длина второй решетки
	int inputSecondLenghtInt = inputData(inputSecondLenght);
	// Расстояние между решетками
	int inputSpaceBetweenInt = inputData(inputSpaceBetween);


	//// Расчеты
	// Эффективный индекс
	double outputEffectiveIindexDouble = (inputLengthInt / (double)inputPhaseMaskPeriodInt);

	double FBG_100_1 = 100 * (1 - pow(10, -0.1 * (double)inputFirstIntensityInt));
	double FBG_100_2 = 100 * (1 - pow(10, -0.1 * (double)inputSecondIntensityInt));

	double outputFirstStrenghtFloat = atanh(0.01 * FBG_100_1);
	double outputSecondStrenghtFloat = atanh(0.01 * FBG_100_2);

	double outputFirstBandwidthFloat = (sqrt(pow(inputFirstIntensityInt, 2) + pow(M_PI, 2)) * pow(inputLengthInt, 2)) / (double)(M_PI * outputEffectiveIindexDouble * inputFirstLenghtInt * pow(10, 12));
	double outputSecondBandwidthFloat = (sqrt(pow(inputSecondIntensityInt, 2) + pow(M_PI, 2)) * pow(inputLengthInt, 2)) / (double)(M_PI * outputEffectiveIindexDouble * inputSecondLenghtInt * pow(10, 12));

	double FBG_Ef_1 = (inputFirstLenghtInt * sqrt(0.01 * FBG_100_1)) / (2 * outputFirstStrenghtFloat);
	double FBG_Ef_2 = (inputSecondLenghtInt * sqrt(0.01 * FBG_100_2)) / (2 * outputSecondStrenghtFloat);

	double M_S = pow(inputLengthInt, 2) / (2 * outputEffectiveIindexDouble * (FBG_Ef_1 + FBG_Ef_2 + inputSpaceBetweenInt) * pow(10, 12));

	double Freq = vlight * ((pow(10, 9)) / inputLengthInt - 1 / (M_S * pow(10, 6) + inputLengthInt));

	outputDate(outputEffectiveIindex, outputEffectiveIindexDouble);
	outputDate(outputFirstStrenght, outputFirstStrenghtFloat);
	outputDate(outputSecondStrenght, outputSecondStrenghtFloat);
	outputDate(outputFirstBandwidth, outputFirstBandwidthFloat);
	outputDate(outputSecondBandwidth, outputSecondBandwidthFloat);
	outputDate(outputM_S, M_S);
	outputDate(outputFreq, Freq);
}


void CDialogCountFBG::OnClose()
{
	// TODO: Add your message handler code here and/or call default

	GetParent()->ShowWindow(1);

	CDialogEx::OnClose();
}


void CDialogCountFBG::OnEnChangeEditSpace()
{
	// TODO:  Если это элемент управления RICHEDIT, то элемент управления не будет
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// функция и вызов CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Добавьте код элемента управления
}

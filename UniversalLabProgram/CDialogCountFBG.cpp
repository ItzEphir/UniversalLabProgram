// CDialogCountFBG.cpp: файл реализации
//

#include "pch.h"
#include "UniversalLabProgram.h"
#include "afxdialogex.h"
#include "CDialogCountFBG.h"



// Диалоговое окно CDialogCountFBG

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
}

BOOL CDialogCountFBG::OnInitDialog()
{
	CDialogEx::OnInitDialog();



	return TRUE;
}

HBRUSH CDialogCountFBG::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor)
{
	HBRUSH m_brMyEditBk = CDialogEx::OnCtlColor(pDC, pWnd, nCtlColor);
	if(pWnd->GetDlgCtrlID() == IDC_STATIC)
		pDC->SetBkColor(RGB(255, 0, 0));
		
	return m_brMyEditBk;

}

int CDialogCountFBG::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	// Call the base class to create the window
	if (CDialogEx::OnCreate(lpCreateStruct) == 0)
	{

		// If the window was successfully created, let the user know
		MessageBox(L"The window has been created!!!");
		// Since the window was successfully created, return 0
		return 0;
	}
	// Otherwise, return -1
	return -1;
}

BEGIN_MESSAGE_MAP(CDialogCountFBG, CDialogEx)
	ON_WM_CTLCOLOR()
	ON_WM_CREATE()
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// Обработчики сообщений CDialogCountFBG


void CDialogCountFBG::OnClose()
{
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	GetParent()->ShowWindow(1);

	CDialogEx::OnClose();
}

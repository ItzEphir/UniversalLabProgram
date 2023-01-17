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
}


BEGIN_MESSAGE_MAP(CDialogCountFBG, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDialogCountFBG::OnBnClickedButton1)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// CDialogCountFBG message handlers


void CDialogCountFBG::OnBnClickedButton1()
{
	CString s;
	inputLength.GetWindowTextW(s);
}


void CDialogCountFBG::OnClose()
{
	// TODO: Add your message handler code here and/or call default

	GetParent()->ShowWindow(1);

	CDialogEx::OnClose();
}

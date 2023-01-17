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


BEGIN_MESSAGE_MAP(CDialogCountFBG, CDialogEx)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// Обработчики сообщений CDialogCountFBG


void CDialogCountFBG::OnClose()
{
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	GetParent()->ShowWindow(1);

	CDialogEx::OnClose();
}

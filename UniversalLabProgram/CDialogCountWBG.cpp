// CDialogCountWBG.cpp: файл реализации
//

#include "pch.h"
#include "UniversalLabProgram.h"
#include "afxdialogex.h"
#include "CDialogCountWBG.h"


// Диалоговое окно CDialogCountWBG

IMPLEMENT_DYNAMIC(CDialogCountWBG, CDialogEx)

CDialogCountWBG::CDialogCountWBG(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOGCOUNTWBG, pParent)
{

}

CDialogCountWBG::~CDialogCountWBG()
{
}

void CDialogCountWBG::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialogCountWBG, CDialogEx)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// Обработчики сообщений CDialogCountWBG


void CDialogCountWBG::OnClose()
{
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	GetParent()->ShowWindow(1);

	CDialogEx::OnClose();
}

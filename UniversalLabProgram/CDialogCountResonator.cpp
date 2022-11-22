// CDialogCountResonator.cpp: файл реализации
//

#include "pch.h"
#include "UniversalLabProgram.h"
#include "afxdialogex.h"
#include "CDialogCountResonator.h"


// Диалоговое окно CDialogCountResonator

IMPLEMENT_DYNAMIC(CDialogCountResonator, CDialogEx)

CDialogCountResonator::CDialogCountResonator(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOGCOUNTRESONATOR, pParent)
{

}

CDialogCountResonator::~CDialogCountResonator()
{
}

void CDialogCountResonator::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialogCountResonator, CDialogEx)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// Обработчики сообщений CDialogCountResonator


void CDialogCountResonator::OnClose()
{
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	GetParent()->ShowWindow(1);

	CDialogEx::OnClose();
}

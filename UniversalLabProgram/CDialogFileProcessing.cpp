// CDialogFileProcessing.cpp: файл реализации
//

#include "pch.h"
#include "UniversalLabProgram.h"
#include "afxdialogex.h"
#include "CDialogFileProcessing.h"


// Диалоговое окно CDialogFileProcessing

IMPLEMENT_DYNAMIC(CDialogFileProcessing, CDialogEx)

CDialogFileProcessing::CDialogFileProcessing(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOGFILEPROCESSING, pParent)
{

}

CDialogFileProcessing::~CDialogFileProcessing()
{
}

void CDialogFileProcessing::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialogFileProcessing, CDialogEx)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


// Обработчики сообщений CDialogFileProcessing


void CDialogFileProcessing::OnClose()
{
	GetParent()->ShowWindow(1);

	CDialogEx::OnClose();
}

// CDialogConvert.cpp: файл реализации
//

#include "pch.h"
#include "UniversalLabProgram.h"
#include "afxdialogex.h"
#include "CDialogConvert.h"


// Диалоговое окно CDialogConvert

IMPLEMENT_DYNAMIC(CDialogConvert, CDialogEx)

CDialogConvert::CDialogConvert(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOGCONVERT, pParent)
{
	
}

CDialogConvert::~CDialogConvert()
{
}

void CDialogConvert::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialogConvert, CDialogEx)
	ON_WM_CLOSE()
	ON_WM_CREATE()
END_MESSAGE_MAP()


// Обработчики сообщений CDialogConvert


void CDialogConvert::OnClose()
{
	// TODO: добавьте свой код обработчика сообщений или вызов стандартного
	GetParent()->ShowWindow(1);

	CDialogEx::OnClose();
}


int CDialogConvert::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialogEx::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Добавьте специализированный код создания

	return 0;
}

﻿
// UniversalLabProgram.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CUniversalLabProgramApp:
// Сведения о реализации этого класса: UniversalLabProgram.cpp
//

class CUniversalLabProgramApp : public CWinApp
{
public:
	CUniversalLabProgramApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CUniversalLabProgramApp theApp;

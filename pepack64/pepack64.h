
// pepack64.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cpepack64App: 
// �йش����ʵ�֣������ pepack64.cpp
//

class Cpepack64App : public CWinApp
{
public:
	Cpepack64App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cpepack64App theApp;
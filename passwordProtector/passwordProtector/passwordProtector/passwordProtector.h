
// passwordProtector.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CpasswordProtectorApp:
// �йش����ʵ�֣������ passwordProtector.cpp
//

class CpasswordProtectorApp : public CWinApp
{
public:
	CpasswordProtectorApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CpasswordProtectorApp theApp;
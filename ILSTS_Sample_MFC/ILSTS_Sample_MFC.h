

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		



class CILSTS_Sample_MFCApp : public CWinApp
{
public:
	CILSTS_Sample_MFCApp();

public:
	virtual BOOL InitInstance();


	DECLARE_MESSAGE_MAP()
};

extern CILSTS_Sample_MFCApp theApp;
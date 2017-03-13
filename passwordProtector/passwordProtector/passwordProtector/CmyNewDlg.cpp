// CmyNewDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "passwordProtector.h"
#include "CmyNewDlg.h"
#include "afxdialogex.h"


// CmyNewDlg 对话框

IMPLEMENT_DYNAMIC(CmyNewDlg, CDialogEx)

CmyNewDlg::CmyNewDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CmyNewDlg::IDD, pParent)
{

}

CmyNewDlg::~CmyNewDlg()
{
}

void CmyNewDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CmyNewDlg, CDialogEx)
END_MESSAGE_MAP()


// CmyNewDlg 消息处理程序

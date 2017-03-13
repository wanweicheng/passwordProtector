#pragma once


// CmyNewDlg 对话框

class CmyNewDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CmyNewDlg)

public:
	CmyNewDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CmyNewDlg();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};

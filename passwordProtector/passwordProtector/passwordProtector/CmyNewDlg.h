#pragma once


// CmyNewDlg �Ի���

class CmyNewDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CmyNewDlg)

public:
	CmyNewDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CmyNewDlg();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};

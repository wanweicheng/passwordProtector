
// passwordProtectorDlg.h : ͷ�ļ�
//

#pragma once


// CpasswordProtectorDlg �Ի���
class CpasswordProtectorDlg : public CDialogEx
{
// ����
public:
	CpasswordProtectorDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_PASSWORDPROTECTOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCheck1();
	CString userNameString;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	CString userPasswordString;
};

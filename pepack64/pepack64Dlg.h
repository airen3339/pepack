
// pepack64Dlg.h : ͷ�ļ�
//

#pragma once


// Cpepack64Dlg �Ի���
class Cpepack64Dlg : public CDialogEx
{
// ����
public:
	Cpepack64Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MY15PBPACK_DIALOG };

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
	CString m_strPath;
	afx_msg void OnBnClickedOpenfile();
	afx_msg void OnBnClickedPack();
	CString m_strKey;
	afx_msg void OnDropFiles(HDROP hDropInfo);
};

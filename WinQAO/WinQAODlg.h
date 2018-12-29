
// WinQAODlg.h : header file
//

#pragma once


// CWinQAODlg dialog
class CWinQAODlg : public CDialogEx
{
// Construction
public:
	CWinQAODlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WINQAO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString cstrDirSrc;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit2();
};

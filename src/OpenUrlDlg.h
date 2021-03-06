#pragma once


// COpenUrlDlg dialog

class COpenUrlDlg : public CDialog
{
	DECLARE_DYNAMIC(COpenUrlDlg)

public:
	COpenUrlDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~COpenUrlDlg();

// Dialog Data
	enum { IDD = IDD_OPENURL };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:
	CString m_strComboURL;

public:
	afx_msg void OnBnClickedBrowse();
};

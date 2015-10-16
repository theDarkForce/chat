#pragma once
#include "afxwin.h"


// CRegisterInsterface 对话框

class CRegisterInsterface : public CDialogEx
{
	DECLARE_DYNAMIC(CRegisterInsterface)

public:
	CRegisterInsterface(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CRegisterInsterface();

// 对话框数据
	enum { IDD = IDD_DIALOG_REGISTER };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CEdit editusername;
	CEdit editkey;
	CEdit editrekey;

public:
	afx_msg void OnBnClickedButton2();
};

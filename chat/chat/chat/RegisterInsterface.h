#pragma once
#include "afxwin.h"


// CRegisterInsterface �Ի���

class CRegisterInsterface : public CDialogEx
{
	DECLARE_DYNAMIC(CRegisterInsterface)

public:
	CRegisterInsterface(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CRegisterInsterface();

// �Ի�������
	enum { IDD = IDD_DIALOG_REGISTER };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
private:
	CEdit editusername;
	CEdit editkey;
	CEdit editrekey;

public:
	afx_msg void OnBnClickedButton2();
};

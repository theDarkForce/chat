// RegisterInsterface.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "chat.h"
#include "RegisterInsterface.h"
#include "afxdialogex.h"


// CRegisterInsterface �Ի���

IMPLEMENT_DYNAMIC(CRegisterInsterface, CDialogEx)

CRegisterInsterface::CRegisterInsterface(CWnd* pParent /*=NULL*/)
	: CDialogEx(CRegisterInsterface::IDD, pParent)
{

}

CRegisterInsterface::~CRegisterInsterface()
{
}

void CRegisterInsterface::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, editusername);
	DDX_Control(pDX, IDC_EDIT4, editkey);
	DDX_Control(pDX, IDC_EDIT5, editrekey);
}


BEGIN_MESSAGE_MAP(CRegisterInsterface, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &CRegisterInsterface::OnBnClickedButton2)
END_MESSAGE_MAP()


// CRegisterInsterface ��Ϣ�������


void CRegisterInsterface::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������

	exit(0);
}

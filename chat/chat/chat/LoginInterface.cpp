// LoginInterface.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "chat.h"
#include "LoginInterface.h"
#include "afxdialogex.h"


// CLoginInterface �Ի���

IMPLEMENT_DYNAMIC(CLoginInterface, CDialogEx)

CLoginInterface::CLoginInterface(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLoginInterface::IDD, pParent)
{

}

CLoginInterface::~CLoginInterface()
{
}

void CLoginInterface::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, editusername);
	DDX_Control(pDX, IDC_EDIT4, editkey);
	DDX_Control(pDX, IDC_STATIC_USERNAME, username);
	DDX_Control(pDX, IDC_STATIC_KEY, key);
}


BEGIN_MESSAGE_MAP(CLoginInterface, CDialogEx)
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_BUTTON1, &CLoginInterface::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CLoginInterface::OnBnClickedButton2)
END_MESSAGE_MAP()


// CLoginInterface ��Ϣ�������


void CLoginInterface::OnClose()
{
	// TODO:  �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CDialogEx::OnCancel();
}


void CLoginInterface::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CLoginInterface::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������

	CDialogEx::OnOK();
}

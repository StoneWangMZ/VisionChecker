#pragma once


// CDlgBarCheckList �Ի���

class CDlgBarCheckList : public CDialogBar
{
	DECLARE_DYNAMIC(CDlgBarCheckList)

public:
	CDlgBarCheckList(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgBarCheckList();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CheckList };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};

#pragma once


// CDlgBarCheckList 对话框

class CDlgBarCheckList : public CDialogBar
{
	DECLARE_DYNAMIC(CDlgBarCheckList)

public:
	CDlgBarCheckList(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgBarCheckList();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CheckList };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};

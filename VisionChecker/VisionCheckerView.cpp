
// VisionCheckerView.cpp : CVisionCheckerView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "VisionChecker.h"
#endif

#include "VisionCheckerDoc.h"
#include "VisionCheckerView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CVisionCheckerView

IMPLEMENT_DYNCREATE(CVisionCheckerView, CView)

BEGIN_MESSAGE_MAP(CVisionCheckerView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CVisionCheckerView ����/����

CVisionCheckerView::CVisionCheckerView()
{
	// TODO: �ڴ˴���ӹ������

}

CVisionCheckerView::~CVisionCheckerView()
{
}

BOOL CVisionCheckerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CVisionCheckerView ����

void CVisionCheckerView::OnDraw(CDC* /*pDC*/)
{
	CVisionCheckerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CVisionCheckerView ��ӡ

BOOL CVisionCheckerView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CVisionCheckerView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CVisionCheckerView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CVisionCheckerView ���

#ifdef _DEBUG
void CVisionCheckerView::AssertValid() const
{
	CView::AssertValid();
}

void CVisionCheckerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CVisionCheckerDoc* CVisionCheckerView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CVisionCheckerDoc)));
	return (CVisionCheckerDoc*)m_pDocument;
}
#endif //_DEBUG


// CVisionCheckerView ��Ϣ�������

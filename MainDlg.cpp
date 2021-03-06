// MainDlg.cpp : implementation of the CMainDlg class
//
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MainDlg.h"	

	
CMainDlg::CMainDlg() : SHostWnd(_T("LAYOUT:XML_MAINWND"))
{
}

CMainDlg::~CMainDlg()
{
}

BOOL CMainDlg::OnInitDialog(HWND hWnd, LPARAM lParam)
{
	srand(time(NULL));

	SLineChart *pLine1 = FindChildByName2<SLineChart>(L"Line1");
	pLine1->CreateLine(0, L"母猪数量", RGBA(255, 0, 0, 255));
	for (int i = 0; i < 10; i++)
	{
		SStringT str;
		pLine1->AddText(str.Format(L"%d天", i));
		pLine1->AddData(0, rand() % 100);
	}

	SLineChart *pLine2 = FindChildByName2<SLineChart>(L"Line2");
	pLine2->CreateLine(0, L"母猪数量", RGBA(255, 0, 0, 255));
	pLine2->CreateLine(1, L"公猪数量", RGBA(0, 255, 0, 255));
	for (int i = 0; i < 10; i++)
	{
		SStringT str;
		pLine2->AddText(str.Format(L"%d天", i));
		pLine2->AddData(0, rand() % 100);
		pLine2->AddData(1, rand() % 100);
	}

	SLineChart *pLine3 = FindChildByName2<SLineChart>(L"Line3");
	pLine3->CreateLine(0, L"母猪数量", RGBA(255, 0, 0, 255));
	pLine3->CreateLine(1, L"公猪数量", RGBA(0, 255, 0, 255));
	for (int i = 0; i < 10; i++)
	{
		SStringT str;
		pLine3->AddText(str.Format(L"%d天", i));
		pLine3->AddData(0, rand() % 100);
		pLine3->AddData(1, rand() % 100);
	}

	SLineChart *pLine4 = FindChildByName2<SLineChart>(L"Line4");
	pLine4->CreateLine(0, L"母猪数量", RGBA(255, 0, 0, 255));
	for (int i = 0; i < 10; i++)
	{
		SStringT str;
		pLine4->AddText(str.Format(L"%d天", i));
		pLine4->AddData(0, rand() % 100);
	}

	SLineChart *pCurve[4];
	pCurve[0] = FindChildByName2<SLineChart>(L"Curve1");
	pCurve[1] = FindChildByName2<SLineChart>(L"Curve2");
	pCurve[2] = FindChildByName2<SLineChart>(L"Curve3");
	pCurve[3] = FindChildByName2<SLineChart>(L"Curve4");

	pCurve[0]->CreateLine(0, L"母猪数量", RGBA(255, 0, 0, 255));
	for (int i = 0; i < 10; i++)
	{
		SStringT str;
		pCurve[0]->AddText(str.Format(L"%d天", i));
		pCurve[0]->AddData(0, rand() % 100);
	}

	pCurve[1]->CreateLine(0, L"母猪数量", RGBA(255, 0, 0, 255));
	pCurve[1]->CreateLine(1, L"公猪数量", RGBA(0, 255, 0, 255));
	for (int i = 0; i < 10; i++)
	{
		SStringT str;
		pCurve[1]->AddText(str.Format(L"%d天", i));
		pCurve[1]->AddData(0, rand() % 100);
		pCurve[1]->AddData(1, rand() % 100);
	}


	pCurve[2]->CreateLine(0, L"母猪数量", RGBA(255, 0, 0, 255));
	pCurve[2]->CreateLine(1, L"公猪数量", RGBA(0, 0, 0, 255));
	pCurve[2]->SetLineWidth(2);
	pCurve[2]->SetDataEnd(0.8);
	for (int i = 0; i < 10; i++)
	{
		SStringT str;
		pCurve[2]->AddText(str.Format(L"%d天", i));
		pCurve[2]->AddData(0, rand() % 100);
		pCurve[2]->AddData(1, rand() % 100);
	}

	pCurve[3]->CreateLine(0, L"母猪数量", RGBA(255, 0, 0, 255));
	for (int i = 0; i < 10; i++)
	{
		SStringT str;
		pCurve[3]->AddText(str.Format(L"%d天", i));
		pCurve[3]->AddData(0, rand() % 100);
	}

	SBarChart *pBar[4];
	pBar[0] = FindChildByName2<SBarChart>(L"bar1");
	pBar[1] = FindChildByName2<SBarChart>(L"bar2");
	pBar[2] = FindChildByName2<SBarChart>(L"bar3");
	pBar[3] = FindChildByName2<SBarChart>(L"bar4");

	pBar[0]->SetBarWidth(0.8);
	for (int i = 0; i < 10; i++)
	{
		SStringT str;
		pBar[0]->AddText(str.Format(L"%d天", i));
		pBar[1]->AddText(str.Format(L"%d天", i));
		pBar[2]->AddText(str.Format(L"%d天", i));
		pBar[3]->AddText(str.Format(L"%d天", i));

		pBar[0]->AddData(0, rand() % 100, RGBA(255, 0, 0, 255));

		pBar[1]->AddData(0, rand() % 100, RGBA(255, 0, 0, 255));
		pBar[1]->AddData(1, rand() % 100, RGBA(rand() % 255, rand() % 255, rand() % 255, 255));

		pBar[2]->AddData(0, rand() % 100, RGBA(255, 255, 0, 255));
		pBar[2]->AddData(1, rand() % 100, RGBA(0, 255, 255, 255));

		pBar[3]->AddData(0, rand() % 100, RGBA(255, 255, 255, 255));
	}

	SPieChart *pPie[4];
	pPie[0] = FindChildByName2<SPieChart>(L"pie1");
	pPie[1] = FindChildByName2<SPieChart>(L"pie2");
	pPie[2] = FindChildByName2<SPieChart>(L"pie3");
	pPie[3] = FindChildByName2<SPieChart>(L"pie4");

	for (int n = 0; n < 4; n++)
	{
		pPie[n]->SetSeriesName(L"母猪数量");
		for (int i = 0; i < 6; i++)
		{
			SStringT str;
			pPie[n]->AddPie(PIE(rand() % 100, RGBA(rand() % 255, rand() % 255, rand() % 255, 255), str.Format(L"%d天", i)));
		}
	}
	SetTimer(TIMER_MSG, 500);
	return 0;
}


void CMainDlg::OnTimer(UINT_PTR idEvent)
{

	if (idEvent == TIMER_MSG)
	{
		SLineChart *pLine1 = FindChildByName2<SLineChart>(L"Line1");
		pLine1->PopTopPushBack(0, rand() % 100);
		pLine1->UpdateWindow();

		SLineChart *pCurve1 = FindChildByName2<SLineChart>(L"Curve1");
		pCurve1->PopTopPushBack(0, rand() % 100);
		pCurve1->UpdateWindow();

		SBarChart *pBar = FindChildByName2<SBarChart>(L"bar1");

		pBar->GetData(0)[0].Value;

	}
	else
		SetMsgHandled(FALSE);
}


void CMainDlg::OnDestroy()
	{
		SetMsgHandled(FALSE);
		KillTimer(TIMER_MSG);
	}
//TODO:消息映射
void CMainDlg::OnClose()
{
	SNativeWnd::DestroyWindow();
}

void CMainDlg::OnMaximize()
{
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE);
}
void CMainDlg::OnRestore()
{
	SendMessage(WM_SYSCOMMAND, SC_RESTORE);
}
void CMainDlg::OnMinimize()
{
	SendMessage(WM_SYSCOMMAND, SC_MINIMIZE);
}

void CMainDlg::OnSize(UINT nType, CSize size)
{
	SetMsgHandled(FALSE);	
	SWindow *pBtnMax = FindChildByName(L"btn_max");
	SWindow *pBtnRestore = FindChildByName(L"btn_restore");
	if(!pBtnMax || !pBtnRestore) return;
	
	if (nType == SIZE_MAXIMIZED)
	{
		pBtnRestore->SetVisible(TRUE);
		pBtnMax->SetVisible(FALSE);
	}
	else if (nType == SIZE_RESTORED)
	{
		pBtnRestore->SetVisible(FALSE);
		pBtnMax->SetVisible(TRUE);
	}
}


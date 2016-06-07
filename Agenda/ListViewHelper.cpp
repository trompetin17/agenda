
#include "stdafx.h"
#include <commctrl.h>

#include "Agenda.h"
#include "Helpers.h"

HWND CreateListViewAddressBook(HWND parent, HINSTANCE instance, int x, int y, int width, int height)
{
	INITCOMMONCONTROLSEX ex;
	ex.dwICC = ICC_LISTVIEW_CLASSES;
	InitCommonControlsEx(&ex);

	RECT rcClient;
	GetClientRect(parent, &rcClient);
	HWND hWndListView = CreateWindow(WC_LISTVIEW, L"", WS_CHILD | WS_VISIBLE | LVS_REPORT | LVS_EDITLABELS, x, y, width, height, parent, (HMENU)IDC_LISTVIEW, instance, NULL);

	WCHAR szText[256];
	LVCOLUMN lvc;
	lvc.mask = LVCF_FMT | LVCF_WIDTH | LVCF_TEXT | LVCF_SUBITEM;

	lvc.iSubItem = 0;
	lvc.pszText = szText;
	lvc.cx = 100;
	lvc.fmt = LVCFMT_LEFT;
	LoadString(instance, IDS_LV_NAME, szText, sizeof(szText) / sizeof(szText[0]));
	ListView_InsertColumn(hWndListView, 0, &lvc);

	lvc.iSubItem = 1;
	LoadString(instance, IDS_LV_PHONE, szText, sizeof(szText) / sizeof(szText[0]));
	ListView_InsertColumn(hWndListView, 1, &lvc);
	return hWndListView;
}


#include "MultithreadDlg.h"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpszCmdLine, int nCmdShow)
{
	INITCOMMONCONTROLSEX icc = {sizeof(INITCOMMONCONTROLSEX)};
	icc.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&icc);
	CMultithreadDlg dlg;
	return DialogBox(hInst, MAKEINTRESOURCE(IDD_DIALOG1), NULL, CMultithreadDlg::DlgProc);
}
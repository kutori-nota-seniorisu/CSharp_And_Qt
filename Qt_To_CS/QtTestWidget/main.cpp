#include <qmfcapp.h>
#include <qwinwidget.h>

#include <QMessageBox>
#include <windows.h>

#include "mainwindow.h"

BOOL WINAPI DllMain( HINSTANCE hInstance, DWORD dwReason, LPVOID /*lpvReserved*/ )
{
	static bool ownApplication = FALSE;

	if ( dwReason == DLL_PROCESS_ATTACH )
	ownApplication = QMfcApp::pluginInstance( hInstance );
	if ( dwReason == DLL_PROCESS_DETACH && ownApplication )
	delete qApp;

	return TRUE;
}

extern "C" __declspec(dllexport) bool showDialog( HWND parent )
{
	MainWindow win(parent);
	win.show();
	return qApp->exec();
}

/*
extern "C" __declspec(dllexport) bool showDialog()
{
	int argc = 0;
	QApplication a(argc, 0);
	MainWindow* win = new MainWindow();
	win->show();
	return a.exec();
}
*/

/*
extern "C" __declspec(dllexport) void DllInit()
{
	int argc = 0;
	(void)new QApplication(argc, 0);
}

extern "C" __declspec(dllexport) void showDialog()
{
	MainWindow* win = new MainWindow();
	win->show();
}
*/

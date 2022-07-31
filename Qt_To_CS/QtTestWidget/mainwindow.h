#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = nullptr);
	explicit MainWindow(HWND hParentWnd, QObject* parent = 0, Qt::WindowFlags f = 0);
	~MainWindow();

private slots:
	void on_btnEqual_clicked();

private:
	Ui::MainWindow *ui;
	HWND hParent;
};

#endif // MAINWINDOW_H

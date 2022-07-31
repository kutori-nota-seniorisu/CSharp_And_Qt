#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
}

MainWindow::MainWindow(HWND hParentWnd, QObject* parent, Qt::WindowFlags f)
	:QMainWindow(0, f), hParent(hParentWnd)
{
	ui->setupUi(this);
	if (parent)
		QObject::setParent(parent);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_btnEqual_clicked()
{
	ui->leSum->setText(QString::number(ui->leLeft->text().toInt() + ui->leRight->text().toInt()));
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QChart>
#include <QChartView>
#include <math.h>
#include <QMessageBox>

using namespace QtCharts;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QString windowTitle("NORAD TLE viewer");
    //QMessageBox::information(this, "", windowTitle );
    ui->setupUi(this);

    this->setWindowTitle(windowTitle);

}



MainWindow::~MainWindow()
{
    delete ui;
}


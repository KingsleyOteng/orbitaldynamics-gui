#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QChart>
#include <QLineEdit>
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
    //SatNameEdit = new QLineEdit;
    //SatNameEdit->setPlaceholderText("hello");
    //SatNameEdit->show();
    //SatNameEdit->setFocus();
    this->setWindowTitle(windowTitle);
    ui->location_box_5->setText("alright");
    ui->URL_box->setText("Oh my goodness!");
    ui->SatNamEdit->setText("Satellite Name");

}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
ui->URL_box->setText("Oh my goodness!");
}

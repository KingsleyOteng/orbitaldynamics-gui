#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget widget;
    Ui::MainWindow ui;
    ui.setupUi(&widget);

    widget.show();
    return a.exec();
}

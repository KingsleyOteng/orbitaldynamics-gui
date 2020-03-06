/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *URL_label;
    QTextEdit *URL_box;
    QPushButton *pushButton;
    QLabel *Satellite_name_label;
    QTextEdit *argument_perigree;
    QLabel *label_3;
    QTextEdit *inclination_box;
    QTextEdit *epoch_box;
    QLabel *label_4;
    QTextEdit *stderiv_box;
    QLabel *label_5;
    QTextEdit *ndderiv_box;
    QLabel *label_6;
    QTextEdit *drag_box;
    QLabel *label_7;
    QTextEdit *ephemeridis_box;
    QLabel *label_8;
    QTextEdit *element_box;
    QLabel *label_9;
    QFrame *line;
    QTextEdit *textEdit_11;
    QTextEdit *inclination_box_2;
    QLabel *label_12;
    QTextEdit *right_ascension_box;
    QLabel *label_13;
    QTextEdit *eccentricity_box;
    QLabel *label_14;
    QFrame *line_2;
    QLabel *label_16;
    QLabel *label_17;
    QFrame *line_3;
    QLabel *label_18;
    QLabel *label_19;
    QTextEdit *mean_anomaly;
    QLabel *label_20;
    QTextEdit *mean_motion_box;
    QTextEdit *revolution_number_box;
    QLabel *label_21;
    QLabel *label_22;
    QPushButton *pushButton_2;
    QLabel *Satellite_name_label_2;
    QLabel *label_23;
    QTextEdit *elevation_box_3;
    QTextEdit *elevation_box_4;
    QTextEdit *elevation_box_5;
    QLabel *Satellite_name_label_3;
    QFrame *line_4;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QFrame *line_5;
    QLabel *label_27;
    QLabel *label_28;
    QTextEdit *location_box_2;
    QTextEdit *location_box_3;
    QTextEdit *location_box_4;
    QTextEdit *location_box_5;
    QTextEdit *location_box_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(804, 562);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        URL_label = new QLabel(centralwidget);
        URL_label->setObjectName(QString::fromUtf8("URL_label"));
        URL_label->setGeometry(QRect(7, 20, 71, 20));
        QFont font;
        font.setFamily(QString::fromUtf8(".AppleSystemUIFont"));
        font.setBold(true);
        font.setWeight(75);
        URL_label->setFont(font);
        URL_box = new QTextEdit(centralwidget);
        URL_box->setObjectName(QString::fromUtf8("URL_box"));
        URL_box->setGeometry(QRect(60, 10, 531, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 0, 211, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Silom"));
        pushButton->setFont(font1);
        Satellite_name_label = new QLabel(centralwidget);
        Satellite_name_label->setObjectName(QString::fromUtf8("Satellite_name_label"));
        Satellite_name_label->setGeometry(QRect(10, 90, 91, 20));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        Satellite_name_label->setFont(font2);
        argument_perigree = new QTextEdit(centralwidget);
        argument_perigree->setObjectName(QString::fromUtf8("argument_perigree"));
        argument_perigree->setGeometry(QRect(240, 300, 101, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 160, 71, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Songti TC"));
        font3.setPointSize(9);
        font3.setItalic(true);
        label_3->setFont(font3);
        inclination_box = new QTextEdit(centralwidget);
        inclination_box->setObjectName(QString::fromUtf8("inclination_box"));
        inclination_box->setGeometry(QRect(80, 150, 91, 41));
        epoch_box = new QTextEdit(centralwidget);
        epoch_box->setObjectName(QString::fromUtf8("epoch_box"));
        epoch_box->setGeometry(QRect(80, 200, 91, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 210, 71, 20));
        label_4->setFont(font3);
        stderiv_box = new QTextEdit(centralwidget);
        stderiv_box->setObjectName(QString::fromUtf8("stderiv_box"));
        stderiv_box->setGeometry(QRect(80, 250, 91, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 260, 71, 20));
        label_5->setFont(font3);
        ndderiv_box = new QTextEdit(centralwidget);
        ndderiv_box->setObjectName(QString::fromUtf8("ndderiv_box"));
        ndderiv_box->setGeometry(QRect(80, 300, 91, 41));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 310, 71, 20));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Songti SC"));
        font4.setPointSize(9);
        font4.setItalic(true);
        label_6->setFont(font4);
        drag_box = new QTextEdit(centralwidget);
        drag_box->setObjectName(QString::fromUtf8("drag_box"));
        drag_box->setGeometry(QRect(80, 350, 91, 41));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 360, 71, 20));
        label_7->setFont(font3);
        ephemeridis_box = new QTextEdit(centralwidget);
        ephemeridis_box->setObjectName(QString::fromUtf8("ephemeridis_box"));
        ephemeridis_box->setGeometry(QRect(80, 400, 91, 41));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 410, 71, 20));
        label_8->setFont(font3);
        element_box = new QTextEdit(centralwidget);
        element_box->setObjectName(QString::fromUtf8("element_box"));
        element_box->setGeometry(QRect(80, 450, 91, 41));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 461, 71, 20));
        label_9->setFont(font3);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 60, 831, 20));
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        textEdit_11 = new QTextEdit(centralwidget);
        textEdit_11->setObjectName(QString::fromUtf8("textEdit_11"));
        textEdit_11->setGeometry(QRect(120, 80, 221, 41));
        inclination_box_2 = new QTextEdit(centralwidget);
        inclination_box_2->setObjectName(QString::fromUtf8("inclination_box_2"));
        inclination_box_2->setGeometry(QRect(240, 150, 101, 41));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(180, 160, 71, 20));
        label_12->setFont(font3);
        right_ascension_box = new QTextEdit(centralwidget);
        right_ascension_box->setObjectName(QString::fromUtf8("right_ascension_box"));
        right_ascension_box->setGeometry(QRect(240, 200, 101, 41));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(180, 210, 71, 20));
        label_13->setFont(font3);
        eccentricity_box = new QTextEdit(centralwidget);
        eccentricity_box->setObjectName(QString::fromUtf8("eccentricity_box"));
        eccentricity_box->setGeometry(QRect(240, 250, 101, 41));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(180, 260, 71, 20));
        label_14->setFont(font3);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(350, 70, 20, 481));
        line_2->setLineWidth(2);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(370, 180, 71, 19));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(true);
        font5.setItalic(true);
        font5.setWeight(75);
        label_16->setFont(font5);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(370, 210, 71, 19));
        label_17->setFont(font5);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(360, 290, 451, 121));
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(180, 310, 71, 20));
        label_18->setFont(font3);
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(180, 360, 71, 20));
        label_19->setFont(font3);
        mean_anomaly = new QTextEdit(centralwidget);
        mean_anomaly->setObjectName(QString::fromUtf8("mean_anomaly"));
        mean_anomaly->setGeometry(QRect(240, 350, 101, 41));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(180, 410, 71, 20));
        label_20->setFont(font3);
        mean_motion_box = new QTextEdit(centralwidget);
        mean_motion_box->setObjectName(QString::fromUtf8("mean_motion_box"));
        mean_motion_box->setGeometry(QRect(240, 400, 101, 41));
        revolution_number_box = new QTextEdit(centralwidget);
        revolution_number_box->setObjectName(QString::fromUtf8("revolution_number_box"));
        revolution_number_box->setGeometry(QRect(240, 450, 101, 41));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(180, 450, 61, 31));
        label_21->setFont(font3);
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(370, 240, 71, 19));
        label_22->setFont(font5);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 260, 271, 81));
        pushButton_2->setFont(font1);
        Satellite_name_label_2 = new QLabel(centralwidget);
        Satellite_name_label_2->setObjectName(QString::fromUtf8("Satellite_name_label_2"));
        Satellite_name_label_2->setGeometry(QRect(370, 370, 261, 20));
        Satellite_name_label_2->setFont(font2);
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(370, 290, 71, 19));
        label_23->setFont(font5);
        elevation_box_3 = new QTextEdit(centralwidget);
        elevation_box_3->setObjectName(QString::fromUtf8("elevation_box_3"));
        elevation_box_3->setGeometry(QRect(370, 400, 111, 31));
        elevation_box_4 = new QTextEdit(centralwidget);
        elevation_box_4->setObjectName(QString::fromUtf8("elevation_box_4"));
        elevation_box_4->setGeometry(QRect(560, 400, 111, 31));
        elevation_box_5 = new QTextEdit(centralwidget);
        elevation_box_5->setObjectName(QString::fromUtf8("elevation_box_5"));
        elevation_box_5->setGeometry(QRect(680, 400, 111, 31));
        Satellite_name_label_3 = new QLabel(centralwidget);
        Satellite_name_label_3->setObjectName(QString::fromUtf8("Satellite_name_label_3"));
        Satellite_name_label_3->setGeometry(QRect(370, 90, 261, 20));
        Satellite_name_label_3->setFont(font2);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(430, 460, 351, 20));
        QFont font6;
        font6.setPointSize(50);
        line_4->setFont(font6);
        line_4->setLineWidth(5);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(570, 430, 71, 20));
        label_24->setFont(font3);
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(690, 430, 71, 20));
        label_25->setFont(font3);
        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(380, 430, 71, 20));
        label_26->setFont(font3);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(430, 480, 351, 20));
        line_5->setFont(font6);
        line_5->setLineWidth(5);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(380, 460, 71, 20));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Songti TC"));
        font7.setPointSize(9);
        font7.setItalic(false);
        label_27->setFont(font7);
        label_28 = new QLabel(centralwidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(380, 480, 71, 20));
        label_28->setFont(font7);
        location_box_2 = new QTextEdit(centralwidget);
        location_box_2->setObjectName(QString::fromUtf8("location_box_2"));
        location_box_2->setGeometry(QRect(440, 180, 91, 21));
        location_box_3 = new QTextEdit(centralwidget);
        location_box_3->setObjectName(QString::fromUtf8("location_box_3"));
        location_box_3->setGeometry(QRect(440, 210, 91, 21));
        location_box_4 = new QTextEdit(centralwidget);
        location_box_4->setObjectName(QString::fromUtf8("location_box_4"));
        location_box_4->setGeometry(QRect(440, 240, 91, 21));
        location_box_5 = new QTextEdit(centralwidget);
        location_box_5->setObjectName(QString::fromUtf8("location_box_5"));
        location_box_5->setGeometry(QRect(520, 80, 271, 41));
        location_box_6 = new QTextEdit(centralwidget);
        location_box_6->setObjectName(QString::fromUtf8("location_box_6"));
        location_box_6->setGeometry(QRect(440, 270, 91, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 804, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        URL_label->setText(QCoreApplication::translate("MainWindow", "URL", nullptr));
        URL_box->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont';\"><br /></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "GO", nullptr));
        Satellite_name_label->setText(QCoreApplication::translate("MainWindow", "Satellite name", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Epoch", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "1st derivative", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "2nd derivative", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Drag coeff.", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Ephemeris", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Element no.", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Inclination", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Right ascension", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Eccentricity", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Latitude", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Longitude", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Perigree", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Mn anomaly", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Mn motion", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Revolution", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Elevation", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "LOAD", nullptr));
        Satellite_name_label_2->setText(QCoreApplication::translate("MainWindow", "Upcoming observation period", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Local time", nullptr));
        Satellite_name_label_3->setText(QCoreApplication::translate("MainWindow", "Observatory", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Commencement", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "End", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Passage", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Optimal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

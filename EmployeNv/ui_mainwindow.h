/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_date_time;
    QGridLayout *gridLayout;
    QPushButton *reportemploye;
    QPushButton *employeelist;
    QPushButton *addemploye;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_5;
    QLineEdit *lineEdit_username;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_fname;
    QLineEdit *lineEdit_mname;
    QLineEdit *lineEdit_lname;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_ID;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *uplButton;
    QLabel *label;
    QPushButton *ajouteremploye;
    QPushButton *pushButton_2;
    QWidget *page_2;
    QTableView *tabemploye;
    QStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QLabel *label_25;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QWidget *page_4;
    QPushButton *Print;
    QWidget *page_8;
    QPushButton *pushButton;
    QWidget *page_5;
    QGridLayout *gridLayout_2;
    QPushButton *recherche;
    QLineEdit *lineEdit_ID_2;
    QListView *listView;
    QStackedWidget *stackedWidget_3;
    QWidget *page_6;
    QLabel *label_11;
    QCommandLinkButton *commandLinkButton;
    QWidget *page_7;
    QLabel *label_IDs;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *Delete;
    QLineEdit *lineEdit_usernames;
    QLineEdit *lineEdit_username_3;
    QLineEdit *lineEdit_username_4;
    QLineEdit *lineEdit_username_5;
    QLineEdit *lineEdit_username_6;
    QLineEdit *lineEdit_IDs;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1396, 694);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
"background: qlineargradient(spread:pad, x1:0.472, y1:0, x2:0.502, y2:1, stop:0 rgba(0, 53, 84, 255), stop:1 rgba(0, 70, 111, 255));\n"
"font-family:\"Quicksand SemiBold\";\n"
"}\n"
"\n"
"\n"
"QListWidget{\n"
"background:transparent;\n"
"}\n"
"\n"
"QFrame{\n"
"background:transparent;\n"
"}\n"
"\n"
"\n"
"QLabel,QGroupBox{\n"
"color: white;\n"
"background:transparent;\n"
"}\n"
"QComboBox{\n"
"background:rgb(0, 48, 75);\n"
"color:white;\n"
"height:32px;\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QLineEdit,QDateEdit,QDateTimeEdit{\n"
"background:rgba(0, 33, 52, 100);\n"
"color:white;\n"
"height:32px;\n"
"border-radius:8px;\n"
"}\n"
"\n"
"QPushButton{\n"
"width:131px;\n"
"height:32px;\n"
"background:rgba(0, 33, 52, 100);\n"
"color:white;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background: #cae9ff;\n"
"color:black;\n"
"}\n"
"\n"
"\n"
"Line{\n"
"backfround:white;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_date_time = new QLabel(centralwidget);
        label_date_time->setObjectName(QStringLiteral("label_date_time"));
        QFont font;
        font.setFamily(QStringLiteral("Quicksand SemiBold"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label_date_time->setFont(font);
        label_date_time->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(label_date_time);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        reportemploye = new QPushButton(centralwidget);
        reportemploye->setObjectName(QStringLiteral("reportemploye"));
        reportemploye->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(reportemploye, 0, 1, 1, 1);

        employeelist = new QPushButton(centralwidget);
        employeelist->setObjectName(QStringLiteral("employeelist"));

        gridLayout->addWidget(employeelist, 0, 2, 1, 1);

        addemploye = new QPushButton(centralwidget);
        addemploye->setObjectName(QStringLiteral("addemploye"));

        gridLayout->addWidget(addemploye, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
"background: qlineargradient(spread:pad, x1:0.472, y1:0, x2:0.502, y2:1, stop:0 rgba(0, 53, 84, 255), stop:1 rgba(0, 70, 111, 255));\n"
"font-family:\"Quicksand SemiBold\";\n"
"}\n"
"\n"
"\n"
"QListWidget{\n"
"background:transparent;\n"
"}\n"
"\n"
"QFrame{\n"
"background:transparent;\n"
"}\n"
"\n"
"\n"
"QLabel,QGroupBox{\n"
"color: white;\n"
"background:transparent;\n"
"}\n"
"QComboBox{\n"
"background:rgb(0, 48, 75);\n"
"color:white;\n"
"height:32px;\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QLineEdit,QDateEdit,QDateTimeEdit{\n"
"background:rgba(0, 33, 52, 100);\n"
"color:white;\n"
"height:32px;\n"
"border-radius:8px;\n"
"}\n"
"\n"
"QPushButton{\n"
"width:131px;\n"
"height:32px;\n"
"background:rgba(0, 33, 52, 100);\n"
"color:white;\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background: #cae9ff;\n"
"color:black;\n"
"}\n"
"\n"
"\n"
"Line{\n"
"backfround:white;\n"
"}"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 100, 121, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Quicksand SemiBold"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_5->setStyleSheet(QLatin1String("border: 0px solid rgb(150, 150,150);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_username = new QLineEdit(page);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(260, 100, 221, 31));
        lineEdit_username->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 170, 71, 31));
        label_6->setFont(font1);
        label_6->setStyleSheet(QLatin1String("border: 0px solid rgb(150, 150,150);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 230, 71, 31));
        label_7->setFont(font1);
        label_7->setStyleSheet(QLatin1String("border: 0px solid rgb(150, 150,150);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(90, 290, 71, 31));
        label_8->setFont(font1);
        label_8->setStyleSheet(QLatin1String("border: 0px solid rgb(150, 150,150);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 350, 71, 31));
        label_9->setFont(font1);
        label_9->setStyleSheet(QLatin1String("border: 0px solid rgb(150, 150,150);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(90, 430, 71, 31));
        label_10->setFont(font1);
        label_10->setStyleSheet(QLatin1String("border: 0px solid rgb(150, 150,150);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_fname = new QLineEdit(page);
        lineEdit_fname->setObjectName(QStringLiteral("lineEdit_fname"));
        lineEdit_fname->setGeometry(QRect(260, 170, 221, 31));
        lineEdit_fname->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_mname = new QLineEdit(page);
        lineEdit_mname->setObjectName(QStringLiteral("lineEdit_mname"));
        lineEdit_mname->setGeometry(QRect(260, 230, 221, 31));
        lineEdit_mname->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_lname = new QLineEdit(page);
        lineEdit_lname->setObjectName(QStringLiteral("lineEdit_lname"));
        lineEdit_lname->setGeometry(QRect(260, 290, 221, 31));
        lineEdit_lname->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_email = new QLineEdit(page);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(260, 350, 221, 31));
        lineEdit_email->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_ID = new QLineEdit(page);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(260, 430, 221, 31));
        lineEdit_ID->setStyleSheet(QLatin1String("border: 0px solid rgb(100, 100,100);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 0, 1121, 51));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 0, 901, 51));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 0, 901, 51));
        uplButton = new QPushButton(page);
        uplButton->setObjectName(QStringLiteral("uplButton"));
        uplButton->setGeometry(QRect(920, 250, 171, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Quicksand SemiBold"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        uplButton->setFont(font2);
        uplButton->setStyleSheet(QStringLiteral("background:transparent;"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(940, 130, 141, 111));
        ajouteremploye = new QPushButton(page);
        ajouteremploye->setObjectName(QStringLiteral("ajouteremploye"));
        ajouteremploye->setGeometry(QRect(1160, 460, 181, 31));
        ajouteremploye->setMinimumSize(QSize(151, 0));
        QFont font3;
        font3.setFamily(QStringLiteral("Calibri"));
        ajouteremploye->setFont(font3);
        ajouteremploye->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 510, 191, 25));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        tabemploye = new QTableView(page_2);
        tabemploye->setObjectName(QStringLiteral("tabemploye"));
        tabemploye->setGeometry(QRect(100, 50, 1221, 301));
        stackedWidget_2 = new QStackedWidget(page_2);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(100, 360, 1221, 281));
        stackedWidget_2->setStyleSheet(QStringLiteral("background: transparent;"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_25 = new QLabel(page_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(250, 20, 451, 51));
        QFont font4;
        font4.setFamily(QStringLiteral("Quicksand SemiBold"));
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setWeight(75);
        label_25->setFont(font4);
        label_25->setStyleSheet(QLatin1String("border: 0px solid rgb(85, 255, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        checkBox = new QCheckBox(page_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(760, 50, 70, 17));
        checkBox->setStyleSheet(QLatin1String("QCheckBox\n"
"\n"
"{\n"
"\n"
"color:white;\n"
"background:transparent;\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"    border: 1px solid #ffffff;\n"
"	border-radius: 5px;\n"
"	\n"
"	border-color: rgb(85, 255, 0);\n"
"    background: none;\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"    border: 0px solid #5A5A5A;\n"
"	border-radius: 10px;\n"
"\n"
"    background: qradialgradient(spread:pad, cx:0.800, cy:0.528182, radius:2, fx:0.494, fy:0.528, stop:0.153409 rgba(85, 255, 0, 255), stop:0.3125 rgba(85, 255, 0, 0));\n"
"}\n"
""));
        checkBox_2 = new QCheckBox(page_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(870, 50, 70, 17));
        checkBox_2->setStyleSheet(QLatin1String("QCheckBox\n"
"\n"
"{\n"
"\n"
"color:white;\n"
"background:transparent;\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"    border: 1px solid #ffffff;\n"
"	border-radius: 5px;\n"
"	\n"
"	border-color: rgb(255, 0, 0);\n"
"    background: none;\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"    border: 0px solid #5A5A5A;\n"
"	border-radius: 10px;\n"
"\n"
"    background: qradialgradient(spread:pad, cx:0.800, cy:0.528182, radius:2, fx:0.494, fy:0.528, stop:0.153409 rgba(85, 255, 0, 255), stop:0.3125 rgba(85, 255, 0, 0));\n"
"}\n"
""));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        Print = new QPushButton(page_4);
        Print->setObjectName(QStringLiteral("Print"));
        Print->setGeometry(QRect(320, 70, 301, 51));
        Print->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color: rgb(30, 227, 0);\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  rgb(30, 227, 0);\n"
"	border-color: rgba(30, 227, 0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
""));
        stackedWidget_2->addWidget(page_4);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        pushButton = new QPushButton(page_8);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 60, 381, 51));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"	background-color:rgb(50, 53, 57);\n"
"	border-style:solid;\n"
"	border-radius:7px;\n"
"	border-width:1px;\n"
"border-color: rgb(50, 53, 57);\n"
"	color:#ffffff;\n"
"	font-size:16px;\n"
"font-family:Calibri;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: #00000000;\n"
"	border-color:red;\n"
"	/*color:rgb(30, 227, 0);*/\n"
"}\n"
"\n"
"QPushButton:focus\n"
"{\n"
"	background-color:  red;\n"
"	border-color: red;\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"<body style =\"background: url(file:///C:/Users/pc/Desktop/pdf_image.jpg); background-size: 100% 100%;\">\n"
"\"<body bgcolor=#cae9ff link=#5000A0>\\n\"\n"
""));
        stackedWidget_2->addWidget(page_8);
        stackedWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        gridLayout_2 = new QGridLayout(page_5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        recherche = new QPushButton(page_5);
        recherche->setObjectName(QStringLiteral("recherche"));

        gridLayout_2->addWidget(recherche, 0, 0, 1, 1);

        lineEdit_ID_2 = new QLineEdit(page_5);
        lineEdit_ID_2->setObjectName(QStringLiteral("lineEdit_ID_2"));
        lineEdit_ID_2->setStyleSheet(QLatin1String("color:white;\n"
"padding:0 0 0 10px;"));

        gridLayout_2->addWidget(lineEdit_ID_2, 0, 1, 1, 1);

        listView = new QListView(page_5);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setStyleSheet(QLatin1String("border:0px solid white;\n"
"color:white;\n"
"background: transparent;\n"
"margin:0 40px 0 40px;\n"
""));

        gridLayout_2->addWidget(listView, 1, 0, 1, 2);

        stackedWidget_3 = new QStackedWidget(page_5);
        stackedWidget_3->setObjectName(QStringLiteral("stackedWidget_3"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        label_11 = new QLabel(page_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(-10, 90, 521, 41));
        QFont font5;
        font5.setFamily(QStringLiteral("Quicksand SemiBold"));
        font5.setPointSize(26);
        font5.setBold(true);
        font5.setWeight(75);
        label_11->setFont(font5);
        label_11->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0, 0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        commandLinkButton = new QCommandLinkButton(page_6);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(320, 480, 172, 41));
        stackedWidget_3->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        label_IDs = new QLabel(page_7);
        label_IDs->setObjectName(QStringLiteral("label_IDs"));
        label_IDs->setGeometry(QRect(50, 30, 47, 31));
        label_IDs->setFont(font2);
        label_IDs->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 255,255);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_13 = new QLabel(page_7);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 80, 91, 31));
        label_13->setFont(font2);
        label_13->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 255,255);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_14 = new QLabel(page_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(50, 130, 101, 31));
        label_14->setFont(font2);
        label_14->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 255,255);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_15 = new QLabel(page_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(50, 280, 71, 31));
        label_15->setFont(font2);
        label_15->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 255,255);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_16 = new QLabel(page_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(50, 179, 81, 31));
        label_16->setFont(font2);
        label_16->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 255,255);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        label_17 = new QLabel(page_7);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(50, 230, 71, 31));
        label_17->setFont(font2);
        label_17->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 255,255);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        Delete = new QPushButton(page_7);
        Delete->setObjectName(QStringLiteral("Delete"));
        Delete->setGeometry(QRect(360, 350, 131, 41));
        lineEdit_usernames = new QLineEdit(page_7);
        lineEdit_usernames->setObjectName(QStringLiteral("lineEdit_usernames"));
        lineEdit_usernames->setGeometry(QRect(210, 80, 221, 31));
        lineEdit_usernames->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0,0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_username_3 = new QLineEdit(page_7);
        lineEdit_username_3->setObjectName(QStringLiteral("lineEdit_username_3"));
        lineEdit_username_3->setGeometry(QRect(210, 130, 221, 31));
        lineEdit_username_3->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0,0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_username_4 = new QLineEdit(page_7);
        lineEdit_username_4->setObjectName(QStringLiteral("lineEdit_username_4"));
        lineEdit_username_4->setGeometry(QRect(210, 180, 221, 31));
        lineEdit_username_4->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0,0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_username_5 = new QLineEdit(page_7);
        lineEdit_username_5->setObjectName(QStringLiteral("lineEdit_username_5"));
        lineEdit_username_5->setGeometry(QRect(210, 230, 221, 31));
        lineEdit_username_5->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0,0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_username_6 = new QLineEdit(page_7);
        lineEdit_username_6->setObjectName(QStringLiteral("lineEdit_username_6"));
        lineEdit_username_6->setGeometry(QRect(210, 280, 221, 31));
        lineEdit_username_6->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0,0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_IDs = new QLineEdit(page_7);
        lineEdit_IDs->setObjectName(QStringLiteral("lineEdit_IDs"));
        lineEdit_IDs->setGeometry(QRect(210, 30, 221, 31));
        lineEdit_IDs->setStyleSheet(QLatin1String("border: 0px solid rgb(255, 0,0);; \n"
"border-bottom-width: 2px;\n"
"border-radius: px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget_3->addWidget(page_7);

        gridLayout_2->addWidget(stackedWidget_3, 0, 2, 2, 1);

        stackedWidget->addWidget(page_5);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        stackedWidget_2->setCurrentIndex(2);
        stackedWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_date_time->setText(QString());
        reportemploye->setText(QApplication::translate("MainWindow", "Liste Employe", Q_NULLPTR));
        employeelist->setText(QApplication::translate("MainWindow", "Delete Employe", Q_NULLPTR));
        addemploye->setText(QApplication::translate("MainWindow", "add employee", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        lineEdit_username->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Fname", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Mname", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Lname", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Email", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        lineEdit_fname->setText(QString());
        lineEdit_mname->setText(QString());
        lineEdit_lname->setText(QString());
        lineEdit_email->setText(QString());
        lineEdit_ID->setText(QString());
        label_4->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        uplButton->setText(QApplication::translate("MainWindow", "UPLOAD PICTURE", Q_NULLPTR));
        label->setText(QString());
        ajouteremploye->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "sendmail \360\237\222\214", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Voulez Vous L'imprimer ?", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "Oui", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "Non", Q_NULLPTR));
        Print->setText(QApplication::translate("MainWindow", "Print", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "QUITTER", Q_NULLPTR));
        recherche->setText(QApplication::translate("MainWindow", "recherche", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "aller a l'espace de suppression", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("MainWindow", "Supression", Q_NULLPTR));
        label_IDs->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Mname", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Email", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Fname", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Lname", Q_NULLPTR));
        Delete->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        lineEdit_usernames->setText(QString());
        lineEdit_username_3->setText(QString());
        lineEdit_username_4->setText(QString());
        lineEdit_username_5->setText(QString());
        lineEdit_username_6->setText(QString());
        lineEdit_IDs->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

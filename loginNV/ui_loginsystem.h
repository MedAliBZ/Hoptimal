/********************************************************************************
** Form generated from reading UI file 'loginsystem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSYSTEM_H
#define UI_LOGINSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginSystem
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *winStack;
    QWidget *Login;
    QFrame *frame_2;
    QLabel *label;
    QLineEdit *usernameBox;
    QLineEdit *passwordBox;
    QPushButton *loginButton;
    QPushButton *regButton;
    QLabel *loginLabel;
    QLabel *label_7;
    QWidget *page_2;
    QFrame *frame_3;
    QLabel *label_2;
    QLineEdit *uBox;
    QLineEdit *pBox;
    QPushButton *completeRegButton;
    QLineEdit *eBox;
    QLineEdit *fBox;
    QLineEdit *mBox;
    QLineEdit *lBox;
    QPushButton *backButton;
    QLabel *regLabel;
    QLabel *rpLabel;
    QPushButton *uplButton;
    QWidget *page;
    QFrame *frame_4;
    QStackedWidget *winStack_2;
    QWidget *Login_2;
    QFrame *frame_6;
    QLabel *label_3;
    QLineEdit *usernameBox_2;
    QLineEdit *passwordBox_2;
    QPushButton *loginButton_2;
    QPushButton *regButton_2;
    QLabel *loginLabel_2;
    QLabel *label_9;
    QWidget *page_7;
    QFrame *frame_10;
    QLabel *label_4;
    QLineEdit *uBox_3;
    QLineEdit *pBox_3;
    QPushButton *completeRegButton_2;
    QLineEdit *eBox_3;
    QLineEdit *fBox_3;
    QLineEdit *mBox_3;
    QLineEdit *lBox_3;
    QPushButton *backButton_3;
    QLabel *regLabel_3;
    QLabel *rpLabel_3;
    QPushButton *uplButton_3;
    QWidget *page_8;
    QFrame *frame_11;
    QLabel *loggedUserHeader;
    QPushButton *logoutButton;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *nameLabel;
    QLabel *rankLabel;
    QPushButton *editButton;
    QPushButton *delButton;
    QLabel *label_11;
    QLabel *emailLabel;
    QFrame *frame_12;
    QLabel *loggedPic;
    QPushButton *adminButton;
    QWidget *page_9;
    QFrame *frame_13;
    QLabel *label_12;
    QLineEdit *uBox_4;
    QLineEdit *pBox_4;
    QPushButton *editedButton_3;
    QLineEdit *eBox_4;
    QLineEdit *fBox_4;
    QLineEdit *mBox_4;
    QLineEdit *lBox_4;
    QPushButton *backButton_4;
    QLabel *regLabel_4;
    QPushButton *uplButton_4;
    QLabel *rpLabel_4;
    QWidget *page_10;
    QFrame *frame_14;
    QLabel *label_13;
    QPushButton *editedButton_4;
    QPushButton *delUButton_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_11;
    QFrame *frame_15;
    QTableView *tableView_3;
    QWidget *page_12;
    QFrame *frame_16;
    QTableView *tableView_4;
    QPushButton *userBrowse_2;
    QPushButton *backButton_6;
    QPushButton *pageButton_2;
    QPushButton *adminBrowse_2;
    QPushButton *delAButton_2;
    QLabel *adminLabel_2;
    QLabel *headLabel_2;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_5;
    QLabel *label_5;
    QLineEdit *uBox_2;
    QLineEdit *pBox_2;
    QPushButton *editedButton;
    QLineEdit *eBox_2;
    QLineEdit *fBox_2;
    QLineEdit *mBox_2;
    QLineEdit *lBox_2;
    QPushButton *backButton_2;
    QLabel *regLabel_2;
    QPushButton *uplButton_2;
    QLabel *rpLabel_2;
    QWidget *page_4;
    QFrame *frame_7;
    QLabel *label_8;
    QPushButton *editedButton_2;
    QPushButton *delUButton;
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QFrame *frame_8;
    QTableView *tableView;
    QFrame *frame;
    QWidget *page_6;
    QFrame *frame_9;
    QTableView *tableView_2;
    QPushButton *userBrowse;
    QPushButton *backButton_5;
    QPushButton *pageButton;
    QPushButton *adminBrowse;
    QPushButton *delAButton;
    QLabel *adminLabel;
    QLabel *headLabel;

    void setupUi(QMainWindow *LoginSystem)
    {
        if (LoginSystem->objectName().isEmpty())
            LoginSystem->setObjectName(QStringLiteral("LoginSystem"));
        LoginSystem->setEnabled(true);
        LoginSystem->resize(774, 479);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0.472, 0, 0.502, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(0, 53, 84, 255));
        gradient.setColorAt(1, QColor(0, 70, 111, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QLinearGradient gradient1(0.472, 0, 0.502, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(0, 53, 84, 255));
        gradient1.setColorAt(1, QColor(0, 70, 111, 255));
        QBrush brush2(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QLinearGradient gradient2(0.472, 0, 0.502, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(0, 53, 84, 255));
        gradient2.setColorAt(1, QColor(0, 70, 111, 255));
        QBrush brush3(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0.472, 0, 0.502, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(0, 53, 84, 255));
        gradient3.setColorAt(1, QColor(0, 70, 111, 255));
        QBrush brush4(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        QLinearGradient gradient4(0.472, 0, 0.502, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(0, 53, 84, 255));
        gradient4.setColorAt(1, QColor(0, 70, 111, 255));
        QBrush brush5(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        QLinearGradient gradient5(0.472, 0, 0.502, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(0, 53, 84, 255));
        gradient5.setColorAt(1, QColor(0, 70, 111, 255));
        QBrush brush6(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        QBrush brush7(QColor(120, 120, 120, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        QLinearGradient gradient6(0.472, 0, 0.502, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(0, 53, 84, 255));
        gradient6.setColorAt(1, QColor(0, 70, 111, 255));
        QBrush brush8(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        QLinearGradient gradient7(0.472, 0, 0.502, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(0, 53, 84, 255));
        gradient7.setColorAt(1, QColor(0, 70, 111, 255));
        QBrush brush9(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        QLinearGradient gradient8(0.472, 0, 0.502, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(0, 53, 84, 255));
        gradient8.setColorAt(1, QColor(0, 70, 111, 255));
        QBrush brush10(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        LoginSystem->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral("grgr.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginSystem->setWindowIcon(icon);
        LoginSystem->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
"background:rgba(0, 100, 52, 100);\n"
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
        centralWidget = new QWidget(LoginSystem);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        winStack = new QStackedWidget(centralWidget);
        winStack->setObjectName(QStringLiteral("winStack"));
        winStack->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
        Login = new QWidget();
        Login->setObjectName(QStringLiteral("Login"));
        frame_2 = new QFrame(Login);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(-10, -20, 771, 401));
        frame_2->setMaximumSize(QSize(16777215, 421));
        frame_2->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 22, 175, 41));
        QFont font;
        font.setFamily(QStringLiteral("Droid Sans"));
        label->setFont(font);
        label->setStyleSheet(QLatin1String("text-align: center;\n"
"color: rgb(255, 255, 255);\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        usernameBox = new QLineEdit(frame_2);
        usernameBox->setObjectName(QStringLiteral("usernameBox"));
        usernameBox->setGeometry(QRect(50, 248, 201, 41));
        QPalette palette1;
        QBrush brush11(QColor(254, 254, 254, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        QBrush brush12(QColor(51, 51, 51, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush13(QColor(254, 254, 254, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush13);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush14(QColor(254, 254, 254, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush15(QColor(254, 254, 254, 128));
        brush15.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush15);
#endif
        usernameBox->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Quicksand SemiBold"));
        font1.setKerning(true);
        usernameBox->setFont(font1);
        usernameBox->setLayoutDirection(Qt::LeftToRight);
        usernameBox->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        usernameBox->setFrame(false);
        usernameBox->setCursorPosition(0);
        passwordBox = new QLineEdit(frame_2);
        passwordBox->setObjectName(QStringLiteral("passwordBox"));
        passwordBox->setGeometry(QRect(50, 300, 201, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush16(QColor(254, 254, 254, 128));
        brush16.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush17(QColor(254, 254, 254, 128));
        brush17.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush17);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush18(QColor(254, 254, 254, 128));
        brush18.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush18);
#endif
        passwordBox->setPalette(palette2);
        passwordBox->setFont(font1);
        passwordBox->setLayoutDirection(Qt::LeftToRight);
        passwordBox->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        passwordBox->setInputMethodHints(Qt::ImhNone);
        passwordBox->setFrame(false);
        passwordBox->setCursorPosition(0);
        loginButton = new QPushButton(frame_2);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(60, 354, 80, 21));
        loginButton->setStyleSheet(QLatin1String("QPushButton\n"
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
        regButton = new QPushButton(frame_2);
        regButton->setObjectName(QStringLiteral("regButton"));
        regButton->setGeometry(QRect(160, 354, 80, 21));
        regButton->setStyleSheet(QLatin1String("QPushButton\n"
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
""));
        loginLabel = new QLabel(frame_2);
        loginLabel->setObjectName(QStringLiteral("loginLabel"));
        loginLabel->setGeometry(QRect(60, 222, 267, 16));
        loginLabel->setStyleSheet(QStringLiteral("color: #fefefe;"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(88, 80, 128, 128));
        label_7->setStyleSheet(QLatin1String("border-radius: 64px;\n"
"background-image: url(:/user.png);"));
        winStack->addWidget(Login);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        frame_3 = new QFrame(page_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 751, 451));
        frame_3->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(258, 24, 223, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("text-align: center;\n"
"color: rgb(255, 255, 255);\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        uBox = new QLineEdit(frame_3);
        uBox->setObjectName(QStringLiteral("uBox"));
        uBox->setGeometry(QRect(70, 160, 201, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush19(QColor(254, 254, 254, 128));
        brush19.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush19);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush20(QColor(254, 254, 254, 128));
        brush20.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush20);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush21(QColor(254, 254, 254, 128));
        brush21.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        uBox->setPalette(palette3);
        uBox->setFont(font1);
        uBox->setLayoutDirection(Qt::LeftToRight);
        uBox->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        uBox->setFrame(false);
        uBox->setCursorPosition(0);
        pBox = new QLineEdit(frame_3);
        pBox->setObjectName(QStringLiteral("pBox"));
        pBox->setGeometry(QRect(70, 220, 201, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush22(QColor(254, 254, 254, 128));
        brush22.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush22);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush23(QColor(254, 254, 254, 128));
        brush23.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush23);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush24(QColor(254, 254, 254, 128));
        brush24.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush24);
#endif
        pBox->setPalette(palette4);
        pBox->setFont(font1);
        pBox->setLayoutDirection(Qt::LeftToRight);
        pBox->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        pBox->setInputMethodHints(Qt::ImhNone);
        pBox->setFrame(false);
        pBox->setCursorPosition(0);
        completeRegButton = new QPushButton(frame_3);
        completeRegButton->setObjectName(QStringLiteral("completeRegButton"));
        completeRegButton->setGeometry(QRect(540, 400, 171, 21));
        completeRegButton->setStyleSheet(QLatin1String("QPushButton\n"
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
        eBox = new QLineEdit(frame_3);
        eBox->setObjectName(QStringLiteral("eBox"));
        eBox->setGeometry(QRect(70, 280, 201, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush25(QColor(254, 254, 254, 128));
        brush25.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush25);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush26(QColor(254, 254, 254, 128));
        brush26.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush26);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush27(QColor(254, 254, 254, 128));
        brush27.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush27);
#endif
        eBox->setPalette(palette5);
        eBox->setFont(font1);
        eBox->setLayoutDirection(Qt::LeftToRight);
        eBox->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        eBox->setInputMethodHints(Qt::ImhNone);
        eBox->setFrame(false);
        eBox->setCursorPosition(0);
        fBox = new QLineEdit(frame_3);
        fBox->setObjectName(QStringLiteral("fBox"));
        fBox->setGeometry(QRect(490, 160, 201, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush28(QColor(254, 254, 254, 128));
        brush28.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush28);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush29(QColor(254, 254, 254, 128));
        brush29.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush29);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush30(QColor(254, 254, 254, 128));
        brush30.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush30);
#endif
        fBox->setPalette(palette6);
        fBox->setFont(font1);
        fBox->setLayoutDirection(Qt::LeftToRight);
        fBox->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        fBox->setInputMethodHints(Qt::ImhNone);
        fBox->setFrame(false);
        fBox->setCursorPosition(0);
        mBox = new QLineEdit(frame_3);
        mBox->setObjectName(QStringLiteral("mBox"));
        mBox->setGeometry(QRect(490, 220, 201, 41));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush31(QColor(254, 254, 254, 128));
        brush31.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush31);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush32(QColor(254, 254, 254, 128));
        brush32.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush32);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush33(QColor(254, 254, 254, 128));
        brush33.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush33);
#endif
        mBox->setPalette(palette7);
        mBox->setFont(font1);
        mBox->setLayoutDirection(Qt::LeftToRight);
        mBox->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        mBox->setInputMethodHints(Qt::ImhNone);
        mBox->setFrame(false);
        mBox->setCursorPosition(0);
        lBox = new QLineEdit(frame_3);
        lBox->setObjectName(QStringLiteral("lBox"));
        lBox->setGeometry(QRect(490, 280, 201, 41));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush34(QColor(254, 254, 254, 128));
        brush34.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush34);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush35(QColor(254, 254, 254, 128));
        brush35.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush35);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush36(QColor(254, 254, 254, 128));
        brush36.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush36);
#endif
        lBox->setPalette(palette8);
        lBox->setFont(font1);
        lBox->setLayoutDirection(Qt::LeftToRight);
        lBox->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        lBox->setInputMethodHints(Qt::ImhNone);
        lBox->setFrame(false);
        lBox->setCursorPosition(0);
        backButton = new QPushButton(frame_3);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(40, 400, 171, 21));
        backButton->setStyleSheet(QLatin1String("QPushButton\n"
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
""));
        regLabel = new QLabel(frame_3);
        regLabel->setObjectName(QStringLiteral("regLabel"));
        regLabel->setGeometry(QRect(60, 110, 601, 16));
        regLabel->setStyleSheet(QStringLiteral("color: #fefefe;"));
        rpLabel = new QLabel(frame_3);
        rpLabel->setObjectName(QStringLiteral("rpLabel"));
        rpLabel->setGeometry(QRect(316, 148, 128, 128));
        rpLabel->setStyleSheet(QStringLiteral("color: #fefefe;"));
        uplButton = new QPushButton(frame_3);
        uplButton->setObjectName(QStringLiteral("uplButton"));
        uplButton->setGeometry(QRect(298, 294, 171, 21));
        uplButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        winStack->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        frame_4 = new QFrame(page);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(-20, 10, 750, 450));
        frame_4->setMinimumSize(QSize(750, 450));
        frame_4->setMaximumSize(QSize(750, 450));
        frame_4->setBaseSize(QSize(750, 450));
        frame_4->setAutoFillBackground(false);
        frame_4->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        winStack_2 = new QStackedWidget(page);
        winStack_2->setObjectName(QStringLiteral("winStack_2"));
        winStack_2->setGeometry(QRect(10, -20, 821, 651));
        winStack_2->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
        Login_2 = new QWidget();
        Login_2->setObjectName(QStringLiteral("Login_2"));
        frame_6 = new QFrame(Login_2);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setGeometry(QRect(-30, -10, 791, 421));
        frame_6->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 22, 175, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        usernameBox_2 = new QLineEdit(frame_6);
        usernameBox_2->setObjectName(QStringLiteral("usernameBox_2"));
        usernameBox_2->setGeometry(QRect(50, 248, 201, 41));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush37(QColor(254, 254, 254, 128));
        brush37.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush37);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush38(QColor(254, 254, 254, 128));
        brush38.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush38);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush39(QColor(254, 254, 254, 128));
        brush39.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush39);
#endif
        usernameBox_2->setPalette(palette9);
        usernameBox_2->setFont(font1);
        usernameBox_2->setLayoutDirection(Qt::LeftToRight);
        usernameBox_2->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        usernameBox_2->setFrame(false);
        usernameBox_2->setCursorPosition(0);
        passwordBox_2 = new QLineEdit(frame_6);
        passwordBox_2->setObjectName(QStringLiteral("passwordBox_2"));
        passwordBox_2->setGeometry(QRect(50, 300, 201, 41));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush40(QColor(254, 254, 254, 128));
        brush40.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush40);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush41(QColor(254, 254, 254, 128));
        brush41.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush41);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush42(QColor(254, 254, 254, 128));
        brush42.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush42);
#endif
        passwordBox_2->setPalette(palette10);
        passwordBox_2->setFont(font1);
        passwordBox_2->setLayoutDirection(Qt::LeftToRight);
        passwordBox_2->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        passwordBox_2->setInputMethodHints(Qt::ImhNone);
        passwordBox_2->setFrame(false);
        passwordBox_2->setCursorPosition(0);
        loginButton_2 = new QPushButton(frame_6);
        loginButton_2->setObjectName(QStringLiteral("loginButton_2"));
        loginButton_2->setGeometry(QRect(60, 354, 80, 21));
        loginButton_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        regButton_2 = new QPushButton(frame_6);
        regButton_2->setObjectName(QStringLiteral("regButton_2"));
        regButton_2->setGeometry(QRect(160, 354, 80, 21));
        regButton_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        loginLabel_2 = new QLabel(frame_6);
        loginLabel_2->setObjectName(QStringLiteral("loginLabel_2"));
        loginLabel_2->setGeometry(QRect(60, 222, 267, 16));
        loginLabel_2->setStyleSheet(QStringLiteral("color: #fefefe;"));
        label_9 = new QLabel(frame_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(88, 80, 128, 128));
        label_9->setStyleSheet(QLatin1String("border-radius: 64px;\n"
"background-image: url(:/user.png);"));
        winStack_2->addWidget(Login_2);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        frame_10 = new QFrame(page_7);
        frame_10->setObjectName(QStringLiteral("frame_10"));
        frame_10->setGeometry(QRect(0, 0, 751, 451));
        frame_10->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_10);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(258, 24, 223, 41));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        uBox_3 = new QLineEdit(frame_10);
        uBox_3->setObjectName(QStringLiteral("uBox_3"));
        uBox_3->setGeometry(QRect(70, 160, 201, 41));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush43(QColor(254, 254, 254, 128));
        brush43.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush43);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush44(QColor(254, 254, 254, 128));
        brush44.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush44);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush45(QColor(254, 254, 254, 128));
        brush45.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush45);
#endif
        uBox_3->setPalette(palette11);
        uBox_3->setFont(font1);
        uBox_3->setLayoutDirection(Qt::LeftToRight);
        uBox_3->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        uBox_3->setFrame(false);
        uBox_3->setCursorPosition(0);
        pBox_3 = new QLineEdit(frame_10);
        pBox_3->setObjectName(QStringLiteral("pBox_3"));
        pBox_3->setGeometry(QRect(70, 220, 201, 41));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush46(QColor(254, 254, 254, 128));
        brush46.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush46);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush47(QColor(254, 254, 254, 128));
        brush47.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush47);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush48(QColor(254, 254, 254, 128));
        brush48.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush48);
#endif
        pBox_3->setPalette(palette12);
        pBox_3->setFont(font1);
        pBox_3->setLayoutDirection(Qt::LeftToRight);
        pBox_3->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        pBox_3->setInputMethodHints(Qt::ImhNone);
        pBox_3->setFrame(false);
        pBox_3->setCursorPosition(0);
        completeRegButton_2 = new QPushButton(frame_10);
        completeRegButton_2->setObjectName(QStringLiteral("completeRegButton_2"));
        completeRegButton_2->setGeometry(QRect(540, 400, 171, 21));
        completeRegButton_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        eBox_3 = new QLineEdit(frame_10);
        eBox_3->setObjectName(QStringLiteral("eBox_3"));
        eBox_3->setGeometry(QRect(70, 280, 201, 41));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush49(QColor(254, 254, 254, 128));
        brush49.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush49);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush50(QColor(254, 254, 254, 128));
        brush50.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush50);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush51(QColor(254, 254, 254, 128));
        brush51.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush51);
#endif
        eBox_3->setPalette(palette13);
        eBox_3->setFont(font1);
        eBox_3->setLayoutDirection(Qt::LeftToRight);
        eBox_3->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        eBox_3->setInputMethodHints(Qt::ImhNone);
        eBox_3->setFrame(false);
        eBox_3->setCursorPosition(0);
        fBox_3 = new QLineEdit(frame_10);
        fBox_3->setObjectName(QStringLiteral("fBox_3"));
        fBox_3->setGeometry(QRect(490, 160, 201, 41));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush52(QColor(254, 254, 254, 128));
        brush52.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush52);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush53(QColor(254, 254, 254, 128));
        brush53.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush53);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush54(QColor(254, 254, 254, 128));
        brush54.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush54);
#endif
        fBox_3->setPalette(palette14);
        fBox_3->setFont(font1);
        fBox_3->setLayoutDirection(Qt::LeftToRight);
        fBox_3->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        fBox_3->setInputMethodHints(Qt::ImhNone);
        fBox_3->setFrame(false);
        fBox_3->setCursorPosition(0);
        mBox_3 = new QLineEdit(frame_10);
        mBox_3->setObjectName(QStringLiteral("mBox_3"));
        mBox_3->setGeometry(QRect(490, 220, 201, 41));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush55(QColor(254, 254, 254, 128));
        brush55.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush55);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush56(QColor(254, 254, 254, 128));
        brush56.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush56);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush57(QColor(254, 254, 254, 128));
        brush57.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush57);
#endif
        mBox_3->setPalette(palette15);
        mBox_3->setFont(font1);
        mBox_3->setLayoutDirection(Qt::LeftToRight);
        mBox_3->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        mBox_3->setInputMethodHints(Qt::ImhNone);
        mBox_3->setFrame(false);
        mBox_3->setCursorPosition(0);
        lBox_3 = new QLineEdit(frame_10);
        lBox_3->setObjectName(QStringLiteral("lBox_3"));
        lBox_3->setGeometry(QRect(490, 280, 201, 41));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush58(QColor(254, 254, 254, 128));
        brush58.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush58);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush59(QColor(254, 254, 254, 128));
        brush59.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush59);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush60(QColor(254, 254, 254, 128));
        brush60.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush60);
#endif
        lBox_3->setPalette(palette16);
        lBox_3->setFont(font1);
        lBox_3->setLayoutDirection(Qt::LeftToRight);
        lBox_3->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        lBox_3->setInputMethodHints(Qt::ImhNone);
        lBox_3->setFrame(false);
        lBox_3->setCursorPosition(0);
        backButton_3 = new QPushButton(frame_10);
        backButton_3->setObjectName(QStringLiteral("backButton_3"));
        backButton_3->setGeometry(QRect(40, 400, 171, 21));
        backButton_3->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        regLabel_3 = new QLabel(frame_10);
        regLabel_3->setObjectName(QStringLiteral("regLabel_3"));
        regLabel_3->setGeometry(QRect(60, 110, 601, 16));
        regLabel_3->setStyleSheet(QStringLiteral("color: #fefefe;"));
        rpLabel_3 = new QLabel(frame_10);
        rpLabel_3->setObjectName(QStringLiteral("rpLabel_3"));
        rpLabel_3->setGeometry(QRect(316, 148, 128, 128));
        rpLabel_3->setStyleSheet(QStringLiteral("color: #fefefe;"));
        uplButton_3 = new QPushButton(frame_10);
        uplButton_3->setObjectName(QStringLiteral("uplButton_3"));
        uplButton_3->setGeometry(QRect(298, 294, 171, 21));
        uplButton_3->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        winStack_2->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        frame_11 = new QFrame(page_8);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setGeometry(QRect(-20, 20, 769, 411));
        frame_11->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        loggedUserHeader = new QLabel(frame_11);
        loggedUserHeader->setObjectName(QStringLiteral("loggedUserHeader"));
        loggedUserHeader->setGeometry(QRect(290, 10, 245, 41));
        loggedUserHeader->setFont(font);
        loggedUserHeader->setStyleSheet(QLatin1String("text-align: center;\n"
"color: rgb(255, 255, 255);\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        logoutButton = new QPushButton(frame_11);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        logoutButton->setGeometry(QRect(570, 150, 151, 21));
        logoutButton->setStyleSheet(QLatin1String("QPushButton\n"
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
""));
        label_6 = new QLabel(frame_11);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 240, 81, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Quicksand SemiBold"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        label_6->setStyleSheet(QLatin1String("color: #c33;\n"
"font-weight: bold;"));
        label_10 = new QLabel(frame_11);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 280, 61, 16));
        label_10->setFont(font2);
        label_10->setStyleSheet(QLatin1String("color: #c33;\n"
"font-weight: bold;"));
        nameLabel = new QLabel(frame_11);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(140, 240, 241, 21));
        nameLabel->setStyleSheet(QStringLiteral("color: #fefefe;"));
        rankLabel = new QLabel(frame_11);
        rankLabel->setObjectName(QStringLiteral("rankLabel"));
        rankLabel->setGeometry(QRect(140, 280, 201, 16));
        rankLabel->setStyleSheet(QStringLiteral("color: #fefefe;"));
        editButton = new QPushButton(frame_11);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setGeometry(QRect(570, 180, 151, 21));
        editButton->setStyleSheet(QLatin1String("QPushButton\n"
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
        delButton = new QPushButton(frame_11);
        delButton->setObjectName(QStringLiteral("delButton"));
        delButton->setGeometry(QRect(570, 212, 151, 21));
        delButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #aaa;\n"
"Color: #101010;"));
        label_11 = new QLabel(frame_11);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 320, 81, 16));
        label_11->setFont(font2);
        label_11->setStyleSheet(QLatin1String("color: #c33;\n"
"font-weight: bold;"));
        emailLabel = new QLabel(frame_11);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));
        emailLabel->setGeometry(QRect(140, 320, 201, 16));
        emailLabel->setStyleSheet(QStringLiteral("color: #fefefe;"));
        frame_12 = new QFrame(frame_11);
        frame_12->setObjectName(QStringLiteral("frame_12"));
        frame_12->setGeometry(QRect(120, 92, 128, 128));
        frame_12->setStyleSheet(QStringLiteral(""));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        loggedPic = new QLabel(frame_12);
        loggedPic->setObjectName(QStringLiteral("loggedPic"));
        loggedPic->setGeometry(QRect(0, 0, 128, 128));
        loggedPic->setStyleSheet(QStringLiteral(""));
        adminButton = new QPushButton(frame_11);
        adminButton->setObjectName(QStringLiteral("adminButton"));
        adminButton->setGeometry(QRect(570, 118, 151, 21));
        adminButton->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        label_10->raise();
        label_11->raise();
        frame_12->raise();
        loggedUserHeader->raise();
        logoutButton->raise();
        nameLabel->raise();
        rankLabel->raise();
        editButton->raise();
        delButton->raise();
        label_6->raise();
        emailLabel->raise();
        adminButton->raise();
        winStack_2->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        frame_13 = new QFrame(page_9);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setGeometry(QRect(0, 60, 671, 391));
        frame_13->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        label_12 = new QLabel(frame_13);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(238, 20, 273, 41));
        label_12->setFont(font);
        label_12->setStyleSheet(QLatin1String("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        uBox_4 = new QLineEdit(frame_13);
        uBox_4->setObjectName(QStringLiteral("uBox_4"));
        uBox_4->setGeometry(QRect(70, 160, 201, 41));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush61(QColor(254, 254, 254, 128));
        brush61.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush61);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush62(QColor(254, 254, 254, 128));
        brush62.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush62);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush63(QColor(254, 254, 254, 128));
        brush63.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush63);
#endif
        uBox_4->setPalette(palette17);
        uBox_4->setFont(font1);
        uBox_4->setLayoutDirection(Qt::LeftToRight);
        uBox_4->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        uBox_4->setFrame(false);
        uBox_4->setCursorPosition(0);
        pBox_4 = new QLineEdit(frame_13);
        pBox_4->setObjectName(QStringLiteral("pBox_4"));
        pBox_4->setGeometry(QRect(70, 220, 201, 41));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush64(QColor(254, 254, 254, 128));
        brush64.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush64);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush65(QColor(254, 254, 254, 128));
        brush65.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush65);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush66(QColor(254, 254, 254, 128));
        brush66.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush66);
#endif
        pBox_4->setPalette(palette18);
        pBox_4->setFont(font1);
        pBox_4->setLayoutDirection(Qt::LeftToRight);
        pBox_4->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        pBox_4->setInputMethodHints(Qt::ImhNone);
        pBox_4->setFrame(false);
        pBox_4->setCursorPosition(0);
        editedButton_3 = new QPushButton(frame_13);
        editedButton_3->setObjectName(QStringLiteral("editedButton_3"));
        editedButton_3->setGeometry(QRect(540, 400, 171, 21));
        editedButton_3->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        eBox_4 = new QLineEdit(frame_13);
        eBox_4->setObjectName(QStringLiteral("eBox_4"));
        eBox_4->setGeometry(QRect(70, 280, 201, 41));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush67(QColor(254, 254, 254, 128));
        brush67.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush67);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush68(QColor(254, 254, 254, 128));
        brush68.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush68);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush69(QColor(254, 254, 254, 128));
        brush69.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush69);
#endif
        eBox_4->setPalette(palette19);
        eBox_4->setFont(font1);
        eBox_4->setLayoutDirection(Qt::LeftToRight);
        eBox_4->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        eBox_4->setInputMethodHints(Qt::ImhNone);
        eBox_4->setFrame(false);
        eBox_4->setCursorPosition(0);
        fBox_4 = new QLineEdit(frame_13);
        fBox_4->setObjectName(QStringLiteral("fBox_4"));
        fBox_4->setGeometry(QRect(490, 160, 201, 41));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush70(QColor(254, 254, 254, 128));
        brush70.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush70);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush71(QColor(254, 254, 254, 128));
        brush71.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush71);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush72(QColor(254, 254, 254, 128));
        brush72.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush72);
#endif
        fBox_4->setPalette(palette20);
        fBox_4->setFont(font1);
        fBox_4->setLayoutDirection(Qt::LeftToRight);
        fBox_4->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        fBox_4->setInputMethodHints(Qt::ImhNone);
        fBox_4->setFrame(false);
        fBox_4->setCursorPosition(0);
        mBox_4 = new QLineEdit(frame_13);
        mBox_4->setObjectName(QStringLiteral("mBox_4"));
        mBox_4->setGeometry(QRect(490, 220, 201, 41));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush73(QColor(254, 254, 254, 128));
        brush73.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush73);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush74(QColor(254, 254, 254, 128));
        brush74.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush74);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush75(QColor(254, 254, 254, 128));
        brush75.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush75);
#endif
        mBox_4->setPalette(palette21);
        mBox_4->setFont(font1);
        mBox_4->setLayoutDirection(Qt::LeftToRight);
        mBox_4->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        mBox_4->setInputMethodHints(Qt::ImhNone);
        mBox_4->setFrame(false);
        mBox_4->setCursorPosition(0);
        lBox_4 = new QLineEdit(frame_13);
        lBox_4->setObjectName(QStringLiteral("lBox_4"));
        lBox_4->setGeometry(QRect(490, 280, 201, 41));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush76(QColor(254, 254, 254, 128));
        brush76.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush76);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush77(QColor(254, 254, 254, 128));
        brush77.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush77);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush78(QColor(254, 254, 254, 128));
        brush78.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush78);
#endif
        lBox_4->setPalette(palette22);
        lBox_4->setFont(font1);
        lBox_4->setLayoutDirection(Qt::LeftToRight);
        lBox_4->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        lBox_4->setInputMethodHints(Qt::ImhNone);
        lBox_4->setFrame(false);
        lBox_4->setCursorPosition(0);
        backButton_4 = new QPushButton(frame_13);
        backButton_4->setObjectName(QStringLiteral("backButton_4"));
        backButton_4->setGeometry(QRect(40, 400, 171, 21));
        backButton_4->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #933;\n"
"Color: #fefefe;"));
        regLabel_4 = new QLabel(frame_13);
        regLabel_4->setObjectName(QStringLiteral("regLabel_4"));
        regLabel_4->setGeometry(QRect(60, 110, 601, 16));
        regLabel_4->setStyleSheet(QStringLiteral("color: #fefefe;"));
        uplButton_4 = new QPushButton(frame_13);
        uplButton_4->setObjectName(QStringLiteral("uplButton_4"));
        uplButton_4->setGeometry(QRect(294, 292, 171, 21));
        uplButton_4->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        rpLabel_4 = new QLabel(frame_13);
        rpLabel_4->setObjectName(QStringLiteral("rpLabel_4"));
        rpLabel_4->setGeometry(QRect(312, 146, 128, 128));
        rpLabel_4->setStyleSheet(QStringLiteral("color: #fefefe;"));
        winStack_2->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        frame_14 = new QFrame(page_10);
        frame_14->setObjectName(QStringLiteral("frame_14"));
        frame_14->setGeometry(QRect(0, 0, 751, 451));
        frame_14->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        label_13 = new QLabel(frame_14);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(234, 20, 291, 41));
        label_13->setFont(font);
        label_13->setStyleSheet(QLatin1String("text-align: center;\n"
"color: #393;\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        editedButton_4 = new QPushButton(frame_14);
        editedButton_4->setObjectName(QStringLiteral("editedButton_4"));
        editedButton_4->setGeometry(QRect(558, 410, 171, 21));
        editedButton_4->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        delUButton_2 = new QPushButton(frame_14);
        delUButton_2->setObjectName(QStringLiteral("delUButton_2"));
        delUButton_2->setGeometry(QRect(22, 410, 171, 21));
        delUButton_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #a11;\n"
"Color: #fefefe;"));
        stackedWidget_2 = new QStackedWidget(frame_14);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(182, 122, 535, 251));
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        frame_15 = new QFrame(page_11);
        frame_15->setObjectName(QStringLiteral("frame_15"));
        frame_15->setGeometry(QRect(0, 0, 535, 303));
        frame_15->setStyleSheet(QStringLiteral("background: #fefefe;"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        tableView_3 = new QTableView(frame_15);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(0, 0, 535, 305));
        stackedWidget_2->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        frame_16 = new QFrame(page_12);
        frame_16->setObjectName(QStringLiteral("frame_16"));
        frame_16->setGeometry(QRect(0, 0, 535, 303));
        frame_16->setStyleSheet(QStringLiteral("background: #fefefe;"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        tableView_4 = new QTableView(frame_16);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setGeometry(QRect(0, -2, 535, 305));
        stackedWidget_2->addWidget(page_12);
        userBrowse_2 = new QPushButton(frame_14);
        userBrowse_2->setObjectName(QStringLiteral("userBrowse_2"));
        userBrowse_2->setGeometry(QRect(18, 166, 155, 27));
        userBrowse_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        backButton_6 = new QPushButton(frame_14);
        backButton_6->setObjectName(QStringLiteral("backButton_6"));
        backButton_6->setGeometry(QRect(380, 410, 171, 21));
        backButton_6->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        pageButton_2 = new QPushButton(frame_14);
        pageButton_2->setObjectName(QStringLiteral("pageButton_2"));
        pageButton_2->setGeometry(QRect(18, 246, 155, 27));
        pageButton_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        adminBrowse_2 = new QPushButton(frame_14);
        adminBrowse_2->setObjectName(QStringLiteral("adminBrowse_2"));
        adminBrowse_2->setGeometry(QRect(18, 206, 155, 27));
        adminBrowse_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 0;\n"
"Background: #393;\n"
"Color: #fefefe;"));
        delAButton_2 = new QPushButton(frame_14);
        delAButton_2->setObjectName(QStringLiteral("delAButton_2"));
        delAButton_2->setGeometry(QRect(202, 410, 171, 21));
        delAButton_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #a11;\n"
"Color: #fefefe;"));
        adminLabel_2 = new QLabel(frame_14);
        adminLabel_2->setObjectName(QStringLiteral("adminLabel_2"));
        adminLabel_2->setGeometry(QRect(50, 386, 649, 16));
        adminLabel_2->setStyleSheet(QStringLiteral("color: #fefefe;"));
        headLabel_2 = new QLabel(frame_14);
        headLabel_2->setObjectName(QStringLiteral("headLabel_2"));
        headLabel_2->setGeometry(QRect(190, 100, 479, 16));
        headLabel_2->setStyleSheet(QStringLiteral("color: #fefefe;"));
        winStack_2->addWidget(page_10);
        winStack->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout_2 = new QHBoxLayout(page_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        frame_5 = new QFrame(page_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(230, 0, 273, 41));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("text-align: center;\n"
"color: rgb(255, 255, 255);\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        uBox_2 = new QLineEdit(frame_5);
        uBox_2->setObjectName(QStringLiteral("uBox_2"));
        uBox_2->setGeometry(QRect(70, 160, 201, 41));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush79(QColor(254, 254, 254, 128));
        brush79.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush79);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush80(QColor(254, 254, 254, 128));
        brush80.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush80);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush81(QColor(254, 254, 254, 128));
        brush81.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush81);
#endif
        uBox_2->setPalette(palette23);
        uBox_2->setFont(font1);
        uBox_2->setLayoutDirection(Qt::LeftToRight);
        uBox_2->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        uBox_2->setFrame(false);
        uBox_2->setCursorPosition(0);
        pBox_2 = new QLineEdit(frame_5);
        pBox_2->setObjectName(QStringLiteral("pBox_2"));
        pBox_2->setGeometry(QRect(70, 220, 201, 41));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush82(QColor(254, 254, 254, 128));
        brush82.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Active, QPalette::PlaceholderText, brush82);
#endif
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush83(QColor(254, 254, 254, 128));
        brush83.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush83);
#endif
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush84(QColor(254, 254, 254, 128));
        brush84.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush84);
#endif
        pBox_2->setPalette(palette24);
        pBox_2->setFont(font1);
        pBox_2->setLayoutDirection(Qt::LeftToRight);
        pBox_2->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        pBox_2->setInputMethodHints(Qt::ImhNone);
        pBox_2->setFrame(false);
        pBox_2->setCursorPosition(0);
        editedButton = new QPushButton(frame_5);
        editedButton->setObjectName(QStringLiteral("editedButton"));
        editedButton->setGeometry(QRect(570, 400, 171, 21));
        editedButton->setStyleSheet(QLatin1String("QPushButton\n"
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
        eBox_2 = new QLineEdit(frame_5);
        eBox_2->setObjectName(QStringLiteral("eBox_2"));
        eBox_2->setGeometry(QRect(70, 280, 201, 41));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush85(QColor(254, 254, 254, 128));
        brush85.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Active, QPalette::PlaceholderText, brush85);
#endif
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush86(QColor(254, 254, 254, 128));
        brush86.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush86);
#endif
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush87(QColor(254, 254, 254, 128));
        brush87.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush87);
#endif
        eBox_2->setPalette(palette25);
        eBox_2->setFont(font1);
        eBox_2->setLayoutDirection(Qt::LeftToRight);
        eBox_2->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        eBox_2->setInputMethodHints(Qt::ImhNone);
        eBox_2->setFrame(false);
        eBox_2->setCursorPosition(0);
        fBox_2 = new QLineEdit(frame_5);
        fBox_2->setObjectName(QStringLiteral("fBox_2"));
        fBox_2->setGeometry(QRect(490, 160, 201, 41));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush88(QColor(254, 254, 254, 128));
        brush88.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Active, QPalette::PlaceholderText, brush88);
#endif
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush89(QColor(254, 254, 254, 128));
        brush89.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush89);
#endif
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush90(QColor(254, 254, 254, 128));
        brush90.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush90);
#endif
        fBox_2->setPalette(palette26);
        fBox_2->setFont(font1);
        fBox_2->setLayoutDirection(Qt::LeftToRight);
        fBox_2->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        fBox_2->setInputMethodHints(Qt::ImhNone);
        fBox_2->setFrame(false);
        fBox_2->setCursorPosition(0);
        mBox_2 = new QLineEdit(frame_5);
        mBox_2->setObjectName(QStringLiteral("mBox_2"));
        mBox_2->setGeometry(QRect(490, 220, 201, 41));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush91(QColor(254, 254, 254, 128));
        brush91.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Active, QPalette::PlaceholderText, brush91);
#endif
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush92(QColor(254, 254, 254, 128));
        brush92.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush92);
#endif
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush93(QColor(254, 254, 254, 128));
        brush93.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush93);
#endif
        mBox_2->setPalette(palette27);
        mBox_2->setFont(font1);
        mBox_2->setLayoutDirection(Qt::LeftToRight);
        mBox_2->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        mBox_2->setInputMethodHints(Qt::ImhNone);
        mBox_2->setFrame(false);
        mBox_2->setCursorPosition(0);
        lBox_2 = new QLineEdit(frame_5);
        lBox_2->setObjectName(QStringLiteral("lBox_2"));
        lBox_2->setGeometry(QRect(490, 280, 201, 41));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush12);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush12);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush12);
        QBrush brush94(QColor(254, 254, 254, 128));
        brush94.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Active, QPalette::PlaceholderText, brush94);
#endif
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush12);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush12);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush12);
        QBrush brush95(QColor(254, 254, 254, 128));
        brush95.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush95);
#endif
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush12);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush12);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush12);
        QBrush brush96(QColor(254, 254, 254, 128));
        brush96.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush96);
#endif
        lBox_2->setPalette(palette28);
        lBox_2->setFont(font1);
        lBox_2->setLayoutDirection(Qt::LeftToRight);
        lBox_2->setStyleSheet(QLatin1String("padding-left: 20px;\n"
"padding-right: 20px;\n"
"border-radius: 20px;\n"
"background: #333;\n"
"color: #fefefe;"));
        lBox_2->setInputMethodHints(Qt::ImhNone);
        lBox_2->setFrame(false);
        lBox_2->setCursorPosition(0);
        backButton_2 = new QPushButton(frame_5);
        backButton_2->setObjectName(QStringLiteral("backButton_2"));
        backButton_2->setGeometry(QRect(40, 400, 171, 21));
        backButton_2->setStyleSheet(QLatin1String("QPushButton\n"
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
""));
        regLabel_2 = new QLabel(frame_5);
        regLabel_2->setObjectName(QStringLiteral("regLabel_2"));
        regLabel_2->setGeometry(QRect(60, 110, 601, 16));
        regLabel_2->setStyleSheet(QStringLiteral("color: #fefefe;"));
        uplButton_2 = new QPushButton(frame_5);
        uplButton_2->setObjectName(QStringLiteral("uplButton_2"));
        uplButton_2->setGeometry(QRect(294, 292, 171, 21));
        uplButton_2->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        rpLabel_2 = new QLabel(frame_5);
        rpLabel_2->setObjectName(QStringLiteral("rpLabel_2"));
        rpLabel_2->setGeometry(QRect(312, 146, 128, 128));
        rpLabel_2->setStyleSheet(QStringLiteral("color: #fefefe;"));
        label_5->raise();
        uBox_2->raise();
        pBox_2->raise();
        eBox_2->raise();
        fBox_2->raise();
        mBox_2->raise();
        lBox_2->raise();
        backButton_2->raise();
        regLabel_2->raise();
        editedButton->raise();
        uplButton_2->raise();
        rpLabel_2->raise();

        horizontalLayout_2->addWidget(frame_5);

        winStack->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        frame_7 = new QFrame(page_4);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setGeometry(QRect(0, 0, 751, 451));
        frame_7->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
"	background-color: rgb(255, 255, 0);\n"
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
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_7);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(234, 20, 291, 41));
        label_8->setFont(font);
        label_8->setStyleSheet(QLatin1String("text-align: center;\n"
"color: rgb(255, 255, 255);\n"
"margin: 0 auto;\n"
"font-size: 35px;\n"
"font-family: 'Droid Sans';"));
        editedButton_2 = new QPushButton(frame_7);
        editedButton_2->setObjectName(QStringLiteral("editedButton_2"));
        editedButton_2->setGeometry(QRect(558, 410, 171, 21));
        editedButton_2->setStyleSheet(QLatin1String("QPushButton\n"
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
        delUButton = new QPushButton(frame_7);
        delUButton->setObjectName(QStringLiteral("delUButton"));
        delUButton->setGeometry(QRect(22, 410, 171, 21));
        delUButton->setStyleSheet(QLatin1String("QPushButton\n"
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
""));
        stackedWidget = new QStackedWidget(frame_7);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(182, 122, 535, 251));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        frame_8 = new QFrame(page_5);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(0, 0, 535, 303));
        frame_8->setStyleSheet(QStringLiteral("background: #fefefe;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        tableView = new QTableView(frame_8);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 535, 305));
        frame = new QFrame(frame_8);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-200, -90, 750, 450));
        frame->setMinimumSize(QSize(750, 450));
        frame->setMaximumSize(QSize(750, 450));
        frame->setBaseSize(QSize(750, 450));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QLatin1String("QMainWindow,QWidget,QMessageBox{\n"
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
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        frame_9 = new QFrame(page_6);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        frame_9->setGeometry(QRect(0, 0, 535, 303));
        frame_9->setStyleSheet(QStringLiteral("background: #fefefe;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        tableView_2 = new QTableView(frame_9);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(0, -2, 535, 305));
        stackedWidget->addWidget(page_6);
        userBrowse = new QPushButton(frame_7);
        userBrowse->setObjectName(QStringLiteral("userBrowse"));
        userBrowse->setGeometry(QRect(18, 166, 155, 27));
        userBrowse->setStyleSheet(QLatin1String("QPushButton\n"
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
        backButton_5 = new QPushButton(frame_7);
        backButton_5->setObjectName(QStringLiteral("backButton_5"));
        backButton_5->setGeometry(QRect(380, 410, 171, 21));
        backButton_5->setStyleSheet(QLatin1String("Padding: 1px;\n"
"Border-radius: 5px;\n"
"Background: #339;\n"
"Color: #fefefe;"));
        pageButton = new QPushButton(frame_7);
        pageButton->setObjectName(QStringLiteral("pageButton"));
        pageButton->setGeometry(QRect(18, 246, 155, 27));
        pageButton->setStyleSheet(QLatin1String("QPushButton\n"
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
        adminBrowse = new QPushButton(frame_7);
        adminBrowse->setObjectName(QStringLiteral("adminBrowse"));
        adminBrowse->setGeometry(QRect(18, 206, 155, 27));
        adminBrowse->setStyleSheet(QLatin1String("QPushButton\n"
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
        delAButton = new QPushButton(frame_7);
        delAButton->setObjectName(QStringLiteral("delAButton"));
        delAButton->setGeometry(QRect(202, 410, 171, 21));
        delAButton->setStyleSheet(QLatin1String("QPushButton\n"
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
""));
        adminLabel = new QLabel(frame_7);
        adminLabel->setObjectName(QStringLiteral("adminLabel"));
        adminLabel->setGeometry(QRect(50, 386, 649, 16));
        adminLabel->setStyleSheet(QStringLiteral("color: #fefefe;"));
        headLabel = new QLabel(frame_7);
        headLabel->setObjectName(QStringLiteral("headLabel"));
        headLabel->setGeometry(QRect(190, 100, 479, 16));
        headLabel->setStyleSheet(QStringLiteral("color: #fefefe;"));
        winStack->addWidget(page_4);

        verticalLayout->addWidget(winStack);

        LoginSystem->setCentralWidget(centralWidget);

        retranslateUi(LoginSystem);

        winStack->setCurrentIndex(3);
        winStack_2->setCurrentIndex(2);
        stackedWidget_2->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoginSystem);
    } // setupUi

    void retranslateUi(QMainWindow *LoginSystem)
    {
        LoginSystem->setWindowTitle(QApplication::translate("LoginSystem", "Login System 1.0", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        LoginSystem->setWhatsThis(QApplication::translate("LoginSystem", "QMainWindow,QWidget,QMessageBox{\n"
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
"background:rgba(0, 100, 52, 100);\n"
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
"}", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("LoginSystem", "Login", Q_NULLPTR));
        usernameBox->setText(QString());
        usernameBox->setPlaceholderText(QApplication::translate("LoginSystem", "Username", Q_NULLPTR));
        passwordBox->setInputMask(QString());
        passwordBox->setText(QString());
        passwordBox->setPlaceholderText(QApplication::translate("LoginSystem", "Password", Q_NULLPTR));
        loginButton->setText(QApplication::translate("LoginSystem", "SIGN IN", Q_NULLPTR));
        regButton->setText(QApplication::translate("LoginSystem", "SIGN UP", Q_NULLPTR));
        loginLabel->setText(QString());
        label_7->setText(QString());
        label_2->setText(QApplication::translate("LoginSystem", "Register", Q_NULLPTR));
        uBox->setText(QString());
        uBox->setPlaceholderText(QApplication::translate("LoginSystem", "Username", Q_NULLPTR));
        pBox->setInputMask(QString());
        pBox->setText(QString());
        pBox->setPlaceholderText(QApplication::translate("LoginSystem", "Password", Q_NULLPTR));
        completeRegButton->setText(QApplication::translate("LoginSystem", "COMPLETE REGISTRATION", Q_NULLPTR));
        eBox->setInputMask(QString());
        eBox->setText(QString());
        eBox->setPlaceholderText(QApplication::translate("LoginSystem", "E-mail", Q_NULLPTR));
        fBox->setInputMask(QString());
        fBox->setText(QString());
        fBox->setPlaceholderText(QApplication::translate("LoginSystem", "First Name", Q_NULLPTR));
        mBox->setInputMask(QString());
        mBox->setText(QString());
        mBox->setPlaceholderText(QApplication::translate("LoginSystem", "Middle Name", Q_NULLPTR));
        lBox->setInputMask(QString());
        lBox->setText(QString());
        lBox->setPlaceholderText(QApplication::translate("LoginSystem", "Last Name", Q_NULLPTR));
        backButton->setText(QApplication::translate("LoginSystem", "BACK TO LOGIN PAGE", Q_NULLPTR));
        regLabel->setText(QApplication::translate("LoginSystem", "Please fill the form correctly.", Q_NULLPTR));
        rpLabel->setText(QApplication::translate("LoginSystem", "<img src=\":user.png\" />", Q_NULLPTR));
        uplButton->setText(QApplication::translate("LoginSystem", "UPLOAD PICTURE", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginSystem", "Login", Q_NULLPTR));
        usernameBox_2->setText(QString());
        usernameBox_2->setPlaceholderText(QApplication::translate("LoginSystem", "Username", Q_NULLPTR));
        passwordBox_2->setInputMask(QString());
        passwordBox_2->setText(QString());
        passwordBox_2->setPlaceholderText(QApplication::translate("LoginSystem", "Password", Q_NULLPTR));
        loginButton_2->setText(QApplication::translate("LoginSystem", "SIGN IN", Q_NULLPTR));
        regButton_2->setText(QApplication::translate("LoginSystem", "SIGN UP", Q_NULLPTR));
        loginLabel_2->setText(QString());
        label_9->setText(QString());
        label_4->setText(QApplication::translate("LoginSystem", "Register", Q_NULLPTR));
        uBox_3->setText(QString());
        uBox_3->setPlaceholderText(QApplication::translate("LoginSystem", "Username", Q_NULLPTR));
        pBox_3->setInputMask(QString());
        pBox_3->setText(QString());
        pBox_3->setPlaceholderText(QApplication::translate("LoginSystem", "Password", Q_NULLPTR));
        completeRegButton_2->setText(QApplication::translate("LoginSystem", "COMPLETE REGISTRATION", Q_NULLPTR));
        eBox_3->setInputMask(QString());
        eBox_3->setText(QString());
        eBox_3->setPlaceholderText(QApplication::translate("LoginSystem", "E-mail", Q_NULLPTR));
        fBox_3->setInputMask(QString());
        fBox_3->setText(QString());
        fBox_3->setPlaceholderText(QApplication::translate("LoginSystem", "First Name", Q_NULLPTR));
        mBox_3->setInputMask(QString());
        mBox_3->setText(QString());
        mBox_3->setPlaceholderText(QApplication::translate("LoginSystem", "Middle Name", Q_NULLPTR));
        lBox_3->setInputMask(QString());
        lBox_3->setText(QString());
        lBox_3->setPlaceholderText(QApplication::translate("LoginSystem", "Last Name", Q_NULLPTR));
        backButton_3->setText(QApplication::translate("LoginSystem", "BACK TO LOGIN PAGE", Q_NULLPTR));
        regLabel_3->setText(QApplication::translate("LoginSystem", "Please fill the form correctly.", Q_NULLPTR));
        rpLabel_3->setText(QApplication::translate("LoginSystem", "<img src=\":user.png\" />", Q_NULLPTR));
        uplButton_3->setText(QApplication::translate("LoginSystem", "UPLOAD PICTURE", Q_NULLPTR));
        loggedUserHeader->setText(QApplication::translate("LoginSystem", "Logged In", Q_NULLPTR));
        logoutButton->setText(QApplication::translate("LoginSystem", "SIGN OUT", Q_NULLPTR));
        label_6->setText(QApplication::translate("LoginSystem", "Name:", Q_NULLPTR));
        label_10->setText(QApplication::translate("LoginSystem", "Rank:", Q_NULLPTR));
        nameLabel->setText(QString());
        rankLabel->setText(QString());
        editButton->setText(QApplication::translate("LoginSystem", "EDIT MY PROFILE", Q_NULLPTR));
        delButton->setText(QApplication::translate("LoginSystem", "DELETE MY ACCOUNT", Q_NULLPTR));
        label_11->setText(QApplication::translate("LoginSystem", "E-mail:", Q_NULLPTR));
        emailLabel->setText(QString());
        loggedPic->setText(QApplication::translate("LoginSystem", "<img src=\":user.png\" />", Q_NULLPTR));
        adminButton->setText(QApplication::translate("LoginSystem", "ADMIN PANEL", Q_NULLPTR));
        label_12->setText(QApplication::translate("LoginSystem", "Edit Profile", Q_NULLPTR));
        uBox_4->setText(QString());
        uBox_4->setPlaceholderText(QApplication::translate("LoginSystem", "Username", Q_NULLPTR));
        pBox_4->setInputMask(QString());
        pBox_4->setText(QString());
        pBox_4->setPlaceholderText(QApplication::translate("LoginSystem", "Password", Q_NULLPTR));
        editedButton_3->setText(QApplication::translate("LoginSystem", "SUBMIT CHANGES", Q_NULLPTR));
        eBox_4->setInputMask(QString());
        eBox_4->setText(QString());
        eBox_4->setPlaceholderText(QApplication::translate("LoginSystem", "E-mail", Q_NULLPTR));
        fBox_4->setInputMask(QString());
        fBox_4->setText(QString());
        fBox_4->setPlaceholderText(QApplication::translate("LoginSystem", "First Name", Q_NULLPTR));
        mBox_4->setInputMask(QString());
        mBox_4->setText(QString());
        mBox_4->setPlaceholderText(QApplication::translate("LoginSystem", "Middle Name", Q_NULLPTR));
        lBox_4->setInputMask(QString());
        lBox_4->setText(QString());
        lBox_4->setPlaceholderText(QApplication::translate("LoginSystem", "Last Name", Q_NULLPTR));
        backButton_4->setText(QApplication::translate("LoginSystem", "BACK TO MY PAGE", Q_NULLPTR));
        regLabel_4->setText(QApplication::translate("LoginSystem", "Edit your details below. (avatar may not change until app relaunch)", Q_NULLPTR));
        uplButton_4->setText(QApplication::translate("LoginSystem", "CHANGE PICTURE", Q_NULLPTR));
        rpLabel_4->setText(QApplication::translate("LoginSystem", "<img src=\":user.png\" />", Q_NULLPTR));
        label_13->setText(QApplication::translate("LoginSystem", "Admin Panel", Q_NULLPTR));
        editedButton_4->setText(QApplication::translate("LoginSystem", "SAVE CHANGES", Q_NULLPTR));
        delUButton_2->setText(QApplication::translate("LoginSystem", "DELETE ALL USERS", Q_NULLPTR));
        userBrowse_2->setText(QApplication::translate("LoginSystem", "ALL USERS", Q_NULLPTR));
        backButton_6->setText(QApplication::translate("LoginSystem", "ROLLBACK ALL CHANGES", Q_NULLPTR));
        pageButton_2->setText(QApplication::translate("LoginSystem", "GOTO MY PAGE", Q_NULLPTR));
        adminBrowse_2->setText(QApplication::translate("LoginSystem", "ALL ADMINS", Q_NULLPTR));
        delAButton_2->setText(QApplication::translate("LoginSystem", "DELETE ALL ADMINS", Q_NULLPTR));
        adminLabel_2->setText(QApplication::translate("LoginSystem", "There are no auto backups! Be sure of any alterations you make.", Q_NULLPTR));
        headLabel_2->setText(QString());
#ifndef QT_NO_WHATSTHIS
        frame_5->setWhatsThis(QApplication::translate("LoginSystem", "QMainWindow,QWidget,QMessageBox{\n"
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
"}", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_5->setText(QApplication::translate("LoginSystem", "Edit Profile", Q_NULLPTR));
        uBox_2->setText(QString());
        uBox_2->setPlaceholderText(QApplication::translate("LoginSystem", "Username", Q_NULLPTR));
        pBox_2->setInputMask(QString());
        pBox_2->setText(QString());
        pBox_2->setPlaceholderText(QApplication::translate("LoginSystem", "Password", Q_NULLPTR));
        editedButton->setText(QApplication::translate("LoginSystem", "SUBMIT CHANGES", Q_NULLPTR));
        eBox_2->setInputMask(QString());
        eBox_2->setText(QString());
        eBox_2->setPlaceholderText(QApplication::translate("LoginSystem", "E-mail", Q_NULLPTR));
        fBox_2->setInputMask(QString());
        fBox_2->setText(QString());
        fBox_2->setPlaceholderText(QApplication::translate("LoginSystem", "First Name", Q_NULLPTR));
        mBox_2->setInputMask(QString());
        mBox_2->setText(QString());
        mBox_2->setPlaceholderText(QApplication::translate("LoginSystem", "Middle Name", Q_NULLPTR));
        lBox_2->setInputMask(QString());
        lBox_2->setText(QString());
        lBox_2->setPlaceholderText(QApplication::translate("LoginSystem", "Last Name", Q_NULLPTR));
        backButton_2->setText(QApplication::translate("LoginSystem", "BACK TO MY PAGE", Q_NULLPTR));
        regLabel_2->setText(QApplication::translate("LoginSystem", "Edit your details below. (avatar may not change until app relaunch)", Q_NULLPTR));
        uplButton_2->setText(QApplication::translate("LoginSystem", "CHANGE PICTURE", Q_NULLPTR));
        rpLabel_2->setText(QApplication::translate("LoginSystem", "<img src=\":user.png\" />", Q_NULLPTR));
        label_8->setText(QApplication::translate("LoginSystem", "Admin Panel", Q_NULLPTR));
        editedButton_2->setText(QApplication::translate("LoginSystem", "SAVE CHANGES", Q_NULLPTR));
        delUButton->setText(QApplication::translate("LoginSystem", "DELETE ALL USERS", Q_NULLPTR));
        userBrowse->setText(QApplication::translate("LoginSystem", "ALL USERS", Q_NULLPTR));
        backButton_5->setText(QApplication::translate("LoginSystem", "ROLLBACK ALL CHANGES", Q_NULLPTR));
        pageButton->setText(QApplication::translate("LoginSystem", "GOTO MY PAGE", Q_NULLPTR));
        adminBrowse->setText(QApplication::translate("LoginSystem", "ALL ADMINS", Q_NULLPTR));
        delAButton->setText(QApplication::translate("LoginSystem", "DELETE ALL ADMINS", Q_NULLPTR));
        adminLabel->setText(QApplication::translate("LoginSystem", "There are no auto backups! Be sure of any alterations you make.", Q_NULLPTR));
        headLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginSystem: public Ui_LoginSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSYSTEM_H

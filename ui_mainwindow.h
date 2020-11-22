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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
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
    QStackedWidget *stackedWidget;
    QWidget *Menu;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *services;
    QLabel *label_listeService;
    QTableView *tableView_services;
    QPushButton *ajouter_service;
    QPushButton *supprimer_service;
    QPushButton *modifier_service;
    QPushButton *consulter_service;
    QFrame *line_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_menu;
    QPushButton *pushButton_Chambre;
    QPushButton *pushButton_services;
    QWidget *ajout_service;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_AjoutStaff3;
    QLineEdit *lineEdit_AjoutStaff2;
    QLabel *nom_service;
    QLabel *staff1;
    QLabel *staff2;
    QLabel *staff3;
    QPushButton *pushButton_AjouterService;
    QPushButton *pushButton_AnnulerAjoutService;
    QLineEdit *lineEdit_ajoutNomService;
    QLineEdit *lineEdit_AjoutStaff1;
    QWidget *suppression_service;
    QGroupBox *groupBox_2;
    QLabel *nom_service_2;
    QLineEdit *lineEdit_SuppNomService;
    QDialogButtonBox *buttonBox_SuppService;
    QWidget *Modifier_service;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_ModifStaff2;
    QLabel *nom_service_3;
    QLabel *staff2_3;
    QLabel *staff1_3;
    QLineEdit *lineEdit_ModifNomService;
    QLineEdit *lineEdit_ModifStaff1;
    QLabel *staff3_3;
    QLineEdit *lineEdit_ModifStaff3;
    QDialogButtonBox *buttonBox_modifierService;
    QWidget *chambres;
    QLabel *label_listeCahmbre;
    QTableView *tableView_chambres;
    QPushButton *modifier_chambre;
    QPushButton *supprimer_chambre;
    QPushButton *ajouter_chambre;
    QFrame *line;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Menu;
    QPushButton *pushButton_Chambres;
    QPushButton *pushButton_Services;
    QWidget *Ajout_chambre;
    QGroupBox *groupBox_4;
    QComboBox *comboBox_AjoutType;
    QLabel *emplacement;
    QLabel *type;
    QLabel *numero;
    QLabel *nombredelits;
    QLabel *nomduSurveillant;
    QLineEdit *lineEdit_AjoutEmplacement;
    QLineEdit *lineEdit_AjoutSurveillant;
    QLineEdit *lineEdit_AjoutNumero;
    QSpinBox *spinBox_AjoutLits;
    QLabel *label_ajoutLits;
    QPushButton *pushButton_AjoutChambre;
    QPushButton *pushButton_AnnulerAjoutChambre;
    QWidget *page;
    QGroupBox *groupBox_5;
    QDialogButtonBox *buttonBox_SuppChambre;
    QLabel *numeroChambre;
    QLineEdit *lineEdit_SuppChambre;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 415);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        Menu = new QWidget();
        Menu->setObjectName(QStringLiteral("Menu"));
        verticalLayoutWidget = new QWidget(Menu);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 10, 571, 361));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        stackedWidget->addWidget(Menu);
        services = new QWidget();
        services->setObjectName(QStringLiteral("services"));
        label_listeService = new QLabel(services);
        label_listeService->setObjectName(QStringLiteral("label_listeService"));
        label_listeService->setGeometry(QRect(30, 70, 211, 41));
        tableView_services = new QTableView(services);
        tableView_services->setObjectName(QStringLiteral("tableView_services"));
        tableView_services->setGeometry(QRect(10, 110, 321, 261));
        ajouter_service = new QPushButton(services);
        ajouter_service->setObjectName(QStringLiteral("ajouter_service"));
        ajouter_service->setGeometry(QRect(410, 130, 75, 23));
        supprimer_service = new QPushButton(services);
        supprimer_service->setObjectName(QStringLiteral("supprimer_service"));
        supprimer_service->setGeometry(QRect(410, 230, 75, 23));
        modifier_service = new QPushButton(services);
        modifier_service->setObjectName(QStringLiteral("modifier_service"));
        modifier_service->setGeometry(QRect(410, 170, 75, 23));
        consulter_service = new QPushButton(services);
        consulter_service->setObjectName(QStringLiteral("consulter_service"));
        consulter_service->setGeometry(QRect(410, 260, 75, 23));
        line_2 = new QFrame(services);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 51, 571, 31));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_2 = new QWidget(services);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 561, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_menu = new QPushButton(horizontalLayoutWidget_2);
        pushButton_menu->setObjectName(QStringLiteral("pushButton_menu"));

        horizontalLayout_2->addWidget(pushButton_menu);

        pushButton_Chambre = new QPushButton(horizontalLayoutWidget_2);
        pushButton_Chambre->setObjectName(QStringLiteral("pushButton_Chambre"));

        horizontalLayout_2->addWidget(pushButton_Chambre);

        pushButton_services = new QPushButton(horizontalLayoutWidget_2);
        pushButton_services->setObjectName(QStringLiteral("pushButton_services"));

        horizontalLayout_2->addWidget(pushButton_services);

        stackedWidget->addWidget(services);
        ajout_service = new QWidget();
        ajout_service->setObjectName(QStringLiteral("ajout_service"));
        groupBox = new QGroupBox(ajout_service);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 551, 341));
        lineEdit_AjoutStaff3 = new QLineEdit(groupBox);
        lineEdit_AjoutStaff3->setObjectName(QStringLiteral("lineEdit_AjoutStaff3"));
        lineEdit_AjoutStaff3->setGeometry(QRect(282, 230, 191, 20));
        lineEdit_AjoutStaff2 = new QLineEdit(groupBox);
        lineEdit_AjoutStaff2->setObjectName(QStringLiteral("lineEdit_AjoutStaff2"));
        lineEdit_AjoutStaff2->setGeometry(QRect(282, 180, 191, 20));
        nom_service = new QLabel(groupBox);
        nom_service->setObjectName(QStringLiteral("nom_service"));
        nom_service->setGeometry(QRect(70, 70, 121, 31));
        staff1 = new QLabel(groupBox);
        staff1->setObjectName(QStringLiteral("staff1"));
        staff1->setGeometry(QRect(70, 130, 91, 16));
        staff2 = new QLabel(groupBox);
        staff2->setObjectName(QStringLiteral("staff2"));
        staff2->setGeometry(QRect(70, 180, 47, 14));
        staff3 = new QLabel(groupBox);
        staff3->setObjectName(QStringLiteral("staff3"));
        staff3->setGeometry(QRect(70, 230, 47, 14));
        pushButton_AjouterService = new QPushButton(groupBox);
        pushButton_AjouterService->setObjectName(QStringLiteral("pushButton_AjouterService"));
        pushButton_AjouterService->setGeometry(QRect(370, 310, 75, 23));
        pushButton_AnnulerAjoutService = new QPushButton(groupBox);
        pushButton_AnnulerAjoutService->setObjectName(QStringLiteral("pushButton_AnnulerAjoutService"));
        pushButton_AnnulerAjoutService->setGeometry(QRect(450, 310, 75, 23));
        lineEdit_ajoutNomService = new QLineEdit(groupBox);
        lineEdit_ajoutNomService->setObjectName(QStringLiteral("lineEdit_ajoutNomService"));
        lineEdit_ajoutNomService->setGeometry(QRect(282, 80, 191, 20));
        lineEdit_AjoutStaff1 = new QLineEdit(groupBox);
        lineEdit_AjoutStaff1->setObjectName(QStringLiteral("lineEdit_AjoutStaff1"));
        lineEdit_AjoutStaff1->setGeometry(QRect(282, 130, 191, 20));
        stackedWidget->addWidget(ajout_service);
        suppression_service = new QWidget();
        suppression_service->setObjectName(QStringLiteral("suppression_service"));
        groupBox_2 = new QGroupBox(suppression_service);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 551, 351));
        nom_service_2 = new QLabel(groupBox_2);
        nom_service_2->setObjectName(QStringLiteral("nom_service_2"));
        nom_service_2->setGeometry(QRect(50, 150, 121, 31));
        lineEdit_SuppNomService = new QLineEdit(groupBox_2);
        lineEdit_SuppNomService->setObjectName(QStringLiteral("lineEdit_SuppNomService"));
        lineEdit_SuppNomService->setGeometry(QRect(280, 150, 191, 20));
        buttonBox_SuppService = new QDialogButtonBox(groupBox_2);
        buttonBox_SuppService->setObjectName(QStringLiteral("buttonBox_SuppService"));
        buttonBox_SuppService->setGeometry(QRect(370, 310, 156, 23));
        buttonBox_SuppService->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        stackedWidget->addWidget(suppression_service);
        Modifier_service = new QWidget();
        Modifier_service->setObjectName(QStringLiteral("Modifier_service"));
        groupBox_3 = new QGroupBox(Modifier_service);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 551, 371));
        lineEdit_ModifStaff2 = new QLineEdit(groupBox_3);
        lineEdit_ModifStaff2->setObjectName(QStringLiteral("lineEdit_ModifStaff2"));
        lineEdit_ModifStaff2->setGeometry(QRect(262, 190, 191, 20));
        lineEdit_ModifStaff2->setReadOnly(false);
        nom_service_3 = new QLabel(groupBox_3);
        nom_service_3->setObjectName(QStringLiteral("nom_service_3"));
        nom_service_3->setGeometry(QRect(50, 80, 121, 31));
        staff2_3 = new QLabel(groupBox_3);
        staff2_3->setObjectName(QStringLiteral("staff2_3"));
        staff2_3->setGeometry(QRect(50, 190, 47, 14));
        staff1_3 = new QLabel(groupBox_3);
        staff1_3->setObjectName(QStringLiteral("staff1_3"));
        staff1_3->setGeometry(QRect(50, 140, 91, 16));
        lineEdit_ModifNomService = new QLineEdit(groupBox_3);
        lineEdit_ModifNomService->setObjectName(QStringLiteral("lineEdit_ModifNomService"));
        lineEdit_ModifNomService->setGeometry(QRect(262, 90, 191, 20));
        lineEdit_ModifNomService->setReadOnly(false);
        lineEdit_ModifStaff1 = new QLineEdit(groupBox_3);
        lineEdit_ModifStaff1->setObjectName(QStringLiteral("lineEdit_ModifStaff1"));
        lineEdit_ModifStaff1->setGeometry(QRect(262, 140, 191, 20));
        lineEdit_ModifStaff1->setReadOnly(false);
        staff3_3 = new QLabel(groupBox_3);
        staff3_3->setObjectName(QStringLiteral("staff3_3"));
        staff3_3->setGeometry(QRect(50, 240, 47, 14));
        lineEdit_ModifStaff3 = new QLineEdit(groupBox_3);
        lineEdit_ModifStaff3->setObjectName(QStringLiteral("lineEdit_ModifStaff3"));
        lineEdit_ModifStaff3->setGeometry(QRect(262, 240, 191, 20));
        lineEdit_ModifStaff3->setReadOnly(false);
        buttonBox_modifierService = new QDialogButtonBox(groupBox_3);
        buttonBox_modifierService->setObjectName(QStringLiteral("buttonBox_modifierService"));
        buttonBox_modifierService->setGeometry(QRect(370, 330, 156, 23));
        buttonBox_modifierService->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        stackedWidget->addWidget(Modifier_service);
        chambres = new QWidget();
        chambres->setObjectName(QStringLiteral("chambres"));
        label_listeCahmbre = new QLabel(chambres);
        label_listeCahmbre->setObjectName(QStringLiteral("label_listeCahmbre"));
        label_listeCahmbre->setGeometry(QRect(20, 90, 161, 31));
        tableView_chambres = new QTableView(chambres);
        tableView_chambres->setObjectName(QStringLiteral("tableView_chambres"));
        tableView_chambres->setGeometry(QRect(10, 130, 271, 241));
        modifier_chambre = new QPushButton(chambres);
        modifier_chambre->setObjectName(QStringLiteral("modifier_chambre"));
        modifier_chambre->setGeometry(QRect(400, 190, 75, 23));
        supprimer_chambre = new QPushButton(chambres);
        supprimer_chambre->setObjectName(QStringLiteral("supprimer_chambre"));
        supprimer_chambre->setGeometry(QRect(400, 230, 75, 23));
        ajouter_chambre = new QPushButton(chambres);
        ajouter_chambre->setObjectName(QStringLiteral("ajouter_chambre"));
        ajouter_chambre->setGeometry(QRect(400, 150, 75, 23));
        line = new QFrame(chambres);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 50, 571, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(chambres);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 9, 561, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Menu = new QPushButton(horizontalLayoutWidget);
        pushButton_Menu->setObjectName(QStringLiteral("pushButton_Menu"));

        horizontalLayout->addWidget(pushButton_Menu);

        pushButton_Chambres = new QPushButton(horizontalLayoutWidget);
        pushButton_Chambres->setObjectName(QStringLiteral("pushButton_Chambres"));

        horizontalLayout->addWidget(pushButton_Chambres);

        pushButton_Services = new QPushButton(horizontalLayoutWidget);
        pushButton_Services->setObjectName(QStringLiteral("pushButton_Services"));

        horizontalLayout->addWidget(pushButton_Services);

        stackedWidget->addWidget(chambres);
        Ajout_chambre = new QWidget();
        Ajout_chambre->setObjectName(QStringLiteral("Ajout_chambre"));
        groupBox_4 = new QGroupBox(Ajout_chambre);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 20, 541, 361));
        comboBox_AjoutType = new QComboBox(groupBox_4);
        comboBox_AjoutType->setObjectName(QStringLiteral("comboBox_AjoutType"));
        comboBox_AjoutType->setGeometry(QRect(290, 120, 161, 22));
        emplacement = new QLabel(groupBox_4);
        emplacement->setObjectName(QStringLiteral("emplacement"));
        emplacement->setGeometry(QRect(60, 70, 111, 16));
        type = new QLabel(groupBox_4);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(60, 120, 47, 14));
        numero = new QLabel(groupBox_4);
        numero->setObjectName(QStringLiteral("numero"));
        numero->setGeometry(QRect(60, 170, 47, 14));
        nombredelits = new QLabel(groupBox_4);
        nombredelits->setObjectName(QStringLiteral("nombredelits"));
        nombredelits->setGeometry(QRect(50, 210, 121, 16));
        nomduSurveillant = new QLabel(groupBox_4);
        nomduSurveillant->setObjectName(QStringLiteral("nomduSurveillant"));
        nomduSurveillant->setGeometry(QRect(50, 260, 111, 16));
        lineEdit_AjoutEmplacement = new QLineEdit(groupBox_4);
        lineEdit_AjoutEmplacement->setObjectName(QStringLiteral("lineEdit_AjoutEmplacement"));
        lineEdit_AjoutEmplacement->setGeometry(QRect(292, 70, 161, 20));
        lineEdit_AjoutSurveillant = new QLineEdit(groupBox_4);
        lineEdit_AjoutSurveillant->setObjectName(QStringLiteral("lineEdit_AjoutSurveillant"));
        lineEdit_AjoutSurveillant->setGeometry(QRect(290, 260, 161, 20));
        lineEdit_AjoutNumero = new QLineEdit(groupBox_4);
        lineEdit_AjoutNumero->setObjectName(QStringLiteral("lineEdit_AjoutNumero"));
        lineEdit_AjoutNumero->setGeometry(QRect(292, 160, 161, 20));
        spinBox_AjoutLits = new QSpinBox(groupBox_4);
        spinBox_AjoutLits->setObjectName(QStringLiteral("spinBox_AjoutLits"));
        spinBox_AjoutLits->setGeometry(QRect(290, 210, 51, 22));
        label_ajoutLits = new QLabel(groupBox_4);
        label_ajoutLits->setObjectName(QStringLiteral("label_ajoutLits"));
        label_ajoutLits->setGeometry(QRect(370, 210, 81, 20));
        pushButton_AjoutChambre = new QPushButton(groupBox_4);
        pushButton_AjoutChambre->setObjectName(QStringLiteral("pushButton_AjoutChambre"));
        pushButton_AjoutChambre->setGeometry(QRect(370, 320, 75, 23));
        pushButton_AnnulerAjoutChambre = new QPushButton(groupBox_4);
        pushButton_AnnulerAjoutChambre->setObjectName(QStringLiteral("pushButton_AnnulerAjoutChambre"));
        pushButton_AnnulerAjoutChambre->setGeometry(QRect(450, 320, 75, 23));
        stackedWidget->addWidget(Ajout_chambre);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        groupBox_5 = new QGroupBox(page);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 541, 351));
        buttonBox_SuppChambre = new QDialogButtonBox(groupBox_5);
        buttonBox_SuppChambre->setObjectName(QStringLiteral("buttonBox_SuppChambre"));
        buttonBox_SuppChambre->setGeometry(QRect(360, 310, 156, 23));
        buttonBox_SuppChambre->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        numeroChambre = new QLabel(groupBox_5);
        numeroChambre->setObjectName(QStringLiteral("numeroChambre"));
        numeroChambre->setGeometry(QRect(60, 160, 161, 16));
        lineEdit_SuppChambre = new QLineEdit(groupBox_5);
        lineEdit_SuppChambre->setObjectName(QStringLiteral("lineEdit_SuppChambre"));
        lineEdit_SuppChambre->setGeometry(QRect(280, 160, 181, 20));
        stackedWidget->addWidget(page);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Chambres", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Services", Q_NULLPTR));
        label_listeService->setText(QApplication::translate("MainWindow", "Listes des services", Q_NULLPTR));
        ajouter_service->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        supprimer_service->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        modifier_service->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        consulter_service->setText(QApplication::translate("MainWindow", "Consulter", Q_NULLPTR));
        pushButton_menu->setText(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
        pushButton_Chambre->setText(QApplication::translate("MainWindow", "Chambres", Q_NULLPTR));
        pushButton_services->setText(QApplication::translate("MainWindow", "Services", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajouter un service", Q_NULLPTR));
        nom_service->setText(QApplication::translate("MainWindow", "Nom du service", Q_NULLPTR));
        staff1->setText(QApplication::translate("MainWindow", "Staff1", Q_NULLPTR));
        staff2->setText(QApplication::translate("MainWindow", "Staff2", Q_NULLPTR));
        staff3->setText(QApplication::translate("MainWindow", "Staff3", Q_NULLPTR));
        pushButton_AjouterService->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButton_AnnulerAjoutService->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Supprimer un service", Q_NULLPTR));
        nom_service_2->setText(QApplication::translate("MainWindow", "Nom du service", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Modifier un service", Q_NULLPTR));
        nom_service_3->setText(QApplication::translate("MainWindow", "Nom du service", Q_NULLPTR));
        staff2_3->setText(QApplication::translate("MainWindow", "Staff2", Q_NULLPTR));
        staff1_3->setText(QApplication::translate("MainWindow", "Staff1", Q_NULLPTR));
        staff3_3->setText(QApplication::translate("MainWindow", "Staff3", Q_NULLPTR));
        label_listeCahmbre->setText(QApplication::translate("MainWindow", "Liste des chambres", Q_NULLPTR));
        modifier_chambre->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        supprimer_chambre->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        ajouter_chambre->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButton_Menu->setText(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
        pushButton_Chambres->setText(QApplication::translate("MainWindow", "Chambres", Q_NULLPTR));
        pushButton_Services->setText(QApplication::translate("MainWindow", "Services", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Ajouter une chambre", Q_NULLPTR));
        emplacement->setText(QApplication::translate("MainWindow", "Emplacement", Q_NULLPTR));
        type->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        numero->setText(QApplication::translate("MainWindow", "Numero", Q_NULLPTR));
        nombredelits->setText(QApplication::translate("MainWindow", "Nombre de lits", Q_NULLPTR));
        nomduSurveillant->setText(QApplication::translate("MainWindow", "Nom du surveillant", Q_NULLPTR));
        label_ajoutLits->setText(QString());
        pushButton_AjoutChambre->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButton_AnnulerAjoutChambre->setText(QApplication::translate("MainWindow", "Annuler", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Supprimer une chambre", Q_NULLPTR));
        numeroChambre->setText(QApplication::translate("MainWindow", "Numero de la chambre", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

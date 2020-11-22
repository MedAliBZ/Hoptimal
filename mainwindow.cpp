#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "medicament.h"
#include <QPropertyAnimation>
#include <QPixmap>
#include <QDateEdit>
#include <iostream>
#include <QString>
#include <QDebug>
#include <QtDebug>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDateTime>
#include <QModelIndex>
#include <QListWidgetItem>
#include "equipement.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    medicament m;
    ui->setupUi(this);
    /* QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/med.png") ,"medicament");
    ui->listWidget->addItem(item);

    QListWidgetItem *item1 = new QListWidgetItem(QIcon(":/rec/equipement.png") ,"equipement");
    ui->listWidget_2->addItem(item1);*/


    QPixmap med_icon(":/rec/med.png");
    ui->icon_med->setPixmap(med_icon.scaled(100,100,Qt::KeepAspectRatio));
    ui->icon_med_2->setPixmap(med_icon.scaled(100,100,Qt::KeepAspectRatio));

    QPixmap equi_icon(":/rec/equipement.png");
    ui->icon_equi->setPixmap(equi_icon.scaled(100,100,Qt::KeepAspectRatio));
    ui->icon_equi_2->setPixmap(equi_icon.scaled(100,100,Qt::KeepAspectRatio));





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::smallLineAnimationEquipement(){
    QPropertyAnimation *animation = new QPropertyAnimation(ui->line_equi, "geometry");
    animation->setDuration(500);
    animation->setStartValue(QRect(ui->line_equi->geometry().x()+(ui->line_equi->geometry().width()/2),40,10,3));
    animation->setEndValue(ui->line_equi->geometry());
    animation->start();
}
void MainWindow::smallLineAnimationMedicament(){
    QPropertyAnimation *animation = new QPropertyAnimation(ui->line_med, "geometry");
    animation->setDuration(500);
    animation->setStartValue(QRect(ui->line_med->geometry().x()+(ui->line_med->geometry().width()/2),40,10,3));
    animation->setEndValue(ui->line_med->geometry());
    animation->start();
}

void MainWindow::on_list_med_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    afficher_medicament();
}

void MainWindow::on_list_eq_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    afficher_equipement();
}

void MainWindow::on_Home_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_Home_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_Equipement_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    afficher_equipement();

}

void MainWindow::on_Medicament_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    smallLineAnimationMedicament();
    afficher_medicament();
}

void MainWindow::on_Medicament_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_Equipement_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    smallLineAnimationEquipement();
    afficher_equipement();
}


void MainWindow::on_ajouter_med_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);

}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_ajouter_equi_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}



void MainWindow::on_annuler_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::afficher_medicament()
{
    QSqlQuery *qry=new QSqlQuery();

    if (qry->exec("SELECT * FROM MEDICAMENTS"))
    {
        int rowCount = 0;
        while(qry->next())
        {
            rowCount++;
        }

        for (int i =rowCount ; i>=0 ; i--)
        {
            QListWidgetItem *name = new QListWidgetItem;
            name = ui->listWidget_MED->takeItem(i);
            ui->listWidget_MED->removeItemWidget(name);
        }

    }

    if (qry->exec("SELECT NAME FROM MEDICAMENTS"))
    {
        int rowCount = 0;
        while(qry->next())
        {

            QListWidgetItem *Name = new QListWidgetItem;


            Name->setText(qry->value(0).toString());
            ui->listWidget_MED->insertItem(rowCount,Name);
            rowCount++;



        }

    }
}

void MainWindow::afficher_equipement()
{
    QSqlQuery *qry=new QSqlQuery();

    if (qry->exec("SELECT * FROM EQUIPEMENT"))
    {
        int rowCount = 0;
        while(qry->next())
        {
            rowCount++;
        }

        for (int i =rowCount ; i>=0 ; i--)
        {
            QListWidgetItem *name = new QListWidgetItem;
            name = ui->listWidget_EQUI->takeItem(i);
            ui->listWidget_EQUI->removeItemWidget(name);
        }

    }

    if (qry->exec("SELECT NOM FROM EQUIPEMENT"))
    {
        int rowCount = 0;
        while(qry->next())
        {

            QListWidgetItem *Name = new QListWidgetItem;


            Name->setText(qry->value(0).toString());
            ui->listWidget_EQUI->insertItem(rowCount,Name);
            rowCount++;



        }

    }
}

void MainWindow::on_pushButton_ajouter_clicked()
{

    QString df,dlc;
    QSqlQuery query;
    df = ui->dateEdit_DF->date().toString("dd-MM-yyyy");
    dlc = ui->dateEdit_DLC->date().toString("dd-MM-yyyy");

    medicament m(ui->nom_med->text(),ui->description->text(),df,dlc,ui->prix->text());
    int prix= m.getPrix().toInt();
    if(prix==0)
    {
        qDebug() << "please enter prix integer " << endl;
    }
    else
    {


        query.prepare("SELECT * FROM MEDICAMENTS WHERE NAME= :nom");
        query.bindValue(":nom",m.getNom());
        if(query.exec())
        {
            int count(0);
            while(query.next())
            {
                count++;
            }
            if(count==0)
            {
                bool test=m.ajouter_medicament();
                if(test)
                {
                    qDebug ()<< "ajout medicament" << endl;
                }

            }
            else
            {
                qDebug() <<"medicament deja existant"<< endl;
            }
        }

    }
    ui->stackedWidget->setCurrentIndex(1);
    afficher_medicament();

}

void MainWindow::Ajouter_Medicament()
{
    //pour ajouter medicamnets
}



void MainWindow::on_pushButton_anuuler_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

    ui->bon->setChecked(false);
    ui->mauvais->setChecked(false);
    ui->dispo->setChecked(false);
    ui->non_dispo->setChecked(false);

}

void MainWindow::on_effacer_medicament_clicked()
{

    QString nom = ui->listWidget_MED->currentItem()->text();
    medicament m;
    bool test = m.supprimer_medicaments(nom);
    if(test)
    {
        qDebug ()<< "sup medicament reussite" << endl;
        afficher_medicament();
    }

}



void MainWindow::on_effacer_equipement_clicked()
{       
    //ui->listView->selectionModel()->selectedIndexes()
    QString nom = ui->listWidget_EQUI->currentItem()->text();
    equipement e;
    bool test = e.supprimer_equipement(nom);
    if(test)
    {
        qDebug ()<< "sup equipement reussite" << endl;
        afficher_equipement();
    }
}


void MainWindow::on_annuler_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_annuler_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_chercher_med_textChanged(const QString &arg1)
{
    QString searchText = ui->chercher_med->text();
    int listWidgetSize = ui->listWidget_MED->count();

    for (int k1 = 0; k1 < listWidgetSize; ++k1)
    {
        if (ui->listWidget_MED->item(k1)->text().contains(searchText))
        {
            ui->listWidget_MED->item(k1)->setHidden(false);
        }
        else
        {
            ui->listWidget_MED->item(k1)->setHidden(true);
        }
    }

}

void MainWindow::on_listWidget_MED_itemDoubleClicked(QListWidgetItem *item)
{
    ui->stackedWidget->setCurrentIndex(5);
    QString nom = item->text();
    MainWindow m_w;
    m_w.set_nom_medicament(nom);
    qDebug() << m_w.nom_medicament_1 << endl;
    QSqlQuery* qry=new QSqlQuery();
    qry->prepare("SELECT * FROM MEDICAMENTS WHERE NAME = :nom");
    qry->bindValue(":nom",nom);

    if ( qry->exec())
    {
        while (qry->next())
        {
            QString df = qry->value(2).toString();
            QString dlc = qry->value(3).toString();
            QDate df_date = QDate::fromString(df,"dd-MM-yyyy");
            QDate dlc_date = QDate::fromString(dlc,"dd-MM-yyyy");
            ui->dateEdit_DF2->setDate(df_date);
            ui->dateEdit_4->setDate(dlc_date);
            QString nom,des,prix;
            nom= qry->value(0).toString();
            ui->lineEdit->setText(nom);
            ui->lineEdit_3->setText(qry->value(1).toString());
            ui->lineEdit_4->setText(qry->value(4).toString());
        }
    }
}

void MainWindow::on_ModifierMedicament_clicked()
{
    QSqlQuery qry;
    QString nom_init = ui->listWidget_MED->currentItem()->text();
    qry.prepare("SELECT * FROM MEDICAMENTS WHERE NAME = :nom");
    qry.bindValue(":nom",nom_init);
    qDebug() << nom_init << endl;

    if ( qry.exec() )
    {
        int count(0);
        while (qry.next())
        {
            count++;

        }
        if (count == 1)
        {
            QString df= ui->dateEdit_DF2->date().toString("dd-MM-yyyy") ;
            QString dlc= ui->dateEdit_4->date().toString("dd-MM-yyyy") ;
            QString nom,desc,prix;
            nom= ui->lineEdit->text();
            desc = ui->lineEdit_3->text();
            prix = ui->lineEdit_4->text();

            if ( nom == "" || desc == "" || prix == "")
            {
                QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                         QObject::tr("name or description or prix is empty.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
            }
            else
            {
                qry.prepare("UPDATE MEDICAMENTS SET NAME=:nom , DESCRIPTION=:desc , DF=:df , DLC = :dlc , PRIX= :prix WHERE NAME=:name");
                qry.bindValue(":nom",nom);
                qry.bindValue(":desc",desc);
                qry.bindValue(":df",df);
                qry.bindValue(":dlc",dlc);
                qry.bindValue(":prix",prix);
                qry.bindValue(":name",nom_init);

                ui->stackedWidget->setCurrentIndex(1);


            }

        }
        else
        {
            QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                     QObject::tr("name not found.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
        }


    }
    if (qry.exec())
    {
        qDebug() << "done updating ! " << endl;
    }

    afficher_medicament();

}



void MainWindow::on_ajout_equi_clicked()
{
    QString etat="",dispo="",name="";

    name= ui->nom_equi->text();

    if ( !ui->checkBox_dispo->isChecked() && !ui->checkBox_nondispo->isChecked() )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("choisir option de disponibilites.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else if ( ui->checkBox_dispo->isChecked() && ui->checkBox_nondispo->isChecked() )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("dispo et non dispo ne peuvent pas etres cocher en meme temps.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else if ( ui->checkBox_dispo->isChecked() )
    {
        dispo = "1";
    }
    else  if ( ui->checkBox_nondispo->isChecked() )
    {
        dispo = "0";
    }


    if ( !ui->checkBox_bon->isChecked() && !ui->checkBox_mauvais->isChecked() )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("choisir un etat d'equipement.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else if ( ui->checkBox_bon->isChecked() && ui->checkBox_mauvais->isChecked() )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("bon et mauvais ne peuvent pas etres cocher en meme temps.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else if ( ui->checkBox_bon->isChecked() )
    {
        etat = "1";
    }
    else if ( ui->checkBox_mauvais->isChecked() )
    {
        etat = "0";
    }


    if ( name == "")
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("name is empty.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }

    if (( etat == "0" || etat == "1" )&& (dispo == "0" || dispo == "1") && ( name != ""))
    {
        qDebug() << etat << name << dispo << endl;
        equipement e(name,etat,dispo);
        QSqlQuery query;
        query.prepare("SELECT * FROM EQUIPEMENT WHERE NOM= :nom");
        query.bindValue(":nom",e.get_nom());
        if(query.exec())
        {
            int count(0);
            while(query.next())
            {
                count++;
            }
            if(count==0)
            {
                bool test=e.ajouter_equipement();
                if(test)
                {
                    qDebug ()<< "ajout equipement" << endl;
                }
                ui->stackedWidget->setCurrentIndex(2);

            }
            else
            {
                qDebug() <<"equipement deja existant"<< endl;
            }
        }
        afficher_equipement();
        ui->stackedWidget->setCurrentIndex(2);
    }
}

void MainWindow::on_chercher_equi_textChanged(const QString &arg1)
{
    QString searchText = ui->chercher_equi->text();
    int listWidgetSize = ui->listWidget_EQUI->count();

    for (int k1 = 0; k1 < listWidgetSize; ++k1)
    {
        if (ui->listWidget_EQUI->item(k1)->text().contains(searchText))
        {
            ui->listWidget_EQUI->item(k1)->setHidden(false);
        }
        else
        {
            ui->listWidget_EQUI->item(k1)->setHidden(true);
        }
    }
}

void MainWindow::on_listWidget_EQUI_itemDoubleClicked(QListWidgetItem *item)
{
    ui->stackedWidget->setCurrentIndex(6);
    QString nom = item->text();
    QSqlQuery* qry=new QSqlQuery();
    qry->prepare("SELECT * FROM EQUIPEMENT WHERE NOM = :nom");
    qry->bindValue(":nom",nom);

    if ( qry->exec())
    {
        while (qry->next())
        {

            QString nom,etat,dispo;
            nom= qry->value(0).toString();
            ui->lineEdit_5->setText(nom);

            dispo = qry->value(1).toString();

            if ( dispo == "0")
            {
                ui->non_dispo->setChecked(true);
            }
            else
            {
                ui->dispo->setChecked(true);
            }

            etat = qry->value(2).toString();

            if ( etat == "0")
            {
                ui->mauvais->setChecked(true);
            }
            else
            {
                ui->bon->setChecked(true);
            }
        }
    }
}

void MainWindow::on_ModifierEquipement_clicked()
{
    QSqlQuery qry;
    QString nom_init = ui->listWidget_EQUI->currentItem()->text();
    qry.prepare("SELECT * FROM EQUIPEMENT WHERE NOM = :nom");
    qry.bindValue(":nom",nom_init);
    qDebug() << nom_init << endl;

    if ( qry.exec() )
    {
        int count(0);
        while (qry.next())
        {
            count++;

        }
        if (count == 1)
        {
            QString nom="",dispo="",etat="";
            nom= ui->lineEdit_5->text();

            if ( !ui->dispo->isChecked() && !ui->non_dispo->isChecked() )
            {
                QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                         QObject::tr("choisir option de disponibilites.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
            }
            else if ( ui->dispo->isChecked() && ui->non_dispo->isChecked() )
            {
                QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                         QObject::tr("dispo et non dispo ne peuvent pas etres cocher en meme temps.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
            }
            else if ( ui->dispo->isChecked() )
            {
                dispo = "1";
            }
            else  if ( ui->non_dispo->isChecked() )
            {
                dispo = "0";
            }


            if ( !ui->bon->isChecked() && !ui->mauvais->isChecked() )
            {
                QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                         QObject::tr("choisir un etat d'equipement.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
            }
            else if ( ui->bon->isChecked() && ui->mauvais->isChecked() )
            {
                QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                         QObject::tr("bon et mauvais ne peuvent pas etres cocher en meme temps.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
            }
            else if ( ui->bon->isChecked() )
            {
                etat = "1";
            }
            else if ( ui->mauvais->isChecked() )
            {
                etat = "0";
            }

            if ( nom == "" || etat == "" || dispo == "")
            {
                QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                         QObject::tr("name or dispo or etat is empty.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
            }
            else
            {
                qry.prepare("UPDATE EQUIPEMENT SET NOM=:nom , DISPO=:disp , ETAT_FONC=:etat  WHERE NOM=:name");
                qry.bindValue(":nom",nom);
                qry.bindValue(":disp",dispo);
                qry.bindValue(":etat",etat);
                qry.bindValue(":name",nom_init);

                ui->stackedWidget->setCurrentIndex(2);


            }

        }
        else
        {
            QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                     QObject::tr("name not found.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
        }


    }
    if (qry.exec())
    {
        qDebug() << "done updating ! " << endl;
    }

    afficher_equipement();
}

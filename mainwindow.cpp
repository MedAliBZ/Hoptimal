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
#include <QPrinter>
#include <QPrintDialog>
#include <QPdfWriter>
#include <QPainter>
#include <QTextEdit>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>


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






    statistique_med();
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

void MainWindow::bigLineAnimationMedicament()
{
    QPropertyAnimation *animation = new QPropertyAnimation(ui->bigline_med, "geometry");
    animation->setDuration(2000);
    animation->setStartValue(QRect(-500,ui->bigline_med->geometry().y(),500,3));
    animation->setEndValue(ui->bigline_med->geometry());
    QEasingCurve curve;
    curve.setType(QEasingCurve::OutBounce);
    animation->setEasingCurve(curve);
    animation->start();
}

void MainWindow::bigLineAnimationEquipement()
{
    QPropertyAnimation *animation = new QPropertyAnimation(ui->bigline_eq, "geometry");
    animation->setDuration(2000);
    animation->setStartValue(QRect(-500,ui->bigline_eq->geometry().y(),500,3));
    animation->setEndValue(ui->bigline_eq->geometry());
    QEasingCurve curve;
    curve.setType(QEasingCurve::OutBounce);
    animation->setEasingCurve(curve);
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
    bigLineAnimationMedicament();
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
    bigLineAnimationEquipement();
    afficher_equipement();
}




void MainWindow::on_ajouter_med_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);



}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->nom_med->setText("");
    ui->prix->setText("");
    ui->quantite->setText("");
    ui->description->setText("");
    QString df_1="01-01-2015",dlc_1="01-01-2020";
    ui->dateEdit_DF->date().toString(df_1);
    ui->dateEdit_DLC->date().toString(dlc_1);
}

void MainWindow::on_ajouter_equi_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}

void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->nom_equi->setText("");
    ui->checkBox_bon->setChecked(false);
    ui->checkBox_mauvais->setChecked(false);
    ui->checkBox_dispo->setChecked(false);
    ui->checkBox_nondispo->setChecked(false);
}



void MainWindow::on_annuler_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


//////////////////////////////////////////////////affichage des médicaments
void MainWindow::afficher_medicament()
{
    medicament m;
    int rowCount = m.clear_liste_med();

    for (int i =rowCount ; i>=0 ; i--)
    {
        QListWidgetItem *name = new QListWidgetItem;
        name = ui->listWidget_MED->takeItem(i);
        ui->listWidget_MED->removeItemWidget(name);
    }

    QSqlQuery* qry=m.afficherMedicamentList();


        rowCount = 0;
        while(qry->next())
        {

            QListWidgetItem *Name = new QListWidgetItem;


            Name->setText(qry->value(0).toString());
            ui->listWidget_MED->insertItem(rowCount,Name);
            rowCount++;



        }

}

////////////////////////////////////////////////////////////affichage des équipements
void MainWindow::afficher_equipement()
{
    equipement e;
    int rowCount = e.clear_liste_eq();



        for (int i =rowCount ; i>=0 ; i--)
        {
            QListWidgetItem *name = new QListWidgetItem;
            name = ui->listWidget_EQUI->takeItem(i);
            ui->listWidget_EQUI->removeItemWidget(name);
        }

        QSqlQuery* qry=e.afficherEquipementListe();



        rowCount = 0;
        while(qry->next())
        {

            QListWidgetItem *Name = new QListWidgetItem;


            Name->setText(qry->value(0).toString());
            ui->listWidget_EQUI->insertItem(rowCount,Name);
            rowCount++;



        }


}

///////////////////////////////////ajouter medicament
void MainWindow::on_pushButton_ajouter_clicked()
{
    QString df,dlc;
    QSqlQuery query;



    df = ui->dateEdit_DF->date().toString("dd-MM-yyyy");
    dlc = ui->dateEdit_DLC->date().toString("dd-MM-yyyy");

    medicament m(ui->nom_med->text(),ui->description->text(),df,dlc,ui->prix->text(),ui->quantite->text());
    int prix= m.getPrix().toInt();
    int quantite= m.getQuantite().toInt();

    if ((m.getNom()=="")||(m.getDescription()=="")||(m.getPrix()=="")||(m.getQuantite()==""))
    {
        QMessageBox::critical(nullptr, QObject::tr("Error"),
                              QObject::tr("Informations manquantes.\n"
                                          "Click Cancel to try again."), QMessageBox::Cancel);
    }
    else if(prix==0)
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("il faut un prix .\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else if(quantite==0)
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("il faut un entier .\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }

    else
    {



            if(m.chercher_nom_exist(m.getNom())==0)
            {
                bool test=m.ajouter_medicament();
                if(test)
                {
                    qDebug ()<< "ajout medicament" << endl;
                }

            }
            else
            {
                QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                         QObject::tr("medicament deja existant.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
            }


    }
    ui->stackedWidget->setCurrentIndex(1);
    afficher_medicament();

    ui->nom_med->setText("");
    ui->prix->setText("");
    ui->quantite->setText("");
    ui->description->setText("");
    QString df_1="01-01-2015",dlc_1="01-01-2020";
    ui->dateEdit_DF->date().toString(df_1);
    ui->dateEdit_DLC->date().toString(dlc_1);


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



/////////////////////////////////////////////////recherche des medicaments
void MainWindow::on_chercher_med_textChanged(const QString &arg1)
{
    QString searchText = ui->chercher_med->text();
    int listWidgetSize = ui->listWidget_MED->count();

    for (int k1 = 0; k1 < listWidgetSize; ++k1)
    {
        if (ui->listWidget_MED->item(k1)->text().contains(arg1))
        {
            ui->listWidget_MED->item(k1)->setHidden(false);
        }
        else
        {
            ui->listWidget_MED->item(k1)->setHidden(true);
        }
    }

}

//////////////////////////////////////////////////////////////afficher medicament
void MainWindow::on_listWidget_MED_itemDoubleClicked(QListWidgetItem *item)
{
    medicament m;
        ui->stackedWidget->setCurrentIndex(5);
        QString nom = item->text();
        QSqlQuery qry=m.afficher_med_double_clicked(nom);

        QString df = qry.value(2).toString();
        QString dlc = qry.value(3).toString();
        QDate df_date = QDate::fromString(df,"dd-MM-yyyy");
        QDate dlc_date = QDate::fromString(dlc,"dd-MM-yyyy");


        ui->dateEdit_DF2->setDate(df_date);
        ui->dateEdit_4->setDate(dlc_date);
        QString nom_m,des,prix,quantite;
        nom_m= qry.value(0).toString();
        ui->lineEdit_nomMed->setText(nom_m);
        ui->lineEdit_description->setText(qry.value(1).toString());
        ui->lineEdit_prix->setText(qry.value(4).toString());
        ui->lineEdit_quantite->setText(qry.value(5).toString());

}



void MainWindow::on_ModifierMedicament_clicked()
{

    medicament m;
    QString nom_init = ui->listWidget_MED->currentItem()->text();
    int count=m.chercher_nomMedicament_a_modifier(nom_init);
        if (count == 1)
        {
            QString df= ui->dateEdit_DF2->date().toString("dd-MM-yyyy") ;
            QString dlc= ui->dateEdit_4->date().toString("dd-MM-yyyy") ;
            QString nom,desc,prix,quantite;
            nom= ui->lineEdit_nomMed->text();
            desc = ui->lineEdit_description->text();
            prix = ui->lineEdit_prix->text();
            quantite = ui->lineEdit_quantite->text();
            medicament m(nom,desc,df,dlc,prix,quantite);

            if ( nom == "" || desc == "" || prix == ""|| quantite == "")
            {
                QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                         QObject::tr("il y a une information vide.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
            }
            else
            {
                bool test=m.modifier_medicament(nom_init);

                if ( !test)
                {
                    QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                             QObject::tr("erreur a la modification.\n"
                                                         "Click Cancel to exit."), QMessageBox::Cancel);
                }

                ui->stackedWidget->setCurrentIndex(1);


            }

        }
        else
        {
            QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                     QObject::tr("name not found.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
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
                                 QObject::tr("dispo et non dispo ne peuvent pas etre cocher en meme temps.\n"
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
                                 QObject::tr("bon et mauvais ne peuvent pas etre cocher en meme temps.\n"
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
                                 QObject::tr("nom manquant.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }

    if (( etat == "0" || etat == "1" )&& (dispo == "0" || dispo == "1") && ( name != ""))
    {
        qDebug() << etat << name << dispo << endl;
        equipement e(name,etat,dispo);


            if(e.chercher_nom_exist(e.get_nom())==0)
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
                QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                         QObject::tr("equipement deja existant.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
            }
        }
        afficher_equipement();
        ui->stackedWidget->setCurrentIndex(2);


    ui->nom_equi->setText("");
    ui->checkBox_bon->setChecked(false);
    ui->checkBox_mauvais->setChecked(false);
    ui->checkBox_dispo->setChecked(false);
    ui->checkBox_nondispo->setChecked(false);
}

void MainWindow::on_chercher_equi_textChanged(const QString &arg1)
{
    QString searchText = ui->chercher_equi->text();
    int listWidgetSize = ui->listWidget_EQUI->count();

    for (int k1 = 0; k1 < listWidgetSize; ++k1)
    {
        if (ui->listWidget_EQUI->item(k1)->text().contains(arg1))
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
{   equipement e;
    ui->stackedWidget->setCurrentIndex(6);
    QString nom = item->text();
    QSqlQuery qry=e.afficher_eq_double_clicked(nom);


            QString nom_e,etat,dispo;
            nom_e= qry.value(0).toString();
            ui->lineEdit_nomEqui->setText(nom_e);

            dispo = qry.value(1).toString();

            if ( dispo == "0")
            {
                ui->non_dispo->setChecked(true);
            }
            else
            {
                ui->dispo->setChecked(true);
            }

            etat = qry.value(2).toString();

            if ( etat == "0")
            {
                ui->mauvais->setChecked(true);
            }
            else
            {
                ui->bon->setChecked(true);
            }


}

void MainWindow::on_ModifierEquipement_clicked()
{
    equipement e;
    QString nom_init = ui->listWidget_EQUI->currentItem()->text();
    int count = e.chercher_nomEquipement_a_modifier(nom_init);
        if (count == 1)
        {
            QString nom="",dispo="",etat="";
            nom= ui->lineEdit_nomEqui->text();

            if ( !ui->dispo->isChecked() && !ui->non_dispo->isChecked() )
            {
                QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                         QObject::tr("choisir option de disponibilites.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
            }
            else if ( ui->dispo->isChecked() && ui->non_dispo->isChecked() )
            {
                QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                         QObject::tr("dispo et non dispo ne peuvent pas etre cocher en meme temps.\n"
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
                                         QObject::tr("bon et mauvais ne peuvent pas etre cocher en meme temps.\n"
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
                                         QObject::tr("nom or disponibilite ou etat est vide.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
            }
            else
            {
                equipement eq(nom,etat,dispo);
                bool test = eq.modifier_equipement(nom_init);

                if(!test)
                {
                    QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                             QObject::tr("erreur modifier l'equipement.\n"
                                                         "Click Cancel to exit."), QMessageBox::Cancel);
                }

                ui->stackedWidget->setCurrentIndex(2);


            }

        }
        else
        {
            QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                     QObject::tr("nom non trouve.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
        }




    ui->lineEdit_nomEqui->setText("");
    ui->bon->setChecked(false);
    ui->mauvais->setChecked(false);
    ui->dispo->setChecked(false);
    ui->non_dispo->setChecked(false);

    afficher_equipement();
}




void MainWindow::on_trier_med_clicked()
{
    medicament m;


        int rowCount = m.clear_liste_med();

        for (int i =rowCount ; i>=0 ; i--)
        {
            QListWidgetItem *name = new QListWidgetItem;
            name = ui->listWidget_MED->takeItem(i);
            ui->listWidget_MED->removeItemWidget(name);
        }

        QSqlQuery* qry = m.trier_liste_med();
        rowCount = 0;
        while(qry->next())
        {

            QListWidgetItem *Name = new QListWidgetItem;


            Name->setText(qry->value(0).toString());
            ui->listWidget_MED->insertItem(rowCount,Name);
            rowCount++;



        }
}




void MainWindow::on_trier_eq_clicked()
{
    equipement e;
    int rowCount = e.clear_liste_eq();

        for (int i =rowCount ; i>=0 ; i--)
        {
            QListWidgetItem *name = new QListWidgetItem;
            name = ui->listWidget_EQUI->takeItem(i);
            ui->listWidget_EQUI->removeItemWidget(name);
        }

        QSqlQuery* qry=e.trier_liste_equi();
        rowCount = 0;
        while(qry->next())
        {

            QListWidgetItem *Name = new QListWidgetItem;


            Name->setText(qry->value(0).toString());
            ui->listWidget_EQUI->insertItem(rowCount,Name);
            rowCount++;



        }
}





void MainWindow::on_imprimer_clicked()
{
    QPrinter printer;
    printer.setPrinterName("my_printer_machine");
    QPrintDialog dialog(&printer,this);
    if ( dialog.exec()== QDialog::Rejected) return ;

    QString etat,dispo,nom;

    nom = ui->lineEdit_nomEqui->text();

    if ( !ui->dispo->isChecked() && !ui->non_dispo->isChecked() )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("choisir option de disponibilites.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else if ( ui->dispo->isChecked() && ui->non_dispo->isChecked() )
    {
        QMessageBox::information(nullptr, QObject::tr("ERROR"),
                                 QObject::tr("dispo et non dispo ne peuvent pas etre cocher en meme temps.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else if ( ui->dispo->isChecked() )
    {
        dispo = "disponible";
    }
    else  if ( ui->non_dispo->isChecked() )
    {
        dispo = "non disponible";
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
                                 QObject::tr("bon et mauvais ne peuvent pas etre cocher en meme temps.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else if ( ui->bon->isChecked() )
    {
        etat = "bon";
    }
    else if ( ui->mauvais->isChecked() )
    {
        etat = "mauvais";
    }

    equipement e1(nom,etat,dispo);

    QString text = "Nom Equipement :" + nom + "\n"
                        + " Son Etat de fonctionnement est : " + etat + "\n"
                        + " Son disponibilite est : " + dispo ;



    QTextEdit y;
    y.setPlainText(text);

    y.print(&printer);


}


void MainWindow::statistique_med()
{
    QPieSeries *series = new QPieSeries();
    QSqlQuery qry("SELECT * FROM MEDICAMENTS");

        while(qry.next())
        {
            series->append(qry.value(0).toString(),qry.value(5).toInt());
        }



    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Quantitees Medicaments");

    QChartView *chartview = new QChartView(chart);
    chartview->setParent(ui->horizontalFrame);

}



////////////////////////////////button statistique
void MainWindow::on_pushButton_clicked()
{
    statistique_med();
    ui->stackedWidget->setCurrentIndex(7);

}


/////////////////////////////////button retour
void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
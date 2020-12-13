#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connection.h"
#include "service.h"
#include "chambre.h"

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>

#include <QMessageBox>
#include <QPaintEvent>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QPixmap>
#define CARACTERES_ETRANGERS "~{}[]()|-`'^ç@_]\"°01234567890+=£$*µ/§!?,.&#;><"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statistiques();
    ui->stackedWidget->setCurrentIndex(0);
    ui->tableView_services->setModel(ser.afficher_ListeService());
    ui->tableView_chambres->setModel(cham.afficher_ListeChambre());
    QPixmap pic_service(":service.png");
   // QPixmap pic_chambre(":chambre.png");
    //QPropertyAnimation *animation1;
    QPropertyAnimation *animation2;

    /*int w1=ui->animation_chambre->width();
    int h1=ui->animation_chambre->height();*/
    int w2=ui->animation_service->width();
    int h2=ui->animation_service->height();

    ui->animation_service->setPixmap(pic_service.scaled(h2,w2,Qt::KeepAspectRatio));
   // ui->animation_chambre->setPixmap(pic_chambre.scaled(h1,w1,Qt::KeepAspectRatio));

    /*animation1 = new QPropertyAnimation(ui->animation_chambre, "geometry");
                animation1->setDuration(3000);
                animation1->setStartValue(ui->animation_chambre->geometry());
                animation1->setEndValue(QRect(0,0,603,412));
                animation1->start();*/
    animation2 = new QPropertyAnimation(ui->animation_service, "geometry");
                animation2->setDuration(3000);
                animation2->setStartValue(ui->animation_service->geometry());
                animation2->setEndValue(QRect(1,197,579,13 ));
                animation2->start();



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_menuChambres_clicked()
{
    ui->tableView_chambres->setModel(cham.afficher_ListeChambre());
    ui->stackedWidget->setCurrentIndex(5);
}
void MainWindow::on_pushButton_menuServices_clicked()
{
    ui->tableView_services->setModel(ser.afficher_ListeService());
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_ajouter_service_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->comboBox_AjoutEquip->clear();
    ui->comboBox_AjoutStaff1->clear();
    ui->comboBox_AjoutStaff2->clear();
    ui->comboBox_AjoutStaff3->clear();
    ui->lineEdit_ajoutNomService->clear();
    QSqlQuery qry,qry2;
    qry.prepare("select USERNAME from emp");
    qry.exec();
    while(qry.next()){
    ui->comboBox_AjoutStaff1->addItem(qry.value(0).toString());
    ui->comboBox_AjoutStaff2->addItem(qry.value(0).toString());
    ui->comboBox_AjoutStaff3->addItem(qry.value(0).toString());
    }
    qry2.prepare("SELECT NOM FROM EQUIPEMENT");
    qry2.exec();
    while(qry2.next())
    {
        ui->comboBox_AjoutEquip->addItem(qry2.value(0).toString());
    }



}

void MainWindow::on_supprimer_service_clicked()
{
    QString id =ui->tableView_services->model()->index(ui->tableView_services->currentIndex().row(),0).data().toString();
    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Supprimer", "Etes vous sur de supprimer ce service?",
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {
          bool test=ser.supprimer_service(id);
          if(test)
          {
    ui->tableView_services->setModel(ser.afficher_ListeService());
    QMessageBox::information(nullptr,"Suppression","Service supprimé");

          }
      }
}
void MainWindow::on_ajouter_chambre_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    ui->comboBox_AjoutEmplacement->clear();
    ui->comboBox_AjoutSurveillant->clear();
    ui->lineEdit_AjoutNumero->clear();
    ui->spinBox_AjoutLits->clear();
    //ui->comboBox_AjoutType->clear();
    QSqlQuery qry1,qry2;
    qry1.prepare("select nom from services");
    qry1.exec();
    while(qry1.next())
    {
        ui->comboBox_AjoutEmplacement->addItem(qry1.value(0).toString());
    }
    qry2.prepare("select USERNAME from emp");
    qry2.exec();
    while(qry2.next())
    {
        ui->comboBox_AjoutSurveillant->addItem(qry2.value(0).toString());
    }

}
void MainWindow::on_supprimer_chambre_clicked()
{
    QString id =ui->tableView_chambres->model()->index(ui->tableView_chambres->currentIndex().row(),2).data().toString();
    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Supprimer", "Etes vous sur de supprimer cette chambre?",
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {
          bool test=cham.supprimer_chambre(id);
          if(test)
          {
    ui->tableView_chambres->setModel(cham.afficher_ListeChambre());
    QMessageBox::information(nullptr,"Suppression","Chambre supprimé");}
      }
}
void MainWindow::on_pushButton_Services_clicked()
{
    ui->tableView_services->setModel(ser.afficher_ListeService());
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_pushButton_Chambres_clicked()
{
    ui->tableView_chambres->setModel(cham.afficher_ListeChambre());
    ui->stackedWidget->setCurrentIndex(5);

}
void MainWindow::on_pushButton_Menu_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_pushButton_services_clicked()
{
    ui->tableView_services->setModel(ser.afficher_ListeService());
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_pushButton_Chambre_clicked()
{
    ui->tableView_chambres->setModel(cham.afficher_ListeChambre());
    ui->stackedWidget->setCurrentIndex(5);
}
void MainWindow::on_pushButton_menu_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_pushButton_AnnulerAjoutService_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_AnnulerModifService_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}
void MainWindow::on_pushButton_AnnulerAjoutChambre_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

/// controle de saisie nom du service
void MainWindow::on_lineEdit_ajoutNomService_textEdited(const QString &arg1)
{
    QString texte=arg1;
           QString caracteresEtrangers(CARACTERES_ETRANGERS);
           for (int i=0; i<texte.size(); i++)
               foreach (const QChar &y, caracteresEtrangers)
                   if(texte.at(i)==y)
                       texte[i]=' ';

           ui->lineEdit_ajoutNomService->setText(texte);
}

void MainWindow::on_pushButton_AjouterService_clicked()
{

   QString nom=ui->lineEdit_ajoutNomService->text();
   QString staff1=ui->comboBox_AjoutStaff1->currentText();
   QString staff2=ui->comboBox_AjoutStaff2->currentText();
   QString staff3=ui->comboBox_AjoutStaff3->currentText();
   QString nom_equipement=ui->comboBox_AjoutEquip->currentText();
   service s(nom,staff1,staff2,staff3,nom_equipement);
   bool controle=s.controle_saisie_serviceAjout(s);
   if(controle)
   {
       QMessageBox::critical(nullptr,QObject::tr("attontion"),
                                        QObject::tr("Champs non remplis.\n Taper CANCEL pour les remplir"),
                                        QMessageBox::Cancel);
   }
   else
   {
       bool test=s.ajouter_service();

    if(test)
    {
        ui->tableView_services->setModel(ser.afficher_ListeService());
        QMessageBox::information(nullptr,QObject::tr("Success"),
                                         QObject::tr("Ajout effectué.\n Taper OK pour continuer"),
                                         QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Echec"),
                                         QObject::tr("Ajout non effectué.\n Taper CANCEL pour sortir"),
                                         QMessageBox::Cancel);

    }
    ui->stackedWidget->setCurrentIndex(1);

   }

}






void MainWindow::on_pushButton_AjoutChambre_clicked()
{

   QString emplacement=ui->comboBox_AjoutEmplacement->currentText();
   QString type=ui->comboBox_AjoutType->currentText();
   QString numero=ui->lineEdit_AjoutNumero->text();
   QString nom_surveillant=ui->comboBox_AjoutSurveillant->currentText();
   QString nombre_lits=ui->spinBox_AjoutLits->text();
   chambre ch(emplacement,type,numero,nombre_lits,nom_surveillant);

   bool controle=cham.controle_saisieChambre(ch);
   if(controle)
   {
       QMessageBox::critical(nullptr,QObject::tr("attention"),
                                        QObject::tr("Champs non remplis.\n Taper CANCEL pour les remplir"),
                                        QMessageBox::Cancel);
   }
   if(ch.get_nombre_lits()=="0")
   {
       QMessageBox::critical(nullptr,QObject::tr("attention"),
                                        QObject::tr("Nombre de lits ne doit pas etre égal à 0.\n Taper CANCEL pour changer "),
                                        QMessageBox::Cancel);
   }
   else
   {
   bool test=ch.ajouter_chambre();
   if(test)
   {
       ui->tableView_chambres->setModel(cham.afficher_ListeChambre());
       QMessageBox::information(nullptr,QObject::tr("Success"),
                                        QObject::tr("Ajout chambre effectué.\n Taper OK pour continuer"),
                                        QMessageBox::Ok);

   }
   else
   {
       QMessageBox::critical(nullptr,QObject::tr("Echec"),
                                        QObject::tr("Ajout chambre non effectué.\n Taper CANCEL pour sortir"),
                                        QMessageBox::Cancel);
   }
   ui->stackedWidget->setCurrentIndex(5);
   }

}






void MainWindow::on_tableView_services_activated(const QModelIndex &index)
{
    QString val=ui->tableView_services->model()->data(index).toString();
    aux_ser=val;
    QSqlQuery* query=ser.afficher_service(val);
    if(query->exec())
    {
        while(query->next())
        {
            ui->lineEdit_AffNomService->setText(query->value(0).toString());
            ui->lineEdit_AffStaff1->setText(query->value(1).toString());
            ui->lineEdit_AffStaff2->setText(query->value(2).toString());
            ui->lineEdit_AffStaff3->setText(query->value(3).toString());
            ui->lineEdit_AffEquipement->setText(query->value(4).toString());
        }

        ui->stackedWidget->setCurrentIndex(4);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("echec"),
                              QObject::tr("Affichage du service non effectué.\n Taper CANCEL pour quitter"),
                              QMessageBox::Cancel  );
    delete query;
}



void MainWindow::on_tableView_chambres_activated(const QModelIndex &index)
{
    QString val=ui->tableView_chambres->model()->data(index).toString();
    aux_cham=val;
    QSqlQuery* query=cham.afficher_chambre(val);
    if(query->exec())
    {
        while(query->next())
        {
           ui->lineEdit_AffEmplacement->setText(query->value(0).toString());
           ui->lineEdit_AffType->setText(query->value(1).toString());
           ui->lineEdit_AffNumero->setText(query->value(2).toString());
           ui->lineEdit_AffNombreLits->setText(query->value(3).toString());
           ui->lineEdit_AffSurveillant->setText(query->value(4).toString());

        }
        ui->stackedWidget->setCurrentIndex(7);
    }
    else

            QMessageBox::critical(nullptr,QObject::tr("echec"),
                                  QObject::tr("Affichage de la chambre non effectué.\n Taper CANCEL pour quitter"),
                                  QMessageBox::Cancel  );
    delete query;
}

void MainWindow::on_pushButton_RetourAffChambre_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}

void MainWindow::on_pushButton_RetourAffService_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_modifierServiceAff_clicked()
{
    QSqlQuery query,query1,query2;
    query.prepare("SELECT * FROM SERVICES WHERE NOM='"+aux_ser+"'");
    query1.prepare("select USERNAME from emp");
    query1.exec();
    query2.prepare("SELECT NOM FROM EQUIPEMENT");
    query2.exec();
    if (query.exec())
    {
        while(query.next())
        {
    ui->lineEdit_ModifNomService->setText(query.value(0).toString());
        }
        while(query1.next())
        {
    ui->comboBox_ModifStaf1->addItem(query1.value(0).toString());
    ui->comboBox_ModifStaf2->addItem(query1.value(0).toString());
    ui->comboBox_ModifStaf3->addItem(query1.value(0).toString());
        }
        while(query2.next())
        {
     ui->comboBox_ModifEquip->addItem(query2.value(0).toString());
        }

    }
    ui->stackedWidget->setCurrentIndex(3);

}

void MainWindow::on_pushButton_triServices_clicked()
{
    ui->tableView_services->setModel(ser.trier_service());
}


void MainWindow::on_pushButton_modifService_clicked()
{


    QString nom=ui->lineEdit_ModifNomService->text();
    QString staff1=ui->comboBox_ModifStaf1->currentText();
    QString staff2=ui->comboBox_ModifStaf2->currentText();
    QString staff3=ui->comboBox_ModifStaf3->currentText();
    QString nom_equipement=ui->comboBox_ModifEquip->currentText();

    service s(nom,staff1,staff2,staff3,nom_equipement);
    bool test=s.modifier_service(aux_ser);
    if(test)
    {
        ui->tableView_services->setModel(ser.afficher_ListeService());
        QMessageBox::information(nullptr,QObject::tr("Success"),
                                         QObject::tr("Mise à jour effectuée.\n Taper OK pour continuer"),
                                         QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("echec"),
                                         QObject::tr("Mise à jour non effectuée.\n Taper CANCEL pour quitter"),
                                         QMessageBox::Cancel);
    }
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_ModifChambre_clicked()
{
    QSqlQuery query,query1,query2;
    query.prepare("SELECT * FROM CHAMBRE WHERE EMPLACEMENT='"+aux_cham+"'");
    query1.prepare("select nom from services");
    query1.exec();
    query2.prepare("select USERNAME from emp ");
    query2.exec();
    if (query.exec())
    {
        while(query.next())
        {
            ui->lineEdit_ModifNumero->setText(query.value(2).toString());
            ui->lineEdit_ModifNombreLits->setText(query.value(3).toString());
        }
        while(query1.next())
        {
            ui->comboBox_ModifEmplacement->addItem(query1.value(0).toString());
        }
        while(query2.next())
        {
            ui->comboBox_ModifSurveillant->addItem(query2.value(0).toString());
        }
    }
    ui->stackedWidget->setCurrentIndex(8);

}



void MainWindow::on_pushButton_annulerModifChambre_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);

}


void MainWindow::on_pushButton_ModifierChambre_clicked()
{
    QString emplacement=ui->comboBox_ModifEmplacement->currentText();
    QString type=ui->comboBox_ModifType->currentText();
    QString new_numero=ui->lineEdit_ModifNumero->text();
    QString nombre_lits=ui->lineEdit_ModifNombreLits->text();
    QString nom_surveillant=ui->comboBox_ModifSurveillant->currentText();
    chambre cham(emplacement,type,new_numero,nombre_lits,nom_surveillant);
    bool test=cham.modifier_chambre(aux_cham);
    if(test)
    {
        ui->tableView_chambres->setModel(cham.afficher_ListeChambre());
        QMessageBox::information(nullptr,QObject::tr("success"),
                                 QObject::tr("Mise à jour effectuée\n.Taper OK pour continuer"),
                                 QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("echec"),
                                 QObject::tr("Mise à jour non effectuée\n.Taper CANCEL pour sortir"),
                                 QMessageBox::Cancel);
    }
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_pushButton_imprimerService_clicked()
{
    QString nom=ui->lineEdit_AffNomService->text();
    QString staff1=ui->lineEdit_AffStaff1->text();
    QString staff2=ui->lineEdit_AffStaff2->text();
    QString staff3=ui->lineEdit_AffStaff3->text();
    QString equipement=ui->lineEdit_AffEquipement->text();
    service s(nom,staff1,staff2,staff3,equipement);


    s.printPDF_service();
    ui->stackedWidget->setCurrentIndex(5);
}



void MainWindow::on_pushButton_rechercherChambre_clicked()
{
    QString rech=ui->lineEdit_rechercherChambre->text();
    if(rech=="")
        ui->tableView_chambres->setModel(cham.afficher_ListeChambre());
    else
    ui->tableView_chambres->setModel(cham.rechercher_chambre(rech));

}
void MainWindow::on_pushButton_triChambre_clicked()
{
    ui->tableView_chambres->setModel(cham.trier_chambre());
}

void MainWindow::on_pushButton_rechercherService_clicked()
{
    QString rech=ui->lineEdit_rechercheServices->text();
    if(rech=="")
        ui->tableView_services->setModel(ser.afficher_ListeService());
    else
    ui->tableView_services->setModel(ser.rechercher_service(rech));

}

void MainWindow::statistiques()
{
    QPieSeries *series = new QPieSeries();
       QSqlQuery qry("SELECT * FROM CHAMBRE");
           QMap<QString,int >qq;
           QVector <QString> names;
           while(qry.next())
           {
               if(qq[qry.value(0).toString()]==0)
                   names.push_back(qry.value(0).toString());
               qq[qry.value(0).toString()]+=qry.value(3).toInt();

           }
           for(int i=0;i< names.size();i++)
               series->append(names[i],qq[names[i]]);

       QChart *chart = new QChart();
       chart->addSeries(series);
       chart->setTitle("Nombre de lits dans les services");

       QChartView *chartview = new QChartView(chart);
       chartview->setParent(ui->stat_chambre);

}
void MainWindow::on_pushButton_StatService_clicked()
{

    ui->stackedWidget->setCurrentIndex(9);
    statistiques();

}

void MainWindow::on_pushButton_backstat_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


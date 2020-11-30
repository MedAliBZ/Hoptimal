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
    ui->stackedWidget->setCurrentIndex(6);
}
void MainWindow::on_pushButton_menuServices_clicked()
{
    ui->tableView_services->setModel(ser.afficher_ListeService());
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_ajouter_service_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_supprimer_service_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
void MainWindow::on_ajouter_chambre_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}
void MainWindow::on_supprimer_chambre_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}
void MainWindow::on_pushButton_Services_clicked()
{
    ui->tableView_services->setModel(ser.afficher_ListeService());
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_pushButton_Chambres_clicked()
{
    ui->tableView_chambres->setModel(cham.afficher_ListeChambre());
    ui->stackedWidget->setCurrentIndex(6);

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
    ui->stackedWidget->setCurrentIndex(6);
}
void MainWindow::on_pushButton_menu_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_pushButton_AnnulerAjoutService_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_pushButton_annulerSuppService_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_pushButton_AnnulerModifService_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_pushButton_AnnulerAjoutChambre_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}
void MainWindow::on_pushButton_AnnulerSuppChambre_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}



void MainWindow::on_pushButton_AjouterService_clicked()
{

   QString nom=ui->lineEdit_ajoutNomService->text();
   QString staff1=ui->lineEdit_AjoutStaff1->text();
   QString staff2=ui->lineEdit_AjoutStaff2->text();
   QString staff3=ui->lineEdit_AjoutStaff3->text();
   service s(nom,staff1,staff2,staff3);
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

void MainWindow::on_pushButton_SupprimerService_clicked()
{
    QString nom_supp=ui->lineEdit_SuppNomService->text();
    if(nom_supp=="")
    {
        QMessageBox::critical(nullptr, QObject::tr("Attention"),
                              QObject::tr("champ vide.\n"
                                          "Taper CANCEL pour remplir."), QMessageBox::Cancel);
    }
    else
    {
    bool test=ser.supprimer_service(nom_supp);
    if(test)
    {
        ui->tableView_services->setModel(ser.afficher_ListeService());
        QMessageBox::information(nullptr,QObject::tr("Success"),
                                         QObject::tr("Suppression effectuée.\n Taper OK pour continuer"),
                                         QMessageBox::Ok);


    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Echec"),
                                         QObject::tr("Suppression non effectuée.\n Taper CANCEL pour sortir"),
                                         QMessageBox::Cancel);
    }
    ui->stackedWidget->setCurrentIndex(1);

    }

}




void MainWindow::on_pushButton_AjoutChambre_clicked()
{

   QString emplacement=ui->lineEdit_AjoutEmplacement->text();
   QString type=ui->comboBox_AjoutType->currentText();
   QString numero=ui->lineEdit_AjoutNumero->text();
   QString nom_surveillant=ui->lineEdit_AjoutSurveillant->text();
   QString nombre_lits=ui->spinBox_AjoutLits->text();
   chambre ch(emplacement,type,numero,nombre_lits,nom_surveillant);

   bool controle=cham.controle_saisieChambre(ch);
   if(controle)
   {
       QMessageBox::critical(nullptr,QObject::tr("attention"),
                                        QObject::tr("Champs non remplis.\n Taper CANCEL pour les remplir"),
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
   ui->stackedWidget->setCurrentIndex(6);
   }

}


void MainWindow::on_pushButton_SupprimerChambre_clicked()
{
    QString numero=ui->lineEdit_SuppChambre->text();
    bool test=cham.supprimer_chambre(numero);
    if(numero=="")
    {
        QMessageBox::critical(nullptr, QObject::tr("Attention"),
                              QObject::tr("Champ vide.\n"
                                          "Taper CANCEL pour remplir."), QMessageBox::Cancel);
    }
    else
    {
    if(test)
    {
        QMessageBox::information(nullptr,QObject::tr("Success"),
                                         QObject::tr("Suppression effectuée.\n Taper OK pour continuer"),
                                         QMessageBox::Ok);
        ui->tableView_chambres->setModel(cham.afficher_ListeChambre());


    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("Echec"),
                                         QObject::tr("Suppression non effectuée.\n Taper CANCEL pour sortir"),
                                         QMessageBox::Cancel);
    }
    }
    ui->stackedWidget->setCurrentIndex(6);

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
        }

        ui->stackedWidget->setCurrentIndex(5);
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
        ui->stackedWidget->setCurrentIndex(9);
    }
    else

            QMessageBox::critical(nullptr,QObject::tr("echec"),
                                  QObject::tr("Affichage de la chambre non effectué.\n Taper CANCEL pour quitter"),
                                  QMessageBox::Cancel  );
    delete query;
}

void MainWindow::on_pushButton_RetourAffChambre_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);

}

void MainWindow::on_pushButton_RetourAffService_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_modifierServiceAff_clicked()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM SERVICES WHERE NOM='"+aux_ser+"'");
    if (query.exec())
    {
        while(query.next())
        {
    ui->lineEdit_ModifNomService->setText(query.value(0).toString());
    ui->lineEdit_ModifStaff1->setText(query.value(1).toString());
    ui->lineEdit_ModifStaff2->setText(query.value(2).toString());
    ui->lineEdit_ModifStaff3->setText(query.value(3).toString());
        }
    }
    ui->stackedWidget->setCurrentIndex(4);

}

void MainWindow::on_pushButton_triServices_clicked()
{
    ui->tableView_services->setModel(ser.trier_service());
}


void MainWindow::on_pushButton_modifService_clicked()
{


    QString nom=ui->lineEdit_ModifNomService->text();
    QString staff1=ui->lineEdit_ModifStaff1->text();
    QString staff2=ui->lineEdit_ModifStaff2->text();
    QString staff3=ui->lineEdit_ModifStaff3->text();

    service s(nom,staff1,staff2,staff3);
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
    QSqlQuery query;
    query.prepare("SELECT * FROM CHAMBRE WHERE NUMERO='"+aux_cham+"'");
    if (query.exec())
    {
        while(query.next())
        {
            ui->lineEdit_ModifEmplacement->setText(query.value(0).toString());
            ui->lineEdit_ModifType->setText(query.value(1).toString());
            ui->lineEdit_ModifNumero->setText(query.value(2).toString());
            ui->lineEdit_ModifNombreLits->setText(query.value(3).toString());
            ui->lineEdit_ModifSurveillant->setText(query.value(4).toString());
        }
    }
    ui->stackedWidget->setCurrentIndex(10);

}



void MainWindow::on_pushButton_annulerModifChambre_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);

}


void MainWindow::on_pushButton_ModifierChambre_clicked()
{
    QString emplacement=ui->lineEdit_ModifEmplacement->text();
    QString type=ui->lineEdit_ModifType->text();
    QString new_numero=ui->lineEdit_ModifNumero->text();
    QString nombre_lits=ui->lineEdit_ModifNombreLits->text();
    QString nom_surveillant=ui->lineEdit_ModifSurveillant->text();
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
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_pushButton_imprimerService_clicked()
{
    QString nom=ui->lineEdit_AffNomService->text();
    QString staff1=ui->lineEdit_AffStaff1->text();
    QString staff2=ui->lineEdit_AffStaff2->text();
    QString staff3=ui->lineEdit_AffStaff3->text();
    service s(nom,staff1,staff2,staff3);


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

           while(qry.next())
           {
               series->append(qry.value(0).toString(),qry.value(3).toInt());
           }



       QChart *chart = new QChart();
       chart->addSeries(series);
       chart->setTitle("Nombre de lits dans les chambres");

       QChartView *chartview = new QChartView(chart);
       chartview->setParent(ui->stat_chambre);

}
void MainWindow::on_pushButton_StatService_clicked()
{

    ui->stackedWidget->setCurrentIndex(11);
    statistiques();

}

void MainWindow::on_pushButton_backstat_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

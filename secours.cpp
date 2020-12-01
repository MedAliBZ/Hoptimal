#include "secours.h"
#include "ui_secours.h"
#include <QPixmap>
#include <QMessageBox>
#include "ambulance.h"
#include "mission.h"




secours::secours(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::secours)
{
    ui->setupUi(this);
    ui->comboBox->addItem(QIcon(":/recource/image/license-plate.png"),"Matricule");
    ui->comboBox->addItem(QIcon(":/recource/image/staff.png"),"Ambulancier");
    ui->comboBox2->addItem(QIcon(":/recource/image/id.png"),"ID");
    ui->comboBox2->addItem(QIcon(":/recource/image/city-map.png"),"Destination");
    QPixmap pix("C:/Users/Walid/Downloads/qt pic/hoppic.png");
    ui->label_pic->setPixmap(pix.scaled(200,200,Qt::KeepAspectRatio));


}

secours::~secours()
{
       ui->tabambulance->setModel(tmpambulance.Afficher_ambulance());
     ui->tabmission->setModel(tmpmission.afficher_mission());
    delete ui;
}



void secours::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void secours::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void secours::on_pushButton_5_clicked()
{
   ui->stackedWidget->setCurrentIndex(0);
}

void secours::on_pushButton_3_clicked()
{
   ui->stackedWidget->setCurrentIndex(2);
}

void secours::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void secours::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void secours::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void secours::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void secours::on_pushButton_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void secours::on_pushButton_13_clicked()
{

    int immatricule= ui->lineEdit_3->text().toInt();
    QString etat= ui->lineEdit_6->text();
    QString ambulancier= ui->lineEdit_4->text();
    QString materiel_medical= ui->lineEdit_5->text();



        ambulance a (immatricule,etat,ambulancier,materiel_medical);
        bool test=a.ajouter();
    if (test)
    {
        ui->tabambulance->setModel(tmpambulance.Afficher_ambulance());

        QMessageBox::information(nullptr,QObject::tr("ajouter une ambulance"),QObject::tr("ambulance ajouté.\n"
                                                                                       "click cancel to exit."),QMessageBox::Cancel);

    }
}



void secours::on_pushButton_15_clicked()
{
    int id=ui->lineEdit_9->text().toInt();
    QString destination=ui->lineEdit_7->text();
    QString heure=ui->lineEdit_8->text();

    mission m(id,destination,heure);
    bool test=m.ajouter();

    if (test)
    {
        ui->tabmission->setModel(tmpmission.afficher_mission());

        QMessageBox::information(nullptr,QObject::tr("ajouter une mission"),QObject::tr("mission ajouté.\n"
                                                                                       "click cancel to exit."),QMessageBox::Cancel);

    }
}

void secours::on_pushButton_18_clicked()
{
    int immatricule=ui->lineEdit_3->text().toInt();
    bool test=tmpambulance.Supprimer_ambulance(immatricule);
    if(test)
    {
        ui->tabambulance->setModel(tmpambulance.Afficher_ambulance());
        QMessageBox::information(nullptr,QObject::tr("supprimer une ambulance"),QObject::tr("ambulance supprimé.\n"
                                                                                       "click cancel to exit."),QMessageBox::Cancel);
    }
}

void secours::on_pushButton_20_clicked()
{
    int id=ui->lineEdit_9->text().toInt();
    bool test=tmpmission.supprimer_mission(id);
    if(test)
    {
        ui->tabmission->setModel(tmpmission.afficher_mission());
        QMessageBox::information(nullptr,QObject::tr("supprimer une mission"),QObject::tr("mission supprimé.\n"
                                                                                       "click cancel to exit."),QMessageBox::Cancel);
    }
}

void secours::on_pushButton_9_clicked()
{
    QString text;

     text=ui->lineEdit->text();

     if(text == "")

     {

         ui->tabambulance->setModel(tmpambulance.Afficher_ambulance());

     }

     else

     {



         ui->tabambulance->setModel(tmpambulance.CHERCHERa(text));

     }
}

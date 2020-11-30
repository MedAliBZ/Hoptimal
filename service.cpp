#include "service.h"
#include "connection.h"
#include "qpainter.h"
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QPrinter>
#include<QPrintDialog>
#include <QPdfWriter>
#include <QMessageBox>
service::service()
{

}
service::service(QString nom,QString staff1,QString staff2,QString staff3)
{
    this->nom=nom;
    this->staff1=staff1;
    this->staff2=staff2;
    this->staff3=staff3;
}
 bool service::ajouter_service()
 {
     QSqlQuery query;
     query.prepare("INSERT INTO SERVICES(nom,staff1,staff2,staff3)"
                   "VALUES(:nom,:staff1,:staff2,:staff3)");
     query.bindValue(":nom",nom);
     query.bindValue(":staff1",staff1);
     query.bindValue(":staff2",staff2);
     query.bindValue(":staff3",staff3);
     return query.exec();
 }

 bool service::supprimer_service(QString nom_supp)
 {
     QSqlQuery query;
     query.prepare("DELETE FROM SERVICES WHERE NOM=:nom");
     query.bindValue(":nom",nom_supp);
     return  query.exec();
 }
 QSqlQueryModel* service::afficher_ListeService()
 {
     QSqlQueryModel *model=new QSqlQueryModel();
     model->setQuery("SELECT * FROM SERVICES");
     model->setHeaderData(0,Qt::Horizontal,QObject::tr("nom"));
     model->setHeaderData(1,Qt::Horizontal,QObject::tr("staff1"));
     model->setHeaderData(2,Qt::Horizontal,QObject::tr("staff2"));
     model->setHeaderData(3,Qt::Horizontal,QObject::tr("staff3"));

     return model;

 }
 bool service::modifier_service(QString old_name)
 {
     QSqlQuery query;
     query.prepare("UPDATE SERVICES SET NOM=:nom,STAFF1=:staff1,STAFF2=:staff2,STAFF3=:staff3 WHERE NOM='"+old_name+"'");
     query.bindValue(":nom",nom);
     query.bindValue(":staff1",staff1);
     query.bindValue(":staff2",staff2);
     query.bindValue(":staff3",staff3);
     ////////////////////////
     return query.exec();

 }

 QSqlQuery* service::afficher_service(QString val)
 {
     QSqlQuery* query=new QSqlQuery();
     query->prepare("SELECT * FROM SERVICES WHERE NOM='"+val+"'");
     return  query;
 }

 QSqlQueryModel * service::rechercher_service(QString nom )
 {
     QSqlQueryModel * model= new QSqlQueryModel();

             model->setQuery("SELECT * FROM SERVICES WHERE( NOM =  '"+nom+"' OR STAFF1='"+nom+"'OR STAFF2='"+nom+"'OR STAFF3='"+nom+"')");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("staff1"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("staff2"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("staff3"));

         return model ;
 }
 QSqlQueryModel * service::trier_service()
 {
     QSqlQueryModel * model= new QSqlQueryModel();

     model->setQuery("SELECT * FROM SERVICES ORDER BY NOM ;");

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("staff1"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("staff2"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("staff3"));
     return model;
 }
 bool service::controle_saisie_serviceAjout(service s)
 {
     if((s.get_nom_service()=="")||(s.get_staff1()=="")||(s.get_staff2()=="")||(s.get_staff3()==""))
        return true;
     else
         return false;
 }
 void service::printPDF_service()
 {

     QPdfWriter pdf("C:/Users/WIKI/Documents/validation_indiv/printService.pdf");
     QPainter painter(&pdf);
     QFont font=painter.font();
        font.setPointSize(font.pointSize() * 2);
        painter.setFont(font);
        painter.setPen(Qt::black);
        painter.drawText(300,800 , "Nom: ");
        painter.drawText(300,1600, "Staff1: ");
        painter.drawText(300, 2400, "Staff2: ");
        painter.drawText(300, 3200, "Staff3: ");
        painter.setPen(Qt::darkGray);
        painter.drawText(700, 800, this->nom);
        painter.drawText(700, 1600, this->staff1);
        painter.drawText(700, 2400, this->staff2);
        painter.drawText(700, 3200, this->staff3);
        painter.end();
        QMessageBox msgBox;
                 msgBox.setIcon(QMessageBox::Information);
                 msgBox.setText("A pdf has been created.");
                 msgBox.exec();


 }

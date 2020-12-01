#include "mission.h"
#include<QString>
#include "secours.h"
#include "QSqlQuery"
#include<QMessageBox>
#include <QObject>
#include"QSqlQueryModel"

mission::mission()
{
id=0;
destination="";
heure="";
}

mission::mission(int id,QString destination,QString heure)
{
    this->id=id;
    this->destination=destination;
    this->heure=heure;
}

int mission::getid()
{
    return id;
}

QString mission::getdestination()
{
    return destination;
}

QString mission::getheure()
{
    return heure;
}


//----------------------AJOUTER---------------------
 bool mission::ajouter()
 {
     QSqlQuery qry;
    QString  res=QString::number(id);
     qry.prepare("INSERT INTO mission(ID,DESTINATION,HEURE)""VALUES(:id,:destination,:heure)");
     qry.bindValue(":id",res);
     qry.bindValue(":destination",destination);
     qry.bindValue(":heure",heure);


     return qry.exec();
 }

//------------------AFFICHER----------------------------
 QSqlQueryModel * mission::afficher_mission()
 {
     QSqlQueryModel* model= new QSqlQueryModel();
     model->setQuery("select * from mission");
     model->setHeaderData(0,Qt::Vertical,QObject::tr("id"));
     model->setHeaderData(1,Qt::Vertical,QObject::tr("destination"));
     model->setHeaderData(2,Qt::Vertical,QObject::tr("heure"));


     return model;
 }

 //********************************************SUPPRIMER***********************
 bool mission::supprimer_mission(int id)
 {
     QSqlQuery qry;
     QString res=QString::number(id);
     qry.prepare("delete from mission where ID = :id");
     qry.bindValue(":id",res);
     return qry.exec();
 }

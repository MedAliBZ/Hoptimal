#include "medicament.h"
#include "mainwindow.h"

medicament::medicament()
{
    nom="";
    description="";
    DF="";
    DLC="";
    prix="";
}

medicament::medicament(QString nom,QString description,QString DF,QString DLC,QString prix)
{
    this->nom=nom;
    this->description=description;
    this->DF=DF;
    this->DLC=DLC;
    this->prix=prix;


}

QString medicament::getNom(){return nom;}
QString medicament::getDescription(){return description;}
QString  medicament::getDF(){return DF;}
QString  medicament::getDLC(){return DLC;}
QString medicament::getPrix(){return prix;}


void medicament::setNom (QString nom){this->nom=nom;}
void medicament::setDescription (QString description){this->description=description;}
void medicament::setDF (QString  DF){this->DF=DF;}
void medicament::setDLC (QString  DLC){this->DLC=DLC;}
void medicament::setPrix (QString prix){this->prix=prix;}


bool medicament::ajouter_medicament()
{
    QSqlQuery query;
    query.prepare("INSERT INTO MEDICAMENTS (NAME,DESCRIPTION,DF,DLC,PRIX)" " VALUES(:name, :description, :df, :dlc,:prix)");
    query.bindValue(":name",nom);
    query.bindValue(":description",description);
    query.bindValue(":df",DF);
    query.bindValue(":dlc",DLC);
    query.bindValue(":prix",prix);
    return query.exec();


}

bool medicament::supprimer_medicaments(QString nom)
{
    QSqlQuery query;
    query.prepare("DELETE FROM MEDICAMENTS WHERE NAME= :nom");
    query.bindValue(":nom",nom);
    return query.exec();
}



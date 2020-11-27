#include "medicament.h"
#include "mainwindow.h"

medicament::medicament()
{
    nom="";
    description="";
    DF="";
    DLC="";
    prix="";
    quantite="";
}

medicament::medicament(QString nom,QString description,QString DF,QString DLC,QString prix,QString quantite)
{
    this->nom=nom;
    this->description=description;
    this->DF=DF;
    this->DLC=DLC;
    this->prix=prix;
    this->quantite=quantite;

}

QString medicament::getNom(){return nom;}
QString medicament::getDescription(){return description;}
QString  medicament::getDF(){return DF;}
QString  medicament::getDLC(){return DLC;}
QString medicament::getPrix(){return prix;}
QString medicament::getQuantite(){return quantite;}

void medicament::setNom (QString nom){this->nom=nom;}
void medicament::setDescription (QString description){this->description=description;}
void medicament::setDF (QString  DF){this->DF=DF;}
void medicament::setDLC (QString  DLC){this->DLC=DLC;}
void medicament::setPrix (QString prix){this->prix=prix;}
void medicament::setQuantite (QString quantite){this->quantite=quantite;}

bool medicament::ajouter_medicament()
{
    QSqlQuery query;
    query.prepare("INSERT INTO MEDICAMENTS (NAME,DESCRIPTION,DF,DLC,PRIX,QUANTITE)" " VALUES(:name, :description, :df, :dlc,:prix, :quantite)");
    query.bindValue(":name",nom);
    query.bindValue(":description",description);
    query.bindValue(":df",DF);
    query.bindValue(":dlc",DLC);
    query.bindValue(":prix",prix);
    query.bindValue(":quantite",quantite);
    return query.exec();


}

bool medicament::supprimer_medicaments(QString nom)
{
    QSqlQuery query;
    query.prepare("DELETE FROM MEDICAMENTS WHERE NAME= :nom");
    query.bindValue(":nom",nom);
    return query.exec();
}


bool medicament::modifier_medicament(QString nom_init)
{
    QSqlQuery qry;
    qry.prepare("UPDATE MEDICAMENTS SET NAME=:nom , DESCRIPTION=:desc , DF=:df , DLC = :dlc , PRIX= :prix, QUANTITE= :quantite WHERE NAME=:name");
    qry.bindValue(":nom",nom);
    qry.bindValue(":desc",description);
    qry.bindValue(":df",DF);
    qry.bindValue(":dlc",DLC);
    qry.bindValue(":prix",prix);
    qry.bindValue(":quantite",quantite);
    qry.bindValue(":name",nom_init);

    return qry.exec();
}





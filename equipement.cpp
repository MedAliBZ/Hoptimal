#include "equipement.h"

equipement::equipement()
{
    nom ="";
    etat_fonctionnement = "";
    dispo = "";
}

equipement::equipement(QString n,QString etat_f,QString dispo)
{
    this->nom = n;
    this->etat_fonctionnement = etat_f;
    this->dispo=dispo;
}



bool equipement::ajouter_equipement()
{
    QSqlQuery query;
    query.prepare("INSERT INTO EQUIPEMENT (NOM,DISPO,ETAT_FONC)" " VALUES(:name, :dispo, :etat)");
    query.bindValue(":name",nom);
    query.bindValue(":dispo",dispo);
    query.bindValue(":etat",etat_fonctionnement);
    return query.exec();


}


bool equipement::supprimer_equipement(QString nom)
{
    QSqlQuery query;
    query.prepare("DELETE FROM EQUIPEMENT WHERE NOM= :nom");
    query.bindValue(":nom",nom);
    return query.exec();
}


bool equipement::modifier_equipement(QString nom_init)
{
    QSqlQuery qry;
    qry.prepare("UPDATE EQUIPEMENT SET NOM=:nom , DISPO=:disp , ETAT_FONC=:etat  WHERE NOM=:name");
    qry.bindValue(":nom",nom);
    qry.bindValue(":disp",dispo);
    qry.bindValue(":etat",etat_fonctionnement);
    qry.bindValue(":name",nom_init);
    return qry.exec();
}

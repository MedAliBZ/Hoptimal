#include "connection.h"
#include "QSqlDatabase"
#include <QSqlQuery>
connection::connection()
{

}

bool connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Projet2A");
db.setUserName("system");//inserer nom de l'utilisateur
db.setPassword("0000");//inserer mot de passe de cet utilisateur

if (db.open())
{
test=true;


QString medicament = "CREATE TABLE medicament("
                        "Name VARCHAR(20) NOT NULL PRIMARY KEY,"
                        "Description VARCHAR(50) NOT NULL,"
                        "DF VARCHAR(31) NOT NULL,"
                        "DLC VARCHAR(31) NOT NULL,"
                        "Prix VARCHAR(20) NOT NULL,"
                        "Quantite VARCHAR(20) NOT NULL);";

QString equipement = "CREATE TABLE equipement("
                     "Nom VARCHAR(50) NOT NULL PRIMARY KEY ,"
                     "Dispo VARCHAR(20) NOT NULL,"
                     "Etat_fonc VARCHAR(20) NOT NULL);";

QSqlQuery querym,querye;
         querym.exec(medicament);
         querye.exec(equipement);
}
    return  test;
}

#include "connectdb.h"

void ConnectDB::Connect()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("HoptimalDB");
    db.setUserName("Hoptimal");//inserer nom de l'utilisateur
    db.setPassword("esprit20");//inserer mot de passe de cet utilisateur

    if (db.open()){
        qDebug("DataBase connected.");
        QString patient = "CREATE TABLE patient("
                          "Cin VARCHAR(20) NOT NULL PRIMARY KEY,"
                          "Nom VARCHAR(20) NOT NULL,"
                          "Prenom VARCHAR(20) NOT NULL,"
                          "dateNaissance DATE NOT NULL,"
                          "numChambre VARCHAR(20) NOT NULL);";
        QString rdv = "CREATE TABLE rdv("
                      "id VARCHAR(20) NOT NULL PRIMARY KEY ,"
                      "nomPatient VARCHAR(20) NOT NULL,"
                      "prenomPatient VARCHAR(20) NOT NULL,"
                      "email VARCHAR(100) NOT NULL,"
                      "dateTime TIMESTAMP NOT NULL);";
        QSqlQuery qry,qry1;
        qry.exec(patient);
        qry1.exec(rdv);
    }
    else
        qDebug("DataBase failed.");
}

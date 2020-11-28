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
                          "Cin VARCHAR(10) NOT NULL PRIMARY KEY,"
                          "Nom VARCHAR(20) NOT NULL,"
                          "Prenom VARCHAR(20) NOT NULL,"
                          "dateNaissance DATE NOT NULL,"
                          "numChambre VARCHAR(20) NOT NULL,"
                          "idRDV VARCHAR(20), "
                          "CONSTRAINT fk_idRDV "
                          "FOREIGN KEY (idRDV) "
                          "REFERENCES rdv(id));";
        QString rdv = "CREATE TABLE rdv("
                      "id VARCHAR(20) NOT NULL PRIMARY KEY ,"
                      "nomPatient VARCHAR(20) NOT NULL,"
                      "prenomPatient VARCHAR(20) NOT NULL,"
                      "email VARCHAR(100) NOT NULL,"
                      "dateTime TIMESTAMP NOT NULL);";
        QSqlQuery qry,qry1;
        qry1.exec(rdv);
        qry.exec(patient);

    }
    else
        qDebug("DataBase failed.");
}

#include "connexion.h"
#include <QtSql/QSqlDatabase>
#include <QString>

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
 db = QSqlDatabase::addDatabase("QODBC");
 db.setDatabaseName("Projet_2A3");//inserer le nom de la source de données ODBC
 db.setUserName("jasser");//inserer nom de l'utilisateur
 db.setPassword("00000000");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

QString employe = "CREATE TABLE emp("
        "USERNAME VARCHAR2(20 BYTE) NOT NULL ENABLE,"
        "MNAME VARCHAR2(20 BYTE) NOT NULL ENABLE,"
        "LNAME VARCHAR2(20 BYTE) NOT NULL ENABLE,"
        "FNAME VARCHAR2(20 BYTE) NOT NULL ENABLE,"
        "EMAIL VARCHAR2(50 BYTE) NOT NULL ENABLE),"
        "ID VARCHAR2(20 BYTE);";

qDebug("DataBase connect.");

QSqlQuery querry;
querry.exec(employe);

    return  test;
}
void Connection::closeconnect()
{db.close();}


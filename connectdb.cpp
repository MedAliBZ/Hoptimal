#include "connectdb.h"
#include "connection.h"

void ConnectDB::Connect()
{
    db = QSqlDatabase::addDatabase("QODBC");
   db.setDatabaseName("Projet_2A3");
   db.setUserName("jasser");//inserer nom de l'utilisateur
   db.setPassword("00000000");//inserer mot de passe de cet utilisateur

    if (db.open()){
        qDebug("DataBase connected.");
    }
    else
        qDebug("DataBase failed.");
}

Connection::Connection()
{

}

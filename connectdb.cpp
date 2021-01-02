#include "connectdb.h"
#include "connection.h"

void ConnectDB::Connect()
{
    db = QSqlDatabase::addDatabase("QODBC");
   db.setDatabaseName("Source_Projet2A");
   db.setUserName("system");//inserer nom de l'utilisateur
   db.setPassword("0000");//inserer mot de passe de cet utilisateur

    if (db.open()){
        qDebug("DataBase connected.");
    }
    else
        qDebug("DataBase failed.");
}

Connection::Connection()
{

}

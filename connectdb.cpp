#include "connectdb.h"
#include "connection.h"

void ConnectDB::Connect()
{
    db = QSqlDatabase::addDatabase("QODBC");
   db.setDatabaseName("HoptimalDB");
   db.setUserName("hoptimal");//inserer nom de l'utilisateur
   db.setPassword("esprit20");//inserer mot de passe de cet utilisateur

    if (db.open()){
        qDebug("DataBase connected.");
    }
    else
        qDebug("DataBase failed.");
}

Connection::Connection()
{

}

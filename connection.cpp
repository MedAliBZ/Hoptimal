#include "connection.h"
#include "mainwindow.h"
#include <QSqlDatabase>
connection::connection()
{

}
bool connection:: createconnection()
{bool test=false;
 db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Source_Projet2A");
db.setUserName("system");//inserer nom de l'utilisateur
db.setPassword("0000");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
    return  test;
}

void connection::closeconnection()
{
    db.close();
}

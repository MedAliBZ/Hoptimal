#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("secour");
db.setUserName("secour");
db.setPassword("esprit20");

if (db.open())
test=true;





    return  test;
}

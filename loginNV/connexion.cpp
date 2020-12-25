#include "connexion.h"

QDB::QDB()
{

}

QDB::~QDB()
{
    Disconnect();
}

bool QDB::Connect(const QString dbname)
{

    if (!this->db.isOpen())
    {
        this->db = QSqlDatabase::addDatabase("QODBC");
        this->db.setDatabaseName("Projet_2A3");
        this->db.setUserName("jasser");//inserer nom de l'utilisateur
        this->db.setPassword("00000000");//inserer mot de passe de cet utilisateur

        if (!this->db.open())
        {
          return false;
          qDebug("DataBase connect.");
        }
        else
        {
          return true;
          qDebug("DataBase connect.");
        }


}
}

bool QDB::Disconnect()
{
    if (this->db.isOpen())
    {
        this->db.close();
        return true;
    }
    else
    {
        return false;
    }
}



#ifndef CONNECTDB_H
#define CONNECTDB_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class ConnectDB
{
public:
    ConnectDB();
    void closeDB(){db.close();};
    QSqlDatabase getDb(){return this->db;};
private:
    QSqlDatabase db;
};

#endif // CONNECTDB_H

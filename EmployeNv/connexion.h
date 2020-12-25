#ifndef QDB_H
#define QDB_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Connection
{
QSqlDatabase db;
public:
    Connection();
    bool createconnect();
    void closeconnect();


};
#endif // CONNECTIONBD_H

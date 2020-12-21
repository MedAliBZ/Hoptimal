#include "menu.h"
#include "connectdb.h"
#include <QApplication>
#include "connection.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConnectDB db;
    db.Connect();
    Menu w;
    w.show();
    return a.exec();
}



#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connection.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    connection c;
    bool test=c.createconnect();
    MainWindow w;
    if(test)
       { qDebug()  <<"Connection reussite";
         w.show();
       }
   else
    {qDebug()  <<"Echec de connection";}


    return a.exec();
}

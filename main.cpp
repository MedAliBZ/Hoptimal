#include "mainwindow.h"
#include "connection.h"
#include <QDebug>
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connection c;
    bool test=c.createconnection();
    MainWindow w;


    if(test)
    {
        w.show();
        QMessageBox::information(nullptr,QObject::tr("Data base is opened"),
                                         QObject::tr("connection successful.\n Click OK to continue"),
                                         QMessageBox::Ok);
    }
    else
        QMessageBox::information(nullptr,QObject::tr("Data base is not opened"),
                                         QObject::tr("connection failed.\n Click CANCEL to exit"),
                                         QMessageBox::Cancel);

    return a.exec();
}

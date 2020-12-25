#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCoreApplication>
#include "QPropertyAnimation"
#include <QTimer>
#include <windows.h>
#include "employe.h"
#include <connexion.h>
#include <QList>
#include <QListWidget>
#include "connexion.h"
#include "employe.h"
#include "smtp.h"
#include <QtWidgets/QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QString username,lname,mname,fname,email;
    int id;
private:
    Employe E;
    QList<Employe*> mesEmploye;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString picName;
    QString picDir = QCoreApplication::applicationDirPath()+"/../../LogSys/users/avatar";

public:


public slots:
    void myfunction();

private slots:
    void on_uplButton_clicked();

    void on_reportemploye_clicked();

    void on_ajouteremploye_clicked();

    void on_checkBox_clicked();

    void on_addemploye_clicked();

    void on_employeelist_clicked();

    void on_commandLinkButton_clicked();

    void on_Delete_clicked();

    void on_AfficherEmploye_clicked();

    void on_pushButton_clicked();

    void on_checkBox_2_clicked();

    void on_pushButton_2_clicked();

    void on_Print_clicked();

    void on_recherche_clicked();

    void sendMail();

    void mailSent(QString);


private:
    Ui::MainWindow *ui;
    QPropertyAnimation *animation;
    QTimer *timer;
    Employe Etmp;
};
#endif // MAINWINDOW_H

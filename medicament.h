#ifndef MEDICAMENT_H
#define MEDICAMENT_H
#include <QString>
#include <QDate>
#include <QPropertyAnimation>
#include <QPixmap>
#include <QDateEdit>
#include <iostream>
#include <QDebug>
#include <QtDebug>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDateTime>

class medicament
{
private:
    QString nom;
    QString description;
    QString DF;
    QString DLC;
    QString prix;


public:
    medicament();
    medicament(QString,QString,QString,QString,QString);


    QString getNom();
    QString getDescription();
    QString getDF();
    QString getDLC();
    QString getPrix();


    void setNom (QString );
    void setDescription (QString );
    void setDF (QString);
    void setDLC (QString );
    void setPrix (QString );

//bool ajouter();
    bool ajouter_medicament();
    bool supprimer_medicaments(QString);

};

#endif // MEDICAMENT_H

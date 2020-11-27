#ifndef PATIENT_H
#define PATIENT_H

#include <QDialog>
#include <QString>
#include <QDate>
#include <QVector>
#include "connectdb.h"



class Patient
{
private:
    QString nom,prenom,CIN,numChambre;
    QDate dateNaissance;
    QVector<QString> maladies;

public:

    void setNom(QString nom);

    void setPrenom(QString prenom);

    void setCIN(QString cin){this->CIN=cin;};

    QString getCIN()const{return CIN;};

    bool addValuesToDB(QString nom, QString prenom, QDate dateNaissance,QString Cin,QString numChambre);

    void afficher(QString CIN,QString nom,QString prenom,QDate dateNaissance,QString numChambre);

    bool modifyValues(QString nom, QString prenom, QDate dateNaissance,QString Cin,QString numChambre,QString oldCin);

    void Delete();

    void printPDF();

    QSqlQuery qryPrep(QString text);

};

#endif // PATIENT_H

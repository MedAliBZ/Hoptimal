#ifndef RENDEZVOUS_H
#define RENDEZVOUS_H

#include <QDate>
#include <QDateTime>
#include <QString>
#include <QDialog>


class RendezVous {
private:
    QString id,nomPatient,prenomPatient,email;
    QDateTime dateTime;

public:
    bool isEmailAddress(QString strEmailAddr);

    QString getId(){return id;};

    QString getEmail(){return email;};

    QString getPrenom(){return prenomPatient;};

    QDateTime getDateTime(){return dateTime;};

    void setID(QString id){this->id=id;};

    bool addValuesToDB(QString nomPatient, QString prenomPatient,QString id,QString email,QDateTime dateTime);

    bool modifyValues(QString nomPatient, QString prenomPatient,QString id,QString email,QDateTime dateTime);

    void send_email(QString email,QString date,QString heure,QString prenom);

    void afficher(QString,QString,QString,QString,QDateTime);

    void Delete();
};

#endif // RENDEZVOUS_H

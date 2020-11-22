#include "rendezvous.h"
#include "ui_rendezvous.h"
#include <QMessageBox>
#include <QSound>
#include <QSqlQuery>
#include <QFile>
#include <QTextStream>
#include <windows.h>


//usefull functions

bool RendezVous::modifyValues(QString nomPatient, QString prenomPatient,QString id,QString email,QDateTime dateTime){
   QSqlQuery qry;
   qry.prepare("UPDATE rdv "
               "SET id = :id, "
               "nomPatient= :nomPatient, "
               "prenomPatient= :prenomPatient, "
               "email=:email, "
               "dateTime = :dateTime " //TO_TIMESTAMP('"+dateTime.toString("yyyy.MM.dd hh:mm:ss")+"', 'YYYY.MM.DD HH24:MI:SS')
               "WHERE id = :oldId ;");
   qry.addBindValue(id);
   qry.addBindValue(nomPatient);
   qry.addBindValue(prenomPatient);
   qry.addBindValue(email);
   qry.addBindValue(dateTime);
   qry.addBindValue(this->id);


    if(!qry.exec()){
        QMessageBox::critical(nullptr, QObject::tr("CIN already exists."),
                    QObject::tr("Please change the CIN."), QMessageBox::Ok);
        return false;
    }
    else{
        qDebug("Values added to DB");
        return true;
    }
}

bool RendezVous::addValuesToDB(QString nomPatient, QString prenomPatient,QString id,QString email,QDateTime dateTime){
    QSqlQuery qry;
    qry.prepare("INSERT INTO rdv("
                "id,"
                "nomPatient,"
                "prenomPatient,"
                "email,"
                "dateTime)"
                "VALUES (?,?,?,?,?);");
    qry.addBindValue(id);
    qry.addBindValue(nomPatient);
    qry.addBindValue(prenomPatient);
    qry.addBindValue(email);
    qry.addBindValue(dateTime);


    if(!qry.exec()){
        QMessageBox::critical(nullptr, QObject::tr("id exists already"),
                    QObject::tr("please change the id."), QMessageBox::Cancel);
        return false;
    }
    else{
        qDebug("Values added to DB");
        return true;
    }
}

bool RendezVous::isEmailAddress(QString strEmailAddr) //check email adress
{
    if ( strEmailAddr.length() == 0 ) return false;

    QString strPatt = "\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}\\b";
    QRegExp rx(strPatt);
    return rx.exactMatch(strEmailAddr);
}

void CreateFile(QString email,QString date,QString heure,QString prenom){
    QStringList parts = prenom.split(' ');
            parts[0].replace(0, 1, parts[0][0].toUpper());

        prenom= parts.join(" ");
    QString filename="C:/temp/mail.txt";
    QFile file( filename );
    if ( file.open(QIODevice::ReadWrite) )
    {
        file.resize(0);
        QTextStream stream( &file );
        stream << "From: \"Hoptimal\" <hoptimalhoptimal@gmail.com>\n"
                  "To: <" << email << ">\n"
                  "Subject: Rendez vous HOPTIMAL\n\n"
                  "Bonjour "<< prenom <<",\n"
                  "Prière de ne pas oublier votre rendez vous a l'hopital le "<<date<<" à "<<heure<<".\n\n"
                  "Merci de ne pas répondre a ce mail." ;
    }
}

void RendezVous::send_email(QString email,QString date,QString heure,QString prenom){
    CreateFile(email,date,heure,prenom);
    QString str="curl smtp://smtp.gmail.com:587 -v --mail-from \"hoptimalhoptimal@gmail.com\" --mail-rcpt \""+email+"\" --ssl -u hoptimalhoptimal@gmail.com:ppuxysjhidhpvnjc -T \"C:\\temp\\mail.txt\" -k";
    QByteArray ba = str.toLocal8Bit();
    const char* command =ba.data();
    WinExec(command, SW_HIDE);
}

void RendezVous::afficher(QString id,QString nomPatient,QString prenomPatient,QString email,QDateTime dateTime){
    this->id=id;
    this->nomPatient=nomPatient;
    this->prenomPatient=prenomPatient;
    this->email=email;
    this->dateTime=dateTime;
}

void RendezVous::Delete(){
    QSqlQuery qry;
    qry.prepare("DELETE FROM rdv WHERE id='"+this->id+"';");
    qry.exec();
}

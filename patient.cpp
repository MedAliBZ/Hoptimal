#include "patient.h"
#include <QListWidget>
#include <QIntValidator>
#include <QMessageBox>
#include <QString>
#include <QSound>
#include <QPrinter>
#include <QPainter>



bool Patient::modifyValues(QString nom, QString prenom, QDate dateNaissance,QString newCin,QString numChambre,QString oldCin){
   QSqlQuery qry;
   qry.prepare("UPDATE patient "
               "SET Cin = :newCin, Nom= :nom, Prenom=:prenom, "
               "dateNaissance = :dateNaissance, " //TO_DATE('"+dateNaissance.toString("yyyy.MM.dd")+" 00:00:00', 'YYYY.MM.DD HH24:MI:SS')
               "numChambre= :numChambre "
               "WHERE Cin = :oldCin ;");
    qry.addBindValue(newCin);
    qry.addBindValue(nom);
    qry.addBindValue(prenom);
    qry.addBindValue(dateNaissance);
    qry.addBindValue(numChambre);
    qry.addBindValue(oldCin);

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

bool Patient::addValuesToDB(QString nom, QString prenom, QDate dateNaissance,QString Cin,QString numChambre){
    QSqlQuery qry;
    qry.prepare("INSERT INTO patient("
                "Cin,"
                "Nom,"
                "Prenom,"
                "dateNaissance,"
                "numChambre)"
                "VALUES (?,?,?,?,?);");
    qry.addBindValue(Cin);
    qry.addBindValue(nom);
    qry.addBindValue(prenom);
    qry.addBindValue(dateNaissance);
    qry.addBindValue(numChambre);


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

void Patient::setNom(QString nom){
    this->nom=nom;
}

void Patient::setPrenom(QString prenom){
    this->prenom=prenom;
}

void Patient::Delete(){
    QSqlQuery qry;
    qry.prepare("DELETE FROM patient WHERE CIN='"+this->CIN+"';");
    qry.exec();
}

void Patient::printPDF(){
    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName("C:/temp/fichePatient.pdf");
    QPainter painter;
    QImage image(":/pics/pics/pdf_image.jpg");
    if (! painter.begin(&printer)) { // failed to open file
        qWarning("failed to open file, is it writable?");
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setText("failed to create the pdf.");
        msgBox.exec();
    }
    else{
        QFont font = painter.font();
        font.setPointSize(font.pointSize() * 2);
        painter.setFont(font);
        painter.setPen(Qt::cyan);
        QString nom="Ali";
        painter.drawImage(-20,-40,image);
        painter.drawText(330, 20, "Nom: ");
        painter.drawText(330, 65, "Prenom: ");
        painter.drawText(330, 110, "CIN: ");
        painter.drawText(330, 155, "Numero de la chambre: ");
        painter.drawText(330, 200, "Date de naissance: ");
        painter.setPen(Qt::white);
        painter.drawText(410, 20, this->nom);
        painter.drawText(450, 65, this->prenom);
        painter.drawText(400, 110, this->CIN);
        painter.drawText(630, 155, this->numChambre);
        painter.drawText(580, 200, this->dateNaissance.toString("dd/MM/yyyy"));
        painter.end();
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Information);
        msgBox.setText("A pdf has been created.");
        msgBox.exec();
    }
}

void Patient::afficher(QString CIN,QString nom,QString prenom,QDate dateNaissance,QString numChambre){
    this->CIN=CIN;
    this->nom=nom;
    this->prenom=prenom;
    this->dateNaissance=dateNaissance;
    this->numChambre=numChambre;
}


QSqlQuery Patient::qryPrep(QString text){
    QSqlQuery qry(text);
    return qry;
}

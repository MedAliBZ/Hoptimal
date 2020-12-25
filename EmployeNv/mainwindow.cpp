#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "QAnimationDriver"
#include "QPauseAnimation"
#include "QPropertyAnimation"
#include <QDateTime>
#include <QFile>
#include <QFileDialog>
#include <QDebug>
#include <QVector>
#include <QtPrintSupport/QPrinter>
#include <QPainter>
#include <employe.h>
#include <QIntValidator>
#include <QPrinter>
#include <QTextDocument>
#include <QPrintDialog>
#include <QString>
#include <fstream>
#include "smtp.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabemploye->setModel(Etmp.afficher());
    ui->listView->setModel(E.afficher());
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(myfunction()));
    timer->start(1000);
    animation = new QPropertyAnimation(ui->label_2, "geometry");
            animation->setDuration(30000);
            animation->setStartValue(ui->label_2->geometry());
            animation->setEndValue(QRect(2500,80,70,50 ));
            animation->start();
            animation = new QPropertyAnimation(ui->label_4, "geometry");
                    animation->setDuration(32000);
                    animation->setStartValue(ui->label_4->geometry());
                    animation->setEndValue(QRect(2500,80,70,50 ));
                    animation->start();

            setWindowIcon(QIcon(":/login.png"));
                    QPixmap pix("C:/Users/pc/Desktop/khedma/welcome2.png");
                        ui->label_2->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
                        int w = ui->label_2->width();
                        int h = ui->label_2->height();
                        ui->label_2->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    setWindowIcon(QIcon(":/login.png"));
            QPixmap pixs("C:/Users/pc/Desktop/khedma/employeur.png");
                ui->label->setPixmap(pixs.scaled(100,100,Qt::KeepAspectRatio));
                 w = ui->label->width();
                 h = ui->label->height();
                ui->label->setPixmap(pixs.scaled(w,h,Qt::KeepAspectRatio));
                QPixmap pixf("C:/Users/pc/Desktop/khedma/hopti.png");
                    ui->label_4->setPixmap(pixf.scaled(100,100,Qt::KeepAspectRatio));
                     w = ui->label_4->width();
                     h = ui->label_4->height();
            ui->label_4->setPixmap(pixf.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myfunction()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh :  mm  :  ss");
    if ((time.second() % 2 ==0)){
        time_text[3] = ' ';
        time_text[8] = ' ';
    }
    ui->label_date_time->setText(time_text);
}

void MainWindow::on_uplButton_clicked()
{
    this->picName = QFileDialog::getOpenFileName(this, tr("Open Image"), "/", tr("Image Files (*.png *.jpg *.bmp)"));
    ui->label->setText("<img src=\"file:///"+this->picName+"\" alt=\"Image read error!\" height=\"128\" width=\"128\" />");
}

void MainWindow::on_reportemploye_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_ajouteremploye_clicked()
{
    bool halt = false;

    if(ui->lineEdit_username->text() == "")
    {
        ui->lineEdit_username->setPlaceholderText("Username EMPTY!");
        halt = true;
    }

    if(ui->lineEdit_email->text() == "")
    {
        ui->lineEdit_email->setPlaceholderText("Email EMPTY!");
        halt = true;
    }

    if(ui->lineEdit_lname->text() == "")
    {
        ui->lineEdit_lname->setPlaceholderText("Lname (optional)");
        halt = false;
    }

    if(ui->lineEdit_mname->text() == "")
    {
        ui->lineEdit_mname->setPlaceholderText("Mname EMPTY!");
        halt = true;
    }

    if(ui->lineEdit_fname->text() == "")
    {
        ui->lineEdit_fname->setPlaceholderText("Fname EMPTY !");
        halt = false;
    }

    if(ui->lineEdit_ID->text() == "")
    {
        ui->lineEdit_ID->setPlaceholderText("ID EMPTY!");
        halt = true;
    }

    QSqlQuery query;
   QString username=ui->lineEdit_username->text();
   QString mname=ui->lineEdit_mname->text();
   QString lname=ui->lineEdit_lname->text();
   QString fname=ui->lineEdit_fname->text();
   QString email=ui->lineEdit_email->text();
   int id=ui->lineEdit_ID->text().toInt();

       Employe E(username,lname,mname,fname,email,id);
       bool test =E.ajouter();
       if(!query.exec()){
           QMessageBox::information(nullptr, QObject::tr("effectue."),
                       QObject::tr(" Effectué."), QMessageBox::Ok);
           ui->tabemploye->setModel(Etmp.afficher());
           ui->listView->setModel(E.afficher());


       }
       else{
           qDebug("Values added to DB");

       }
}


void MainWindow::on_checkBox_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}

void MainWindow::on_addemploye_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_employeelist_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_commandLinkButton_clicked()
{
    ui->stackedWidget_3->setCurrentIndex(1);
}

void MainWindow::on_Delete_clicked()
    {
    int id=ui->lineEdit_IDs->text().toInt();
    bool test =Etmp.supprimer(id);
    QMessageBox::information(nullptr, QObject::tr("Suppression."),
                QObject::tr(" Un Employeur Supprimer."), QMessageBox::Ok);
    }






void MainWindow::on_AfficherEmploye_clicked()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from emp");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("username"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("mname"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("fname"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("lname"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("email"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("id"));

}



void MainWindow::on_pushButton_clicked()
{
  close();
}

void MainWindow::on_checkBox_2_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}
void MainWindow::on_Print_clicked()
{

    QString strStream;
           QTextStream out(&strStream);
           QPrinter printer;
           QPainter painter;


           const int rowCount = ui->tabemploye->model()->rowCount();
           const int columnCount = ui->tabemploye->model()->columnCount();

           out <<  "<html>\n"
               "<head>\n"
               "<meta Content=\"Text/html; charset=Windows-1251\">\n"
               <<  QString("<title>%1</title>\n").arg("GestionEmploye")
               <<  "</head>\n"
               "<body bgcolor=#cae9ff link=#5000A0>\n"
               "<table border=1 cellspacing=0 cellpadding=2>\n";
               


           // headers
           out << "<thead><tr bgcolor=#f0f0f0>";
           for (int column = 0; column < columnCount; column++)
               if (ui->tabemploye->isColumnHidden(column))
                   out << QString("<th>%1</th>").arg(ui->tabemploye->model()->headerData(column, Qt::Horizontal).toString());
           out << "</tr></thead>\n";

           // data table
           for (int row = 0; row < rowCount; row++) {
               out << "<tr>";
               for (int column = 0; column < columnCount; column++) {
                   if (!ui->tabemploye->isColumnHidden(column)) {
                       QString data =ui->tabemploye->model()->data(ui->tabemploye->model()->index(row, column)).toString().simplified();
                       out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                   }
               }
               out << "</tr>\n";
           }
           out <<  "</table>\n"
               "</body>\n"
               "</html>\n";



           QTextDocument *document = new QTextDocument();
           document->setHtml(strStream);




           QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
           if (dialog->exec() == QDialog::Accepted) {
               document->print(&printer);
           }

           delete document;
  }

void MainWindow::on_recherche_clicked()
{
    QString a=ui->lineEdit_ID_2->text();
       if(a!="")
       { ui->listView->setModel(E.recherche(a));


}

}



void MainWindow::sendMail()
{
    Smtp* smtp = new Smtp("mohamedjasser.bensmida@esprit.tn", "191JMT1723", "smtp.gmail.com", 465);
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));


    smtp->sendMail("mohamedjasser.bensmida@esprit.tn", ui->lineEdit_email->text() , "hoptimal","you are welcome");
}

void MainWindow::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}

void MainWindow::on_pushButton_2_clicked()
{
  sendMail();
}



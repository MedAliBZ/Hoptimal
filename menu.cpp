#include "menu.h"
#include "ui_menu.h"
#include "patient.h"
#include "rendezvous.h"
#include <QVector>
#include <QPropertyAnimation>
#include <QMovie>
#include <QLayout>
#include <QSqlQueryModel>
#include <fstream>
#include <QFile>
#include <QTextStream>





Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);

    refreshDBPatient();
    refreshDBRdv();

    ui->stackedWidget->setCurrentIndex(0);

    initialiserImages();
    initialiserPatient();
    initialiserRDV();
    setWindowTitle("Hoptimal");

    advanced_bool=false;
    ui->advanced_2->setVisible(false);
}

Menu::~Menu()
{
    db.closeDB();
    delete ui;
}

//usefull functions

void Menu::advanced(){
        QSqlQuery *qery=new QSqlQuery(db.getDb());
        qery->exec("UPDATE PATIENT SET Nom=LOWER(Nom),Prenom=LOWER(Prenom);");
        delete qery;
        QString arg1=ui->recherchePatient->text();
        QString column=triPatient();

            QSqlQueryModel *modal=new QSqlQueryModel();
            QSqlQuery *qry=new QSqlQuery(db.getDb());
            qry->prepare("SELECT "+column+" FROM PATIENT "
                         "WHERE CIN LIKE '%"+ui->advanced_cin->text()+"%'"
                         " AND NOM LIKE '%"+ui->advanced_nom->text()+"%' AND PRENOM LIKE '%"+ui->advanced_prenom->text()+"%'"
                         " AND NUMCHAMBRE LIKE '%"+ui->advanced_chambre->text()+"%' ORDER BY "+column);
            qry->exec();
            modal->setQuery(*qry);
            ui->listPatient->setModel(modal);
            qDebug("List patient refreshed.");

}

void Menu::initialiserErrorsPatient(){
    ui->Nom_error->setText("");
    ui->Prenom_error->setText("");
    ui->Cin_error->setText("");
    ui->numChambre_error->setText("");
}

QString Menu::triRDV()
{
    if(ui->triRDV->currentText() == "Id de la RDV"){
        ui->rechercheRendezVous->setPlaceholderText("Rechercher par l'ID de la rendez vous");
        return "id";
    }
    else if(ui->triRDV->currentText() == "Nom du patient"){
        ui->rechercheRendezVous->setPlaceholderText("Rechercher par le nom du patient");
        return "nomPatient";
    }
    else if(ui->triRDV->currentText() == "Email du patient"){
        ui->rechercheRendezVous->setPlaceholderText("Rechercher par l'email du patient");
        return "email";
    }
    else{
        ui->rechercheRendezVous->setPlaceholderText("Rechercher par le prenom du patient");
        return "prenomPatient";
    }
}

void Menu::refreshDBRdv()
{
    QSqlQuery *qry=new QSqlQuery(db.getDb());
    qry->exec("UPDATE rdv SET nomPatient=LOWER(nomPatient),prenomPatient=LOWER(prenomPatient);");
    delete qry;
    QString arg1=ui->rechercheRendezVous->text();
    QString column=triRDV();
    if(arg1!=""){
        QSqlQueryModel *modal=new QSqlQueryModel();
        QSqlQuery *qry=new QSqlQuery(db.getDb());
        qry->prepare("SELECT "+column+" FROM rdv "
                     "WHERE "+column+" LIKE '%"+arg1+"%' ORDER BY "+column);
        qry->exec();
        modal->setQuery(*qry);
        ui->listRendezVous->setModel(modal);
        qDebug("List RDV refreshed.");
    }
    else{
        QSqlQueryModel *modal=new QSqlQueryModel();
        QSqlQuery *qry=new QSqlQuery(db.getDb());
        qry->prepare("SELECT "+column+" FROM rdv ORDER BY "+column);
        qry->exec();
        modal->setQuery(*qry);
        ui->listRendezVous->setModel(modal);
        qDebug("list RDV refreshed.");
    }
}

QString Menu::triPatient()
{
if (ui->triPatient->currentText()=="Numero de la chambre"){
    ui->recherchePatient->setPlaceholderText("Rechercher par le numero de la chambre");
    return "numChambre";
    }
    else{
        ui->recherchePatient->setPlaceholderText("Rechercher par "+ui->triPatient->currentText().toLower());
        return ui->triPatient->currentText();
    }
}

void Menu::refreshDBPatient()
{
    QSqlQuery *qry=new QSqlQuery(db.getDb());
    qry->exec("UPDATE PATIENT SET Nom=LOWER(Nom),Prenom=LOWER(Prenom);");
    delete qry;
    QString arg1=ui->recherchePatient->text();
    QString column=triPatient();
    if(arg1!=""){
        QSqlQueryModel *modal=new QSqlQueryModel();
        QSqlQuery *qry=new QSqlQuery(db.getDb());
        qry->prepare("SELECT "+column+" FROM patient "
                     "WHERE "+column+" LIKE '%"+arg1+"%' ORDER BY "+column);
        qry->exec();
        modal->setQuery(*qry);
        ui->listPatient->setModel(modal);
        qDebug("List patient refreshed.");
    }
    else{
        QSqlQueryModel *modal=new QSqlQueryModel();
        QSqlQuery *qry=new QSqlQuery(db.getDb());
        qry->prepare("SELECT "+column+" FROM patient ORDER BY "+column);
        qry->exec();
        modal->setQuery(*qry);
        ui->listPatient->setModel(modal);
        qDebug("List patient refreshed.");
    }
}

void Menu::initialiserImages()
{
    ui->rechercheRendezVous->setPlaceholderText("Rechercher par l'ID de la rendez vous");
    ui->recherchePatient->setPlaceholderText("Rechercher par cin");
    ui->advanced_cin->setPlaceholderText("Rechercher par cin");
    ui->advanced_nom->setPlaceholderText("Rechercher par nom");
    ui->advanced_prenom->setPlaceholderText("Rechercher par prenom");
    ui->advanced_chambre->setPlaceholderText("Rechercher par numero de la chambre");

    QIcon icon,icon1,iconMail,iconPdf;
    QPixmap qpm,qpm1,qpm2,qpm3;
    QPixmap qpmDelete,qpmMail;

    if(qpm3.load(":/pics/pics/pdf_icon1.png"))
    {
        iconPdf.addPixmap(qpm3);
        ui->pdf_icon->setIcon(iconPdf);
    }
    if(qpmMail.load(":/pics/pics/email_closed.png"))
    {
        iconMail.addPixmap(qpmMail);
        ui->email_sending->setIcon(iconMail);
    }
    if(qpmDelete.load(":/pics/pics/trash.png"))
    {
        icon1.addPixmap(qpmDelete);
        ui->DeleteButton->setIcon(icon1);
        ui->DeleteButton_2->setIcon(icon1);
    }

    if(qpm.load(":/pics/pics/Patient.png"))
    {
        icon.addPixmap(qpm);
        ui->Patient_Button->setIcon(icon);
        ui->Patient_Button_2->setIcon(icon);
    }
    if(qpm1.load(":/pics/pics/Home.png"))
    {
        icon.addPixmap(qpm1);
        ui->Home_Button->setIcon(icon);
        ui->Home_Button_2->setIcon(icon);
    }
    if(qpm2.load(":/pics/pics/RendezVous.png"))
    {
        icon.addPixmap(qpm2);
        ui->RendezVous_Button->setIcon(icon);
        ui->RendezVous_Button_2->setIcon(icon);
    }

    QMovie *movie = new QMovie(":/pics/pics/logo_gif.gif");
    ui->Logo_gif->setMovie(movie);
    movie->setScaledSize(ui->Logo_gif->size());
    movie->start();
}

void Menu::smallLineAnimationPatient()
{
    QPropertyAnimation *animation = new QPropertyAnimation(ui->line_smallPatient, "geometry");
    animation->setDuration(500);
    animation->setStartValue(QRect(ui->line_smallPatient->geometry().x()+(ui->line_smallPatient->geometry().width()/2),ui->line_smallPatient->geometry().y(),10,3));
    animation->setEndValue(ui->line_smallPatient->geometry());
    animation->start();
}

void Menu::smallLineAnimationRendezVous()
{
    QPropertyAnimation *animation = new QPropertyAnimation(ui->line_smallRendezVous, "geometry");
    animation->setDuration(500);
    animation->setStartValue(QRect(ui->line_smallRendezVous->geometry().x()+(ui->line_smallRendezVous->geometry().width()/2),ui->line_smallRendezVous->geometry().y(),10,3));
    animation->setEndValue(ui->line_smallRendezVous->geometry());
    animation->start();
}

void Menu::bigLineAnimationPatient()
{
    QPropertyAnimation *animation = new QPropertyAnimation(ui->line_bigPatient, "geometry");
    animation->setDuration(2000);
    animation->setStartValue(QRect(-500,ui->line_bigPatient->geometry().y(),500,3));
    animation->setEndValue(ui->line_bigPatient->geometry());
    QEasingCurve curve;
    curve.setType(QEasingCurve::OutBounce);
    animation->setEasingCurve(curve);
    animation->start();
}

void Menu::bigLineAnimationRendezVous()
{
    QPropertyAnimation *animation = new QPropertyAnimation(ui->line_bigRendezVous, "geometry");
    animation->setDuration(2000);
    animation->setStartValue(QRect(-500,ui->line_bigRendezVous->geometry().y(),500,3));
    animation->setEndValue(ui->line_bigRendezVous->geometry());
    QEasingCurve curve;
    curve.setType(QEasingCurve::OutBounce);
    animation->setEasingCurve(curve);
    animation->start();
}

void Menu::initialiserPatient()
{
    initialiserErrorsPatient();
    ui->ajouterPatient->setText("Ajouter");
    setWindowTitle("Hoptimal - ajouter un patient");
    ui->pdf_icon->setVisible(false);
    ui->DeleteButton->setVisible(false);
    ui->cinPatient->setText("");
    ui->nomPatient->setText("");
    ui->prenomPatient->setText("");
    ui->DateNaissancePatient->setDate(QDate::fromString("20000821", "yyyyMMdd"));
    ui->numChambrePatient->setText("");
    qDebug("init patient");
}

void Menu::afficherPatient(QString CIN,QString nom,QString prenom,QDate dateNaissance,QString numChambre)
{
    P.afficher(CIN,nom,prenom,dateNaissance,numChambre);
    setWindowTitle("Hoptimal - Modifier un patient");
    ui->pdf_icon->setVisible(true);
    ui->DeleteButton->setVisible(true);
    ui->ajouterPatient->setText("Modifier");
    ui->cinPatient->setText(CIN);
    ui->nomPatient->setText(nom);
    ui->prenomPatient->setText(prenom);
    ui->DateNaissancePatient->setDate(dateNaissance);
    ui->numChambrePatient->setText(numChambre);
}

void Menu::initialiserRDV(){
    ui->ajouterRendezVous->setText("Ajouter");
    ui->email_sending->setVisible(false);
    ui->DeleteButton_2->setVisible(false);
    setWindowTitle("Hoptimal - Ajouter un rendez vous");
    ui->idRendezVous->setText("");
    ui->emailPatientRendezVous->setText("");
    ui->nomPatientRendezVous->setText("");
    ui->prenomPatientRendezVous->setText("");
    ui->dateHeureRendezVous->setDateTime(QDateTime::currentDateTime());
    qDebug("init RDV");
}

void Menu::afficherRDV(QString id,QString nomPatient,QString prenomPatient,QString email,QDateTime dateTime){
    R.afficher(id,nomPatient,prenomPatient,email,dateTime);
    ui->ajouterRendezVous->setText("Modifier");
    setWindowTitle("Hoptimal - Modifier un rendez vous");
    ui->email_sending->setVisible(true);
    ui->DeleteButton_2->setVisible(true);
    ui->idRendezVous->setText(id);
    ui->emailPatientRendezVous->setText(email);
    ui->nomPatientRendezVous->setText(nomPatient);
    ui->prenomPatientRendezVous->setText(prenomPatient);
    ui->dateHeureRendezVous->setDateTime(dateTime);
}
//slots

void Menu::on_menu_listeRendezVous_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    smallLineAnimationRendezVous();
    bigLineAnimationRendezVous();
}

void Menu::on_menu_listePatients_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    smallLineAnimationPatient();
    bigLineAnimationPatient();
}

void Menu::on_rechercheRendezVous_textChanged()
{
    refreshDBRdv();
}

void Menu::on_recherchePatient_textChanged()
{
    refreshDBPatient();
}

void Menu::on_Home_Button_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Menu::on_Home_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Menu::on_RendezVous_Button_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    smallLineAnimationRendezVous();
    bigLineAnimationRendezVous();
}

void Menu::on_Patient_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    smallLineAnimationPatient();
    bigLineAnimationPatient();
}

void Menu::on_listPatient_doubleClicked(const QModelIndex &index)
{
    int occurence=0;
    int row=index.row();
    QString nom,prenom,numChambre,cin;
    QDate dateNaissance;
    QSqlQuery query("SELECT * FROM patient WHERE "+triPatient()+"='"+index.data().toString()+"' ORDER BY "+triPatient());

        while(index.data().toString()==index.sibling(--row,index.column()).data().toString())
            occurence++;


    for(int i=0;i<=occurence;i++)
        query.next();

    cin =query.value(0).toString();
    nom = query.value(1).toString();
    prenom = query.value(2).toString();
    dateNaissance = query.value(3).toDate();
    numChambre=query.value(4).toString();

    afficherPatient(cin,nom,prenom,dateNaissance,numChambre);
    ui->stackedWidget->setCurrentIndex(3);

}

void Menu::on_listRendezVous_doubleClicked(const QModelIndex &index)
{
    int occurence=0;
    int row=index.row();
    QString nomPatient,prenomPatient,email,id;
    QDateTime dateTime;

    QSqlQuery query("SELECT * FROM rdv WHERE "+triRDV()+"='"+index.data().toString()+"' ORDER BY "+triRDV());

    while(index.data().toString()==index.sibling(--row,index.column()).data().toString())
        occurence++;

    for(int i=0;i<=occurence;i++)
        query.next();

            id = query.value(0).toString();
            nomPatient = query.value(1).toString();
            prenomPatient = query.value(2).toString();
            email=query.value(3).toString();
            dateTime = query.value(4).toDateTime();


    afficherRDV(id,nomPatient,prenomPatient,email,dateTime);
    ui->stackedWidget->setCurrentIndex(4);
}

void Menu::on_triPatient_currentTextChanged()
{
    ui->recherchePatient->setText("");
    refreshDBPatient();
}

void Menu::on_triRDV_currentTextChanged()
{
    ui->rechercheRendezVous->setText("");
    refreshDBRdv();
}

//patient slots

void Menu::on_ajouterPatient_clicked()
{
    //affecting inputs into variables to test on them
    QString nom=ui->nomPatient->text();
    QString prenom=ui->prenomPatient->text();
    QString CIN=ui->cinPatient->text();
    QString numChambre=ui->numChambrePatient->text();
    QDate dateNaissance=ui->DateNaissancePatient->date();

    //empty fields verifications
    if(CIN.size()==0 || nom.size()==0 || prenom.size()==0 || numChambre.size()==0){
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setText("Can't leave empty fields.");
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
    else{

        //number check and testing
        QIntValidator v(0,1316134911,this);
        int pos=0;
        if(!v.validate(CIN,pos)){
            //if u have letters in the cin
            QMessageBox msgBox;
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setText("You can't have letters in the CIN.");
            msgBox.setDefaultButton(QMessageBox::Ok);
            msgBox.exec();
        }
        else{
            //cin length verification
            if(CIN.size()==8){
                //affecting variables to class if everything went fine

                if(ui->ajouterPatient->text()=="Ajouter"){
                    if(P.addValuesToDB(nom,prenom,dateNaissance,CIN,numChambre)){
                        ui->stackedWidget->setCurrentIndex(1);
                        refreshDBPatient();
                        initialiserPatient();
                    }
                }
                else{
                    if(P.modifyValues(nom,prenom,dateNaissance,CIN,numChambre,P.getCIN())){
                        ui->stackedWidget->setCurrentIndex(1);
                        refreshDBPatient();
                        initialiserPatient();
                    }
                }
            }
            else{
                QMessageBox msgBox;
                msgBox.setIcon(QMessageBox::Critical);
                msgBox.setText("CIN length must be 8.");
                msgBox.setDefaultButton(QMessageBox::Ok);
                msgBox.exec();
            }
        }
    }
}

void Menu::on_Annuler_clicked()
{
    initialiserPatient();
    ui->stackedWidget->setCurrentIndex(1);

}

void Menu::on_DeleteButton_pressed()
{
    QIcon icon;
    QPixmap qpm;

    if(qpm.load(":/pics/pics/trashOpen.png"))
    {
        icon.addPixmap(qpm);
        ui->DeleteButton->setIcon(icon);
    }
    QSound::play(":/pics/pics/trashmp3.wav");
}

void Menu::on_DeleteButton_released()
{
    QIcon icon;
    QPixmap qpm;

    if(qpm.load(":/pics/pics/trash.png"))
    {
        icon.addPixmap(qpm);
        ui->DeleteButton->setIcon(icon);
    }
}

void Menu::on_DeleteButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setText("Etes-vous sûr de vouloir supprimer ce patient ?");
    msgBox.setInformativeText("Vous ne pouvez plus récuperer ses informations.");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);

    if(msgBox.exec()== QMessageBox::Yes){
        P.Delete();
        ui->stackedWidget->setCurrentIndex(1);
        refreshDBPatient();
    }
}


//RDV slots

void Menu::on_ajouterRendezVous_clicked()
{
    //empty fields verification
    if(ui->idRendezVous->text().size()==0 || ui->emailPatientRendezVous->text().size()==0 || ui->nomPatientRendezVous->text().size()==0 || ui->prenomPatientRendezVous->text().size()==0){
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setText("Can't leave empty fields.");
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
    else{
        //email verification
        if(!R.isEmailAddress(ui->emailPatientRendezVous->text())){
            QMessageBox msgBox;
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setText("Invalid Email.");
            msgBox.setDefaultButton(QMessageBox::Ok);
            msgBox.exec();
        }
        else{
            //affecting input to my class

            if(ui->ajouterRendezVous->text()=="Ajouter"){
                if(R.addValuesToDB(ui->nomPatientRendezVous->text(),ui->prenomPatientRendezVous->text(),ui->idRendezVous->text(),ui->emailPatientRendezVous->text(),ui->dateHeureRendezVous->dateTime()))
                {
                    ui->stackedWidget->setCurrentIndex(2);
                    refreshDBRdv();
                    initialiserRDV();
                }
            }
            else{
                if(R.modifyValues(ui->nomPatientRendezVous->text(),ui->prenomPatientRendezVous->text(),ui->idRendezVous->text(),ui->emailPatientRendezVous->text(),ui->dateHeureRendezVous->dateTime()))
                {
                    ui->stackedWidget->setCurrentIndex(2);
                    refreshDBRdv();
                    initialiserRDV();
                }
            }

        }
    }
}

void Menu::on_annuler_clicked()
{
    initialiserRDV();
    ui->stackedWidget->setCurrentIndex(2);
}

void Menu::on_DeleteButton_2_pressed()
{
    QIcon icon;
    QPixmap qpm;

    if(qpm.load(":/pics/pics/trashOpen.png"))
    {
        icon.addPixmap(qpm);
        ui->DeleteButton_2->setIcon(icon);
    }
    QSound::play(":/pics/pics/trashmp3.wav");
}

void Menu::on_DeleteButton_2_released()
{
    QIcon icon;
    QPixmap qpm;

    if(qpm.load(":/pics/pics/trash.png"))
    {
        icon.addPixmap(qpm);
        ui->DeleteButton_2->setIcon(icon);
    }
}

void Menu::on_DeleteButton_2_clicked()
{

    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Question);
    msgBox.setText("Etes-vous sûr de vouloir supprimer ce rendez vous ?");
    msgBox.setInformativeText("Vous ne pouvez plus récuperer ses informations.");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);

    if(msgBox.exec()== QMessageBox::Yes){
        R.Delete();
        ui->stackedWidget->setCurrentIndex(2);
        refreshDBRdv();
    }
}

void Menu::on_stackedWidget_currentChanged(int arg1)
{
    if(arg1==0 || arg1==1 || arg1==2){
        initialiserRDV();
        initialiserPatient();
        setWindowTitle("Hoptimal");
    }
}

void Menu::on_email_sending_clicked()
{
    R.send_email(R.getEmail(),R.getDateTime().date().toString("dd/MM/yyyy"),R.getDateTime().time().toString("hh:mm"),R.getPrenom());
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setText("An email has been sent.");
    msgBox.setDefaultButton(QMessageBox::Ok);
    if(msgBox.exec()==QMessageBox::Ok)
        ui->stackedWidget->setCurrentIndex(2);
}

void Menu::on_email_sending_pressed()
{
    QIcon icon;
    QPixmap qpm;

    if(qpm.load(":/pics/pics/email_open.png"))
    {
        icon.addPixmap(qpm);
        ui->email_sending->setIcon(icon);
    }
}

void Menu::on_email_sending_released()
{
    QIcon icon;
    QPixmap qpm;

    if(qpm.load(":/pics/pics/email_closed.png"))
    {
        icon.addPixmap(qpm);
        ui->email_sending->setIcon(icon);
    }
}

void Menu::on_pdf_icon_clicked()
{
    P.printPDF();
    ui->stackedWidget->setCurrentIndex(1);
}

void Menu::on_NewPatient_button_clicked()
{
    initialiserPatient();
    ui->stackedWidget->setCurrentIndex(3);
}

void Menu::on_newRDV_button_clicked()
{
    initialiserRDV();
    ui->stackedWidget->setCurrentIndex(4);
}

void Menu::on_nomPatient_textChanged(const QString &arg1)
{
    if(arg1==""){
        ui->Nom_error->setText("Ce champ ne peut pas rester vide!");
    }
    else
        ui->Nom_error->setText("");
}

void Menu::on_prenomPatient_textChanged(const QString &arg1)
{
    if(arg1==""){
        ui->Prenom_error->setText("Ce champ ne peut pas rester vide!");
    }
    else
        ui->Prenom_error->setText("");
}

void Menu::on_numChambrePatient_textChanged(const QString &arg1)
{
    if(arg1==""){
        ui->numChambre_error->setText("Ce champ ne peut pas rester vide!");
    }
    else
        ui->numChambre_error->setText("");
}

void Menu::on_cinPatient_textChanged(const QString &arg1)
{
    if(arg1=="")
            ui->Cin_error->setText("Ce champ ne peut pas rester vide!");
    else if(arg1.length()!=8){
        ui->Cin_error->setText("Le CIN doit être composé de 8 chiffres!");
    }
    else
        ui->Cin_error->setText("");
}

void Menu::on_advanced_cin_textChanged(const QString &arg1)
{
    advanced();
}

void Menu::on_advanced_nom_textChanged(const QString &arg1)
{
    advanced();
}

void Menu::on_advanced_prenom_textChanged(const QString &arg1)
{
    advanced();
}

void Menu::on_advanced_chambre_textChanged(const QString &arg1)
{
    advanced();
}



void Menu::on_advanced_button_clicked()
{
    advanced_bool=!advanced_bool;
    if(advanced_bool){
        ui->advanced_2->setVisible(true);
        ui->recherchePatient->setEnabled(false);
        ui->recherchePatient->setText("");
    }
    else{
        ui->advanced_2->setVisible(false);
        ui->recherchePatient->setEnabled(true);
    }
}

#include "menu.h"


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
    advancedRDV_bool=false;
    ui->advanced_rdv->setVisible(false);
    advancedPatient_bool=false;
    ui->advanced_2->setVisible(false);
}

Menu::~Menu()
{
    db.closeDB();
    delete ui;
}

//usefull functions

void Menu::advancedRDV(){
    R.updateMinuscule();
    QString column=triRDV();
    QSqlQuery qry;
    ui->listRendezVous->setModel(R.search(qry,column,ui->advanced_cinrdv->text(),ui->advanced_nomrdv->text(),ui->advanced_prenomrdv->text(),ui->advanced_emailrdv->text()));
    qDebug("List RDV refreshed.");

}


void Menu::advancedPatient(){
    P.updateMinuscule();
    QString column=triPatient();
    QSqlQuery qry;
    ui->listPatient->setModel(P.search(qry,column,ui->advanced_cin->text(),ui->advanced_nom->text(),ui->advanced_prenom->text(),ui->advanced_chambre->text()));
    qDebug("List patient refreshed.");

}

void Menu::initialiserErrorsRDV(){
    ui->nom_error_rdv->setText("");
    ui->prenom_error_rdv->setText("");
    ui->id_error->setText("");
    ui->prenomPatientRendezVous->setMaxLength(20);
    ui->nomPatientRendezVous->setMaxLength(20);
    ui->idRendezVous->setMaxLength(20);
}

void Menu::initialiserErrorsPatient(){
    ui->Nom_error->setText("");
    ui->Prenom_error->setText("");
    ui->Cin_error->setText("");
    ui->numChambre_error->setText("");
    ui->prenomPatient->setMaxLength(20);
    ui->nomPatient->setMaxLength(20);
    ui->numChambrePatient->setMaxLength(20);
    ui->cinPatient->setMaxLength(8);
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
    R.updateMinuscule();
    QString arg1=ui->rechercheRendezVous->text();
    QSqlQuery qry;
    QString column=triRDV();
    if(arg1!=""){
        ui->listRendezVous->setModel(R.search(qry,column,arg1));
        qDebug("List RDV refreshed.");
    }
    else{
        ui->listRendezVous->setModel(R.search(qry,column));
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
    P.updateMinuscule();
    QString arg1=ui->recherchePatient->text();
    QString column=triPatient();
    QSqlQuery qry;
    if(arg1!=""){
        ui->listPatient->setModel(P.search(qry,column,arg1));
        qDebug("List patient refreshed.");
    }
    else{ 
        ui->listPatient->setModel(P.search(qry,column));
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
    ui->advanced_cinrdv->setPlaceholderText("Rechercher par l'ID de la rendez vous");
    ui->advanced_nomrdv->setPlaceholderText("Rechercher par le nom du patient");
    ui->advanced_prenomrdv->setPlaceholderText("Rechercher par le prenom du patient");
    ui->advanced_emailrdv->setPlaceholderText("Rechercher par l'email du patient");

    QIcon icon,icon1,iconMail,iconPdf,advancedIcon;
    QPixmap qpm,qpm1,qpm2,qpm3,advanced;
    QPixmap qpmDelete,qpmMail;

    if(advanced.load(":/pics/pics/advanced.png"))
    {
        advancedIcon.addPixmap(advanced);
        ui->advanced_button->setIcon(advancedIcon);
        ui->advancedButton_rdv->setIcon(advancedIcon);
    }
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
    initialiserErrorsRDV();
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
    if(!advancedPatient_bool){
    ui->recherchePatient->setText("");
    refreshDBPatient();
    }
    else
        advancedPatient();
}

void Menu::on_triRDV_currentTextChanged()
{
    if(!advancedRDV_bool){
    ui->rechercheRendezVous->setText("");
    refreshDBRdv();
    }
    else
       advancedRDV();

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
        msgBox.setText("Impossible de laisser des champs vides.");
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
    else{

        //number check and testing
        QIntValidator v(0,1316134911,this);
        int pos=0;
        if(CIN=="00000000"){
            QMessageBox msgBox;
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setText("Le CIN ne peut pas être 00000000.");
            msgBox.setDefaultButton(QMessageBox::Ok);
            msgBox.exec();
        }
        else{
            if(!v.validate(CIN,pos)){
                //if u have letters in the cin
                QMessageBox msgBox;
                msgBox.setIcon(QMessageBox::Critical);
                msgBox.setText("Vous ne pouvez pas avoir des lettres dans le CIN.");
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
                    msgBox.setText("La longueur du CIN doit être de 8.");
                    msgBox.setDefaultButton(QMessageBox::Ok);
                    msgBox.exec();
                }
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
        msgBox.setText("Impossible de laisser des champs vides.");
        msgBox.setDefaultButton(QMessageBox::Ok);
        msgBox.exec();
    }
    else{
        //email verification
        if(!R.isEmailAddress(ui->emailPatientRendezVous->text())){
            QMessageBox msgBox;
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setText("Email invalide.");
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
    msgBox.setText("Un email a été envoyé.");
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
    Q_UNUSED(arg1);
    advancedPatient();
}

void Menu::on_advanced_nom_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    advancedPatient();
}

void Menu::on_advanced_prenom_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    advancedPatient();
}

void Menu::on_advanced_chambre_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    advancedPatient();
}



void Menu::on_advanced_button_clicked()
{
    advancedPatient_bool=!advancedPatient_bool;
    if(advancedPatient_bool){
        ui->advanced_2->setVisible(true);
        ui->recherchePatient->setEnabled(false);
        ui->recherchePatient->setText("");
        ui->recherchePatient->setStyleSheet("background-color:rgba(0, 33, 52, 60);");
    }
    else{
        ui->advanced_2->setVisible(false);
        ui->recherchePatient->setEnabled(true);
        ui->advanced_cin->setText("");
        ui->advanced_nom->setText("");
        ui->advanced_prenom->setText("");
        ui->advanced_chambre->setText("");
        ui->recherchePatient->setStyleSheet("background-color:rgba(0, 33, 52, 100);");
    }
}

void Menu::on_advanced_cinrdv_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    advancedRDV();
}

void Menu::on_advanced_nomrdv_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    advancedRDV();
}

void Menu::on_advanced_prenomrdv_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    advancedRDV();
}

void Menu::on_advanced_emailrdv_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    advancedRDV();
}

void Menu::on_advancedButton_rdv_clicked()
{
    advancedRDV_bool=!advancedRDV_bool;
    if(advancedRDV_bool){
        ui->advanced_rdv->setVisible(true);
        ui->rechercheRendezVous->setEnabled(false);
        ui->rechercheRendezVous->setText("");
        ui->rechercheRendezVous->setStyleSheet("background-color:rgba(0, 33, 52, 60);");
    }
    else{
        ui->advanced_rdv->setVisible(false);
        ui->rechercheRendezVous->setEnabled(true);
        ui->advanced_cinrdv->setText("");
        ui->advanced_nomrdv->setText("");
        ui->advanced_emailrdv->setText("");
        ui->advanced_prenomrdv->setText("");
        ui->rechercheRendezVous->setStyleSheet("background-color:rgba(0, 33, 52, 100);");
    }
}

void Menu::on_idRendezVous_textChanged(const QString &arg1)
{
    if(arg1==""){
        ui->id_error->setText("Ce champ ne peut pas rester vide!");
    }
    else
        ui->id_error->setText("");
}

void Menu::on_nomPatientRendezVous_textChanged(const QString &arg1)
{
    if(arg1==""){
        ui->nom_error_rdv->setText("Ce champ ne peut pas rester vide!");
    }
    else
        ui->nom_error_rdv->setText("");
}

void Menu::on_prenomPatientRendezVous_textChanged(const QString &arg1)
{
    if(arg1==""){
        ui->prenom_error_rdv->setText("Ce champ ne peut pas rester vide!");
    }
    else
        ui->prenom_error_rdv->setText("");
}

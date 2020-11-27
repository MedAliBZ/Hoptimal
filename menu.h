#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include "patient.h"
#include "rendezvous.h"
#include <QList>
#include <QListWidget>
#include <QMessageBox>
#include <QSound>
#include <windows.h>
#include "ui_menu.h"
#include <QVector>
#include <QPropertyAnimation>
#include <QMovie>
#include <QLayout>
#include <QSqlQueryModel>
#include <fstream>
#include <QFile>
#include <QTextStream>


QT_BEGIN_NAMESPACE
namespace Ui { class Menu; }
QT_END_NAMESPACE

class Menu : public QMainWindow
{
    Q_OBJECT

private:
    Patient P;
    RendezVous R;
    ConnectDB db;
    bool advancedPatient_bool;
    bool advancedRDV_bool;

public:
    Menu(QWidget *parent = nullptr);
    ~Menu();

    void initialiserErrorsPatient();

    void initialiserImages();

    void smallLineAnimationPatient();

    void smallLineAnimationRendezVous();

    void bigLineAnimationPatient();

    void bigLineAnimationRendezVous();

    void refreshDBPatient();

    void refreshDBRdv();

    QString triPatient();

    QString triRDV();

    void initialiserPatient();

    void afficherPatient(QString CIN,QString nom,QString prenom,QDate dateNaissance,QString numChambre);

    void initialiserRDV();

    void afficherRDV(QString id,QString nomPatient,QString prenomPatient,QString email,QDateTime dateTime);

    void advancedPatient();

    void advancedRDV();

private slots:
    void on_menu_listeRendezVous_clicked();

    void on_menu_listePatients_clicked();

    void on_rechercheRendezVous_textChanged();

    void on_recherchePatient_textChanged();

    void on_Home_Button_2_clicked();

    void on_Home_Button_clicked();

    void on_RendezVous_Button_2_clicked();

    void on_Patient_Button_clicked();

    void on_listPatient_doubleClicked(const QModelIndex &index);

    void on_listRendezVous_doubleClicked(const QModelIndex &index);

    void on_triPatient_currentTextChanged();

    void on_triRDV_currentTextChanged();

    void on_ajouterPatient_clicked();

    void on_Annuler_clicked();

    void on_DeleteButton_pressed();

    void on_DeleteButton_released();

    void on_DeleteButton_clicked();

    void on_ajouterRendezVous_clicked();

    void on_annuler_clicked();

    void on_DeleteButton_2_pressed();

    void on_DeleteButton_2_released();

    void on_DeleteButton_2_clicked();

    void on_stackedWidget_currentChanged(int arg1);

    void on_email_sending_clicked();

    void on_email_sending_pressed();

    void on_email_sending_released();

    void on_pdf_icon_clicked();

    void on_NewPatient_button_clicked();

    void on_newRDV_button_clicked();

    void on_nomPatient_textChanged(const QString &arg1);

    void on_prenomPatient_textChanged(const QString &arg1);

    void on_numChambrePatient_textChanged(const QString &arg1);

    void on_cinPatient_textChanged(const QString &arg1);

    void on_advanced_cin_textChanged(const QString &arg1);

    void on_advanced_nom_textChanged(const QString &arg1);

    void on_advanced_prenom_textChanged(const QString &arg1);

    void on_advanced_chambre_textChanged(const QString &arg1);


    void on_advanced_button_clicked();

    void on_advanced_cinrdv_textChanged(const QString &arg1);

    void on_advanced_nomrdv_textChanged(const QString &arg1);

    void on_advanced_prenomrdv_textChanged(const QString &arg1);

    void on_advanced_emailrdv_textChanged(const QString &arg1);

    void on_advancedButton_rdv_clicked();

private:
    Ui::Menu *ui;
};
#endif // MENU_H

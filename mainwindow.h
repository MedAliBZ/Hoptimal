#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QListWidgetItem>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
     void smallLineAnimationEquipement();
     void smallLineAnimationMedicament();




private slots:
    void on_list_med_clicked();

    void on_list_eq_clicked();

    void on_Home_2_clicked();

    void on_Home_3_clicked();

    void on_Equipement_2_clicked();

    void on_Medicament_2_clicked();

    void on_Medicament_clicked();

    void on_Equipement_clicked();

    void on_ajouter_med_clicked();

    void on_pushButton_3_clicked();

    void on_ajouter_equi_clicked();

    void on_pushButton_5_clicked();

    void on_annuler_clicked();

    void on_pushButton_ajouter_clicked();

    void Ajouter_Medicament();


    void on_pushButton_anuuler_clicked();

    void on_effacer_medicament_clicked();

    void on_effacer_equipement_clicked();

    void on_annuler_4_clicked();

    void on_annuler_3_clicked();

    void afficher_medicament();

    void afficher_equipement();


    QString get_nom_med(){return nom_medicament_1;}
    void set_nom_medicament(QString nom_med){nom_medicament_1=nom_med;}

    void on_chercher_med_textChanged(const QString &arg1);

    void on_listWidget_MED_itemDoubleClicked(QListWidgetItem *item);

    void on_ModifierMedicament_clicked();


    void on_ajout_equi_clicked();

    void on_chercher_equi_textChanged(const QString &arg1);

    void on_listWidget_EQUI_itemDoubleClicked(QListWidgetItem *item);

    void on_ModifierEquipement_clicked();

private:
    Ui::MainWindow *ui;
    QString nom_medicament_1;

};
#endif // MAINWINDOW_H

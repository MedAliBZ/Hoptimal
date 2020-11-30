#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "service.h"
#include "chambre.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_AjouterService_clicked();

    void on_pushButton_SupprimerService_clicked();

    void on_pushButton_menuChambres_clicked();

    void on_pushButton_menuServices_clicked();

    void on_ajouter_service_clicked();

    void on_supprimer_service_clicked();

    void on_ajouter_chambre_clicked();

    void on_supprimer_chambre_clicked();

    void on_pushButton_Services_clicked();

    void on_pushButton_Chambres_clicked();

    void on_pushButton_Menu_clicked();

    void on_pushButton_services_clicked();

    void on_pushButton_Chambre_clicked();

    void on_pushButton_menu_clicked();

    void on_pushButton_AnnulerAjoutService_clicked();

    void on_pushButton_annulerSuppService_clicked();

    void on_pushButton_AnnulerModifService_clicked();

    void on_pushButton_AjoutChambre_clicked();

    void on_pushButton_AnnulerAjoutChambre_clicked();

    void on_pushButton_AnnulerSuppChambre_clicked();

    void on_pushButton_SupprimerChambre_clicked();

    void on_pushButton_modifService_clicked();

    void on_tableView_services_activated(const QModelIndex &index);

    void on_tableView_chambres_activated(const QModelIndex &index);

    void on_pushButton_RetourAffChambre_clicked();

    void on_pushButton_RetourAffService_clicked();

    void on_pushButton_modifierServiceAff_clicked();

    void on_pushButton_triServices_clicked();

    void on_pushButton_ModifChambre_clicked();

    void on_pushButton_annulerModifChambre_clicked();

    void on_pushButton_ModifierChambre_clicked();

    void on_pushButton_imprimerService_clicked();


    void on_pushButton_rechercherChambre_clicked();

    void on_pushButton_triChambre_clicked();

    void on_pushButton_rechercherService_clicked();

    void on_pushButton_StatService_clicked();

    void statistiques();
    void on_pushButton_backstat_clicked();

private:
    Ui::MainWindow *ui;
    service ser;
    chambre cham;
    QString aux_ser,aux_cham;
};
#endif // MAINWINDOW_H

#ifndef SECOURS_H
#define SECOURS_H

#include <QMainWindow>
#include "ambulance.h"
#include "mission.h"


QT_BEGIN_NAMESPACE
namespace Ui { class secours; }
QT_END_NAMESPACE

class secours : public QMainWindow
{
    Q_OBJECT

public:
    secours(QWidget *parent = nullptr);
    ~secours();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_13_clicked();

    void on_tabambulance_activated(const QModelIndex &index);




    void on_pushButton_15_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::secours *ui;
     ambulance tmpambulance;
     mission tmpmission;
};
#endif // SECOURS_H

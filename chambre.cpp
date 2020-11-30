#include "chambre.h"
#include <QString>
#include <QSpinBox>
#include <QComboBox>
#include <QSqlQuery>
#include <QSqlQueryModel>

#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
chambre::chambre()
{

}
chambre::chambre(QString emplacement,QString type,QString numero,QString nombre_lits,QString nom_surveillant )
{
  this->emplacement=emplacement;
  this->type=type;
  this->numero=numero;
  this->nombre_lits=nombre_lits;
  this->nom_surveillant=nom_surveillant;
}

bool chambre::ajouter_chambre()
{
    QSqlQuery query;
    query.prepare("insert into CHAMBRE(EMPLACEMENT,TYPE,NUMERO,NOMBRE_LITS,NOM_SURVEILLANT)"
                  "values(:emplacement,:type,:numero,:nombre_lits,:nom_surveillant)");
    query.bindValue(":emplacement",emplacement);
    query.bindValue(":type",type);
    query.bindValue(":numero",numero);
    query.bindValue(":nombre_lits",nombre_lits);
    query.bindValue(":nom_surveillant",nom_surveillant);
    return query.exec();
}
bool chambre::supprimer_chambre(QString num_supp)
{
    QSqlQuery query;
    query.prepare("delete from CHAMBRE where NUMERO=:numero");
    query.bindValue(":numero",num_supp);
    return  query.exec();
}

QSqlQueryModel* chambre::afficher_ListeChambre()
{
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from CHAMBRE");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("emplacement"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("type"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("numero"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("nombre_lits"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("nom_surveillant"));
    return model;
}
QSqlQuery* chambre::afficher_chambre(QString val)
{
    QSqlQuery* query=new QSqlQuery();
    query->prepare("select * from CHAMBRE where NUMERO='"+val+"'");
    return  query;
}
bool chambre::modifier_chambre(QString old_num)
{
    QSqlQuery query;
    query.prepare("update CHAMBRE set EMPLACEMENT=:emplacement,TYPE=:type,NUMERO=:numero,NOMBRE_LITS=:nombre_lits,NOM_SURVEILLANT=:nom_surveillant where NUMERO = '"+old_num+"'");
    query.bindValue(":emplacement",emplacement);
    query.bindValue(":type",type);
    query.bindValue(":numero",numero);
    query.bindValue(":nombre_lits",nombre_lits);
    query.bindValue(":nom_surveillant",nom_surveillant);
    return query.exec();
}

QSqlQueryModel * chambre::rechercher_chambre(QString numero )
{
    QSqlQueryModel * model= new QSqlQueryModel();

            model->setQuery("SELECT * FROM CHAMBRE WHERE( EMPLACEMENT =  '"+numero+"' OR TYPE='"+numero+"'OR NUMERO='"+numero+"'OR NOMBRE_LITS='"+numero+"' OR NOM_SURVEILLANT='"+numero+"')");
            model->setHeaderData(0, Qt::Horizontal, QObject::tr("emplacement"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("numero"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("nombre_lits"));
            model->setHeaderData(4,Qt::Horizontal,QObject::tr("nom_surveillant"));

        return model ;
}
QSqlQueryModel * chambre::trier_chambre()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("SELECT * FROM CHAMBRE ORDER BY EMPLACEMENT ;");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("emplacement"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("numero"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nombre_lits"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("nom_surveillant"));
    return model;
}

bool chambre::controle_saisieChambre(chambre cham)
{
  if((cham.get_type()=="")||(cham.get_numero()=="")||(cham.get_emplacement()=="")||(cham.get_nombre_lits()=="")||(cham.get_nom_surveillant()==""))
      return true;
  else
      return false;
}

bool chambre::controle_saisie_lits_ChGarde(chambre cham)
{
    bool test=false;
    if((cham.get_emplacement()=="Chambre de garde")&&(cham.get_nombre_lits()>3))
      {
       test= true;
      }
    return  test;
}
bool chambre::controle_saisie_lits_ChPatient(chambre cham)
{
    bool test=false;
    if((cham.get_emplacement()=="Chambre du patient")&&(cham.get_nombre_lits()>4))
    {
        test= true;
    }
    return test;
}


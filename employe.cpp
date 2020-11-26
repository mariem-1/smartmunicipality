#include "employe.h"
#include <QString>
#include <QSqlQuery>
#include <QDebug>

Employe::Employe()
{
    id="";
    nom="";
    prenom="";
    telephone="";
    poste="";
    ddn="";
}
Employe::Employe(QString id,QString nom ,QString prenom,QString poste,QString telephone ,QString ddn){
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->telephone=telephone;
    this->poste=poste;
    this->ddn=ddn;
}


bool Employe::ajouter(){
    QSqlQuery query;
    //QString
    query.prepare("insert into employe (ID, NOM, PRENOM, POSTE, TELEPHONE, DDE )" "values (:id, :nom, :prenom, :poste, :telephone, :ddn)");
    query.bindValue(":id",id);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":poste",poste);
    query.bindValue(":telephone",telephone);
    query.bindValue(":ddn",ddn);

    return    query.exec();
}

QSqlQueryModel * Employe::afficher(){
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select * from employe");

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("poste"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("telephone"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("ddn"));

     return model;
}

bool Employe::supprimer(QString idE)
{
    QSqlQuery query;
    query.prepare("Delete from employe where ID = :id");
    query.bindValue(":id", idE);
    return    query.exec();
}
bool Employe ::modifier(QString idp)
{    QSqlQuery query;


     query.prepare("UPDATE employe SET NOM=:nom ,PRENOM=:prenom ,POSTE=:poste ,TELEPHONE=:telephone, DDE=:dde  where ID = :idp");
      query.bindValue(":idp",idp);
      query.bindValue(":nom",nom);
      query.bindValue(":prenom",prenom);
      query.bindValue(":poste",poste);
      query.bindValue(":telephone",telephone);
       query.bindValue(":dde",ddn);


        return    query.exec();
}
 QSqlQueryModel * Employe::afficherid(){
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("select id  from Employe");

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
     return model;
 }


 QSqlQueryModel *   Employe::recherche_id(QString id)
 {
     QSqlQueryModel * model = new QSqlQueryModel();

     model->setQuery("select * from employe WHERE id||NOM||PRENOM||POSTE||TELEPHONE||DDE LIKE '%"+id+"%'");
     qDebug()<<id;
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("poste"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("telephone"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("ddn"));

     return model;
 }

QSqlQueryModel *  Employe::trier(QString critere )
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from employe order by "+critere+" desc");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("poste"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("telephone"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ddn"));

  return model;
}

QSqlQuery * Employe::recherche_id2(QString id)
{
    QSqlQuery * model = new QSqlQuery();
    model->prepare("select * from employe WHERE id LIKE "+id+"");
    model->exec();
    qDebug()<<id;
    return model;
}

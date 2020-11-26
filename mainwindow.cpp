#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QSqlQuery>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    refresh();
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refresh(){
    ui->tableViewEmploye->setModel(tmpemploye.afficher());
    ui->tableViewposte->setModel(tmpposte.afficher());
    ui->comboBox_4->setModel(tmpposte.afficherid());
    ui->comboBox_5->setModel(tmpemploye.afficherid());
    ui->comboBox_post->setModel(tmpposte.affichergrade());



    initialiser_formulaire();

}

bool MainWindow::verifier_formulaire_ajout_employe(){


    if ((ui->lineEditid->text()!="")||(ui->lineEditnom->text()!="")||(ui->lineEditprenom->text()!="")|| (ui->lineEdittelephone->text()!="")||(ui->dateEditddn->text()!="")){
        return true;
    }
    else return false;
}



void MainWindow::initialiser_formulaire(){

    ui->lineEditid->clear();
    ui->lineEditnom->clear();
    ui->lineEditprenom->clear();
    ui->comboBox_post->clear();
    ui->lineEdittelephone->clear();
    ui->dateEditddn->clear();

    ui->comboBox_5->clear();
    ui->lineEditadres_2->clear();
    ui->lineEditprenom_2->clear();
    ui->lineEditposte_2->clear();
    ui->lineEdittel->clear();
    ui->dateEdit_2->clear();

    ui->lineEditid_5->clear();
    ui->lineEditgrade->clear();
    ui->lineEditavantage->clear();
    ui->lineEdithoraire->clear();
    ui->lineEditsalaire->clear();

    ui->comboBox_4->clear();
    ui->lineEditadres_3->clear();
    ui->lineEditsurface_4->clear();
    ui->lineEditbudget_4->clear();
    ui->lineEditbudget_5->clear();

}

void MainWindow::on_pushButton_clicked()
{
    QString id=ui->lineEditid->text();
    QString nom=ui->lineEditnom->text();
    QString prenom=ui->lineEditprenom->text();
    QString post = ui->comboBox_post->currentText();
    QString telephone=ui->lineEdittelephone->text();
    QString date=ui->dateEditddn->text();

    qDebug()<<verifier_formulaire_ajout_employe();

    if (verifier_formulaire_ajout_employe()==true){
        Employe e(id,nom,prenom,post,telephone,date);

        bool test= e.ajouter();
        refresh();
    }
    else{
        qDebug()<<"erreur";
    }

}

void MainWindow::on_supprimeremploye_clicked()
{
    QString ide=ui->lineEdit_19->text();

    Employe e;

    bool test= e.supprimer(ide);
    ui->tableViewEmploye->setModel(tmpemploye.afficher());
}

void MainWindow::on_pushButton_2_clicked()
{
    QString id=ui->lineEditid_5->text();
    QString grade=ui->lineEditgrade->text();
    QString avantage=ui->lineEditavantage->text();
    QString horaire = ui->lineEdithoraire->text();
    QString salaire=ui->lineEditsalaire->text();

    poste p(id,grade,avantage,horaire,salaire);

    bool test= p.ajouter();
    ui->tableViewposte->setModel(tmpposte.afficher());
}



void MainWindow::on_supprimerposte_2_clicked()
{
    QString idp=ui->lineEdit_21->text();

    poste p;

    bool test= p.supprimer(idp);
    ui->tableViewposte->setModel(tmpposte.afficher());
}

void MainWindow::on_modifierchantier_2_clicked()
{
    QString id=ui->comboBox_4->currentText();
    QString grade=ui->lineEditadres_3->text();
    QString avantage=ui->lineEditsurface_4->text();
    QString horaire = ui->lineEditbudget_4->text();
    QString salaire=ui->lineEditbudget_5->text();

    poste p (id,grade,avantage,horaire,salaire);
    bool test= p.modifier(id);
 ui->tableViewposte->setModel(tmpposte.afficher());

}   //ui->comboBox_3->setModel(tmplocalosation.afficheridlocalisation());
// hhh  nsit


void MainWindow::on_modifierchantier_clicked()
{
    QString id=ui->comboBox_5->currentText();
    QString nom=ui->lineEditadres_2->text();
    QString prenom= ui->lineEditprenom_2->text();
    QString poste=ui->lineEditposte_2->text();
    QString telephone=ui->lineEdittel->text();
    QString date=ui->dateEdit_2->text();

    Employe e (id,nom, prenom,poste,telephone,date);
    bool test= e.modifier(id);
    refresh();
}


/*void MainWindow::on_comboBox_5_activated(const QString &arg1)
{
   //ui->
}

/*void MainWindow::on_pb_ok1_clicked()
{
    int idd=ui->id_supp->currentText().toInt();
    bool test= tmp_employe.supprimer(id);
        if(test)
        {
            refresh_stat_animaux();
            ui->id_aff_2->setModel(tmp_animal.afficher_id());
            ui->id_supp->setModel(tmp_animal.afficher_id());
            ui->id_modif->setModel(tmp_animal.afficher_id());
            ui->id_modif_2->setModel(tmp_animal.afficher_id());
            ui->tab_animaux->setModel(tmp_animal.afficher());//refresh
            QMessageBox::information(nullptr, QObject::tr("Supprimer un animal"),
            QObject::tr("Animal supprimé.\n"
                                    "Cliquez sur Ok pour continuer."), QMessageBox::Ok);

}*/

void MainWindow::on_pb_ok1_clicked()
{
     ui->tableViewEmploye->setModel(tmpemploye.recherche_id(ui->lineEdit_18->text()));

}

void MainWindow::on_pb_ok1_2_clicked()
{
    ui->tableViewposte->setModel(tmpposte.recherche(ui->lineEdit_20->text()));

}

void MainWindow::on_comboBox_2_activated(const QString &arg1)
{
     ui->tableViewposte->setModel(tmpposte.trier(ui->comboBox_2->currentText()));
}

void MainWindow::on_comboBox_activated(const QString &arg1)
{
    ui->tableViewEmploye->setModel(tmpemploye.trier(ui->comboBox->currentText()));
}

void MainWindow::on_comboBox_4_activated(const QString &arg1)
{

}



void MainWindow::on_comboBox_5_activated(const QString &arg1)
{
    QString id=ui->comboBox_5->currentText();
    QSqlQuery * query=tmpemploye.recherche_id2(id);
    QString nom;
    QString prenom;
    QString poste;
    QString telephone;
    QString dde;

    if (query->next())
      {
        nom= query->value(1).toString();
        ui->lineEditadres_2->setText(nom);
        prenom= query->value(2).toString();
        ui->lineEditprenom_2->setText(prenom);
        poste= query->value(3).toString();
        ui->lineEditposte_2->setText(poste);
        telephone= query->value(4).toString();
        ui->lineEdittel->setText(telephone);
      }
}

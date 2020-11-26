#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "employe.h"
#include "poste.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Employe tmpemploye;
    poste tmpposte ;


private slots:
    void on_pushButton_clicked();

    void on_supprimeremploye_clicked();

    void on_pushButton_2_clicked();


    void on_supprimerposte_2_clicked();


    void on_modifierchantier_2_clicked();

    void on_modifierchantier_clicked();

    void refresh();

    void initialiser_formulaire();

    //void on_pb_ok1_clicked();

    //void on_comboBox_5_activated(const QString &arg1);

    bool verifier_formulaire_ajout_employe();
    
    void on_pb_ok1_clicked();

    void on_pb_ok1_2_clicked();

    void on_comboBox_2_activated(const QString &arg1);

    void on_comboBox_activated(const QString &arg1);

    void on_comboBox_4_activated(const QString &arg1);

    void on_comboBox_5_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

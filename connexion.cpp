#include "connexion.h"
#include <exception>
#include <QString>
Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("mariem");
db.setUserName("mariem");//inserer nom de l'utilisateur
db.setPassword("esprit");//inserer mot de passe de cet utilisateur
db.open();

}
void Connexion::fermerConnexion()
{db.close();}

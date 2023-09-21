/*
Nom :      KOYTCHA
Prénom :   Mustapha
Classe :   A3PSB
Groupe :   2
Version :  1
Exercice : Evaluation - MAIN.C
*/

//---------------------------------------------------------
#include <iostream>
using namespace std;
//---------------------------------------------------------
class personne
{
protected:
    string Nom, Prenom;
    double salaire;
public:
    personne();
    virtual ~personne(){};
    virtual void afficher() = 0;
};

personne::personne()
{
    cout << "--------------------------------------" << endl;
    cout << "Entrez les coordonnees de la personne : " << endl;
    cout << "--------------------------------------" << endl;
    cout << "Nom : ";
    cin >> Nom;
    cout << "Prenom : ";
    cin >> Prenom;
}

void personne::afficher()
{
    cout << "--------------------------------------" << endl;
    cout << "Nom :"    << Nom    << endl;
    cout << "Prenom :" << Prenom << endl;
    cout << "--------------------------------------" << endl;
}

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
#include <math.h>

using namespace std;
//---------------------------------------------------------

class directeur:public admin
{
protected:
    int nbprime=0;

public:
    directeur();
    virtual ~directeur(){};
    virtual void afficher();
    double smb_prime();
    void ajout_prime(int);
};

directeur::directeur():admin()
{
    cout << "Nombre de prime : ";
    cin >> nbprime;
}

double directeur::smb_prime()
{
    double s;
    s = admin::smb_ajd();
    s += salaire * nbprime;
    salaire = s;
    return s;
}

void directeur::afficher()
{
    cout << "--------------------------------------" << endl;
    cout << "            Directeur            " << endl;
    cout << "--------------------------------------" << endl;
    cout << "   Nom :"    << Nom    << endl;
    cout << "   Prenom :" << Prenom << endl;
    cout << "--------------------------------------" << endl;
    cout << "   Annee d entree :" << AE << endl;
    cout << "   Nombre de prime :" << nbprime << " prime(s)" <<endl;
    cout << "   Salaire mensuelle de base en" << AE << " : " << SMB << endl;
    cout << "   Salaire mensuelle de base en 2023 :" << smb_prime() << endl;
    cout << "--------------------------------------" << endl;
}

void directeur::ajout_prime(int a)
{
    cout << "--------------------------------------" << endl;
    cout << "       J'ajoute 2 prime en plus" << endl;
    cout << "--------------------------------------" << endl;
    nbprime+=a;
    smb_prime();
}

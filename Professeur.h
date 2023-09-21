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

class professeur:public admin
{
protected:
    int heure_sup;
    double THS=0;

public:
    professeur();
    virtual ~professeur(){};
    virtual void afficher();
    double smb_heuresup();
    void ajout_heuresup(int);
};

professeur::professeur():admin()
{
    cout << "Nombre d heures sup : ";
    cin >> heure_sup;
}

double professeur::smb_heuresup()
{
    double s;
    s = admin::smb_ajd();
    THS = s / 30;
    s += THS * heure_sup ;
    salaire = s;
    return s;
}

void professeur::afficher()
{
    cout << "--------------------------------------" << endl;
    cout << "            Professeur            " << endl;
    cout << "--------------------------------------" << endl;
    cout << "   Nom :"    << Nom    << endl;
    cout << "   Prenom :" << Prenom << endl;
    cout << "--------------------------------------" << endl;
    cout << "   Annee d entree :" << AE << endl;
    cout << "   Nombre d heures sup :" << heure_sup << endl;
    cout << "   Salaire mensuelle de base en" << AE << " : " << SMB << endl;
    smb_heuresup();
    cout << "       THS = " << THS << endl;                                          // ICI
    cout << "   Salaire mensuelle de base en 2023 :" << smb_heuresup() << endl;
    cout << "--------------------------------------" << endl;
}

void professeur::ajout_heuresup(int a)
{
    cout << "--------------------------------------" << endl;
    cout << "       J'ajoute" << a <<" heures sup en plus" << endl;
    cout << "--------------------------------------" << endl;
    heure_sup+=a;
    smb_heuresup();
}

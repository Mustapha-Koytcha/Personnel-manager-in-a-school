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

class etudiant:public personne
{
protected:
    int type, heure_travail;
    string classe;

public:
    etudiant();
    virtual ~etudiant(){};
    virtual void afficher();
    double salaire_etudiant();
    void ajout_heure(int);

};

etudiant::etudiant():personne()
{
    cout << "Classe : ";
    cin >> classe;
    cout << "Nombre d heure de travail : ";
    cin >> heure_travail;
    cout << "Etes-vous etranger ? (Y:1, N:0) : ";
    cin >> type;
}

double etudiant::salaire_etudiant()
{
    double s;
    s = heure_travail * 8.37;
    salaire = s;
    return s;
}

void etudiant::afficher()
{
    cout << "--------------------------------------" << endl;
    cout << "            Etudiant            " << endl;
    cout << "--------------------------------------" << endl;
    cout << "   Nom :"    << Nom    << endl;
    cout << "   Prenom :" << Prenom << endl;
    cout << "--------------------------------------" << endl;
    cout << "   Classe :" << classe << endl;
    if (type==1)
        cout << "   Etranger : Oui" << endl;
    else
        cout << "   Etranger : Non" << endl;
    cout << "   Nombre d heures de travail :" << heure_travail << endl;
    cout << "   Salaire de l etudiant :" << salaire_etudiant() << endl;
    cout << "--------------------------------------" << endl;
}

void etudiant::ajout_heure(int a)
{
    cout << "--------------------------------------" << endl;
    cout << "       J'ajoute" << a <<" h sup en plus" << endl;
    cout << "--------------------------------------" << endl;
    heure_travail+=a;
    cout<<"Nombre d'heures : "<<heure_travail<<"h"<<endl;
    if(type==1 && heure_travail>76)
    {
        cout<< "Attention vous dépasser le nombre max d'heures pour un etranger !!! 76h maximum pour un etranger"<<endl;
        heure_travail = 76;
    }
    salaire_etudiant();
}

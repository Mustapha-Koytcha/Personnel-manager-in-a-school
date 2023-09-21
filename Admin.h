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

class admin:public personne
{
protected:
    double SMB, AE;

public:
    admin();
    virtual ~admin(){};
    virtual void afficher();
    virtual double smb_ajd();
};

admin::admin():personne()
{
    cout << "Annee d entree : ";
    cin >> AE;
    cout << "Salaire mensuelle de base : ";
    cin >> SMB;
}

double admin::smb_ajd()
{
    double s;
    s = SMB * 12;
    s = s * pow(1.01, 2023 - AE);
    salaire = s/12;
    return s/12;
}

void admin::afficher()
{
    cout << "--------------------------------------" << endl;
    cout << "            Administrateur            " << endl;
    cout << "--------------------------------------" << endl;
    cout << "   Nom :"    << Nom    << endl;
    cout << "   Prenom :" << Prenom << endl;
    cout << "--------------------------------------" << endl;
    cout << "   Annee d entree :" << AE << endl;
    cout << "   Salaire mensuelle de base en" << AE << " : " << SMB << endl;
    cout << "   alaire mensuelle de base en 2023 :" << smb_ajd() << endl;
    cout << "--------------------------------------" << endl;
}

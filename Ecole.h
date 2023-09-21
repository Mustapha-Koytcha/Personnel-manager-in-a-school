/*
Nom : KOYTCHA
Prénom : Mustapha
Classe : AERO 3
Groupe : 2
Version : 1
Exercice : Classe GARAGE - GESTIONNAIRE GARAGE
*/

//---------------------------------------------------------
#include <iostream>
using namespace std;
#include <vector>    //ATTENTION NE PAS OUBLIER
#include <fstream>
//---------------------------------------------------------

class ecole
{
protected:
        vector<personne*> m_personne;

public:
        ecole(){};
        virtual ~ecole(){};
        void ajouter();
        virtual void afficher();
        void supprimer();
};

//------------- DEFINITIONS -------------

void ecole::ajouter()
{
    int choix;
    cout << "--------------------------------------" << endl;
    cout << "1. Directeur" << endl;
    cout << "2. Professeur" << endl;
    cout << "3. Etudiant" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Choix : " << endl;
    cin  >> choix;

    while(choix !=1 && choix != 2 && choix != 3)
    {
        cout << "Choix incorrecte ! Saisissez de nouveau : ";
        cin >> choix;
    }

    if(choix==1)
    {
        system("cls");
        cout << "----------Saisie d'un nouveau directeur----------" << endl;
        m_personne.push_back(new directeur());
    }

    if(choix==2)
    {
        system("cls");
        cout << "----------Saisie d'un nouveau professeur----------" << endl;
        m_personne.push_back(new professeur());
    }
    if(choix==3)
    {
        system("cls");
        cout << "----------Saisie d'un nouveau etudiant----------" << endl;
        m_personne.push_back(new etudiant());
    }
}

void ecole::afficher()
{
    int i, nbv=0, nbm=0;
    double pv=0, pm=0;

    cout << " L ecole comprend : " << i+1 << " personnes" <<endl;
    cout << "--------------------------------------" << endl;
    if(m_personne.size()==0)
        cout << "Personne dans l ecole" <<endl;

    for(i=0;i<m_personne.size();i++)
    {
        m_personne[i]->afficher();
    }
}

void ecole::supprimer()
{
    int choix;
    if(m_personne.size()==0)
        cout << "Personne n est enregistrer !!"<<endl;

    else
    {
        cout << "Entrez le numero de la personne a suppimer : " << endl;
        cin >> choix;

        while(choix < 0 || choix > m_personne.size())
        {
            cout << "Choix incorrecte ! Saisissez de nouveau : ";
            cin >> choix;
        }

        m_personne.erase(m_personne.begin()+(choix-1));
        cout << "Personne supprimer avec succes !! " << endl;
    }
}



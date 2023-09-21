/*
Nom : KOYTCHA
Prénom : Mustapha
Classe : A3PSB
Groupe : 2
Version : 1
Exercice : Evaluation - Partie 1
*/
//---------------------------------------------------------
#include <iostream>
using namespace std;
#include "Personne.h"
#include "Admin.h"
#include "Directeur.h"
#include "Professeur.h"
#include "Etudiant.h"
#include "Ecole.h"
#include "menu.h"

//---------------------------------------------------------
//            PROGRAMME PRINCIPAL
//---------------------------------------------------------
main()
{
    ecole e;
    int a;

    do
    {
        a = menu();

        if(a == 1)
        {
            system("cls");
            e.ajouter();
            system("pause");
            system("cls");
        }

        if(a == 2)
        {
            system("cls");
            e.supprimer();
            system("pause");
            system("cls");
        }

        if(a == 3)
        {
            system("cls");
            e.afficher();
            system("pause");
            system("cls");
        }

        if(a == 4)
        {
            system("cls");
            break;
        }
    }while(true);
    cout<<"Merci de votre visite a bientot !!"<<endl;
}

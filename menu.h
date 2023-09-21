/*
Nom : KOYTCHA
Prénom : Mustapha
Classe : AERO 3
Groupe : 2
Version : 1
Exercice : Menu - GESTIONNAIRE GARAGE
*/

#include <iostream>
using namespace std;


int menu()
{

    cout << "--------------------------------" << endl;
    cout << "            MENU                " << endl;
    cout << "--------------------------------" << endl;
    cout << "1 - AJOUTER"                      << endl;
    cout << "2 - SUPPRIMER"                    << endl;
    cout << "3 - AFFICHER"                     << endl;
    cout << "4 - FIN"                          << endl;
    cout << "--------------------------------" << endl;

    int choix;
    cout << "Saisissez votre choix :" << endl;
    cin >> choix;

    while(choix<0 || choix >4)
    {
        cout << "Choix incorrecte ! Saisissez de nouveau : ";
        cin >> choix;
    }
    return choix;
}


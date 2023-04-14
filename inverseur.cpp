/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:../../2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S
#include <windows.h>
#include <stdio.h>
#include <string>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard

/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    char chaine[100 + 1];
    char *p, *q, tmp;
    cout << "Saisir une chaine au clavier : ";
    cin >> chaine;

    p = &chaine[0];
    q = &chaine[0];
    // On décale q jusqu’à la marque de fin de chaine(le zéro)
    do
    {
        q++;
    } while (*q != '\0');

        q--; // remonte d’un caractère pour pointer sur le dernier

    do
    {
        tmp = *p;
        *p = *q;
        *q = tmp;

        p++;
        q--;
    } while (p < q);
    cout << chaine << endl;

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}
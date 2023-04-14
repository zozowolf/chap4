/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:../../2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard

/*======================================================
Fonction principal
========================================================*/
int main()
{
    // code en dessous
    //============================= Pointeurs =============================
    int i = 65; // variable entière

    int *p; // je définis un pointeur
            // c'est a dire une varible contenant l'@ d'une autre var

    p = &i; // j'indique que p contient l'@ mémoire de i

    // les deux lignes ci-dessus auraient pu ettre condensées
    // int* p = &i;

    //====================== Pointeurs et tableaux C ======================
    // Le nom d'un tableau est l'addresse de sa premiere case
    short int tab[4] = {56, 289, 87, 6987};

    unsigned char *q; // q est l'adresse d'un car non signé
    q = (unsigned char *)tab;

    // découvrons l'encodage des réels
    // codage IEEE754
    float n1 = 4.5;

    // je vais découvrir les 4 octets de codage de ce nombre
    //  je vais définir un pointeur sur le 1er octet
    unsigned char *pn1 = (unsigned char *)&n1;

    // je veux découvrir à quoi corresponds les 4 octets
    //  de codage 42450000
    float n2;
    unsigned char *pn2 = (unsigned char *)&n2;

    *pn2 = 0x00;       // j'écris 0x30 dans le 1er octet
    *(pn2 + 1) = 0x00; // j'écris 0x6B dans le 2e octet
    *(pn2 + 2) = 0x45; // j'écris 0xEA dans le 3e octet
    *(pn2 + 3) = 0x42; // j'écris 0x4D dans le 4e octet

    cout << "n2=" << n2 << endl;

    // je veux définir un tableau de type C
    // mais la taille n'est pas connue à ce stade
    int *tab2;
    int n;

    cout << " Combien de cases veux-tu ? ";
    cin >> n;

    tab2 = new int[n]; // j'alloue la mémoire pourn le tableau
    // ensuite, on peut utiliser le tableau tab2 en utilisant
    // indices, tab[0], tab[1]..... tab[n-1]
    for (unsigned i=0 ;i<n ;i++)
    {
        cout << "Saisir la case "<< i <<" ; ";
        cin >> tab[i];
    }

    cout << " Contenu du tableau ;"<< endl;
    for (unsigned i=0;i<n;i++)
        cout << tab[i]<< " ";

    // je n'ai plus besoin du tableau, je vide la mémoire
    delete[] tab;

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}
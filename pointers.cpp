#include <iostream>
using namespace std;

//Function 1: String 1 + String 2
//Function 2: Recherche d'un char
//Function 3: Recherche nombre occurence de char dans string
//Function 4: Inversion du phrase

//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//------------------------------------------Functions-----------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
char* conc(char* str1, char* str2) { // String 1 + String 2

    // Length of String 1
    int length1 = 0;
    while (str1[length1] != '\0') { length1++; }

    // Length of String 2
    int length2 = 0;
    while (str2[length2] != '\0') { length2++; }

    // Creation du variable resultant
    char* resultat = new char[length1 + length2 + 1];

    int i = 0;

    // Resulat <---- Str1
    for (; i < length1; i++) { resultat[i] = str1[i]; }

    // Resulat <---- Str2
    for (int j = 0; j < length2; j++) {
        resultat[i] = str2[j];
        i++;
    }

    // Null terminate (Important, marque le fin)
    resultat[i] = '\0';

    return resultat;
}

//--------------------------------------------////--------------------------------------------//

char* recherche(char* str, char c) { // Recherche d'un char
    int i = 0;
    char* resultat = new char[50];


    while (str[i] != '\0') {

        if (str[i] == c) {
            snprintf(resultat, 50, "Caractere << %c << trouver a la position: %i", c, i);
            return resultat;
        }
        i++;
    }
    return nullptr; // Incase we cant find
}
//--------------------------------------------////--------------------------------------------//

char* occurence(char* str, char c) { // Recherche nombre occurence de char dans string
    int i = 0;
    int compteur = 0;
    char* resultat = new char[50];


    while (str[i] != '\0') {

        if (str[i] == c) {
            ++compteur;
        }
        i++;
    }

    snprintf(resultat, 50, "Caractere << %c << trouver %d fois", c, compteur);
    return resultat;
}

//--------------------------------------------////--------------------------------------------//

char* inversion(char* str) { // Inversion du phrase
    int i = 0;
    int j = 0;
    char* resultat = new char[100];

    while (str[j] != '\0') { j++; } //Longueur du phrase
    j--; //(Pour eviter Erreur Out of Index)

    while (i < j) {
        char temp = str[i]; //Temporaire pour prendre valeur debut
        str[i] = str[j]; // Le valeur au debut prend celle au dernier
        str[j] = temp; //Le valeur au fin prend le valeur du premier car du temp
        i++; //i bouge aux droit, 
        j--; //j bouge aux gauche,

        //Il continue jusqu'il rencontre aux milieu
    }

    snprintf(resultat, 100, "Ton phrase a ete inverser et est maintenant << %s <<.", str);
    return resultat;
}

//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------MAIN--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//
//--------------------------------------------////--------------------------------------------//

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";

    //char* resultat = conc(str1,str2);
    //char* resultat = recherche(str1,'o');
    //char* resultat = occurence(str1, 'o');
     char* resultat = inversion(str1);

    cout << "String: " << resultat << endl;

    delete[] resultat; // Delete le memoire apres utilisation

    return 0;
}

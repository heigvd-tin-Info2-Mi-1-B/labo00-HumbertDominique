/* labo00.c
 * Auteur:      Dominique Humbert
 * Compilateur: VS code
 *
 * Description :
 *
 * - affiche le nombre d'arguments donn�s au programme (max 50 caract�res)
 * - affiche la liste des arguments donn�s au programme (un argument par ligne),
 * - renvoie un code retour �gal au nombre d'arguments.
 *
 * Remarques :
 *
 * Modifications
 * Date         Auteur                  Commentaires
 * 18.02.2020   Humbert Dominique       Cr�ation du programme
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>

int main(void)
{
//------------------------ variables ------------------------
    char saisie[50] = { '\0' }; 

//------------------------ Compteurs ------------------------
    short compteur = 1, position = -1;

//------------------------ Programme ------------------------
    printf("Saisir des arguments (max 50 caracteres):\n");

    do {
        position++;
        saisie[position] = getchar();
    } while (saisie[position] != '\n');

    position = 0;

    while (saisie[position] != '\0') {// compteur du nombre d'arguments
        if (saisie[position] == ' ') {
            compteur++;
        }
        position++;
    }
    printf("%hd\n", compteur);
    position = 0;
    for (int i = 0; i < compteur; i++) { //affichage  des arguments
        while (saisie[position] != ' ') {
            putchar(saisie[position]);
            position++;
        }
        position++;
        putchar('\n');
    }


    return 0;
}

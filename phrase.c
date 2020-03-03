//
//Créer par Basile le 11/02/2020
//Groupe B2
//Utilisation des fonctions du fichier parametresAffichage.c
//

#include<stdio.h>
/************************************************************************************************/
/* Fonction renvoyant la longueur d une phrase terminee par u n point * /
/***********************************************************************************************/
int longueurPhrase(){
    char ch; /* Caractere courant */
    int nbCarac = 0; /* Nombre de caracteres */
    printf("Saisir une suite de caracteres terminee par . : ");
    scanf("%c",&ch); /* Saisie du n premier caractere */
/* Boucle de saisie */
    while (ch != '.'){
        nbCarac++;
        scanf("%c",&ch);
    }
    return nbCarac;
}
/******************************/
/* Fonction principale * /
/******************************/
int main(void){
    printf("\nNombre de caracteres de la phrase : %d\n",longueurPhrase());
    return 0;
}
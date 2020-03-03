//
//Créer par Basile le 11/02/2020
//Groupe B2
//Utilisation des fonctions du fichier parametresAffichage.c
//
#include <stdio.h>
#include <ctype.h>

#define FAUX 0
#define VRAI 1

int chiffre(char *ch){
    if(isdigit(*ch)){
        return VRAI;
    } else {
        return FAUX;
    }
}

int minuscule(char *ch){
    if (*ch >='a' && *ch <='z')
        return VRAI;
    else return FAUX;
}

int majuscule(char *ch){
    if (*ch >='A' && *ch <='Z')
        return VRAI;
    else return FAUX;
}


void longueurPhrase(){
    char ch; /* Caractere courant */
    int number = 0; /* Nombre de caracteres */
    int maj =0;
    int min = 0;
    printf("Saisir une suite de caracteres terminee par . : ");
    scanf("%c",&ch); /* Saisie du n premier caractere */
/* Boucle de saisie */
    while (ch != '.'){
        if(majuscule(&ch) == 1)
            maj++;
        if(minuscule(&ch) == 1)
            min++;
        if(chiffre(&ch) == 1)
            number++;
        scanf("%c",&ch);
    }
    printf("\nNombre de majuscule :%d\n",maj);
    printf("\nNombre de minuscule :%d\n",min);
    printf("\nNombre de chiffres :%d\n",number);
}


int main(void){
    longueurPhrase();
}
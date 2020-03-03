//
//Créer par Basile le 11/02/2020
//Groupe B2
//Utilisation des fonctions du fichier parametresAffichage.c
//
#include<stdio.h>
#include <ctype.h>
#include <stdlib.h>

float somme(float a, float b){
    return a+b;
}

void min_max(float *a, float *b){
    if(*a > *b){
        float tmp = *a;
        *a = *b;
        *b = tmp;
    }
}

void tri3(float *a, float *b, float *c){
    float x, y ,z;
    x = *a;
    y = *b;
    z = *c;
    min_max(&x,&y);
    min_max(&y,&z);
    min_max(&x,&y);
    *a = x;
    *b = y;
    *c = z;
}

void calculsuite() {
    char ch; /* Caractere courant */
    float number = 0; /* Nombre de caracteres */
    double moyenne =0;
    printf("Saisir une suite de chiffre terminee par 0 : ");
    scanf("%c", &ch); /* Saisie du n premier caractere */
    /* Boucle de saisie */
    while (ch != '0') {
        if (ch >='0' && ch <='9'){
            number++;
            moyenne = somme(moyenne,ch);
        }
        scanf("%c", &ch);
    }
    if(number == 0){
        printf("\nmin = %d",0);
        printf("\nmax = %d",0);
        printf("\nmoyenne = %d",0);
    }else{
        printf("%f", moyenne);
        moyenne = moyenne / number;
        printf("\nmoyenne = %f", moyenne);
    }
}

int main() {
    calculsuite();
    return 0;
}
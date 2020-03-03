//
//Créer par Basile le 11/02/2020
//Groupe B2
//Utilisation des fonctions du fichier parametresAffichage.c
//
#include <stdio.h>

void affichage(float x, float y, float z){
    printf("affichage :%f %f %f\n",x ,y ,z);
}

void lecture(float *a,float *b,float *c){
    float d,e,f;
    printf("Veuillez saisir 3 reels : ");
    scanf("%f%f%f",&d,&e,&f);
    *a = d;
    *b = e;
    *c = f;

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

int main() {
    float a, b, c;
    lecture(&a,&b,&c);
    affichage(a,b,c);
    //min_max(&a,&b);
    tri3(&a,&b,&c);
    affichage(a,b,c);
    return 0;
}
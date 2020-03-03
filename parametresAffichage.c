//
//Créer par Basile le 11/02/2020
//Groupe B2
//Utilisation des fonctions du fichier parametresAffichage.c
//

#include <stdio.h>

/******************************/
/* Sous-Programme affichage   */
/* Description des paramètres */
/* D :                        */
/* D/R :                      */
/* R                          */
/******************************/
/* Declaration et traitement  */
/* A FAIRE */

void affichage(float *x, float *y, float *z){
    printf("%f %f %f",*x ,*y ,*z);
}

/******************************/
/* Fonction principale        */
/******************************/
int main() {
/* Declaration des variables necessaires a l appel du sous-programme affichage */
    float a, b, c;
    
/* Initialisation des variables a, b et c */
/* Demander a l'utilisateur 3 reels et les stocker dans a, b et c */
    printf("Veuillez saisir 3 reels : ");
    scanf("%f%f%f",&a,&b,&c);


/* Test affichage : Appel du sous-programme avec a, b et c comme parametres */
/* A FAIRE */
    affichage(&a,&b,&c);


return 0;
}

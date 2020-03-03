#include <stdio.h>

/******************************/
/* Sous-Programme affichage   */
/* Description des paramètres */
/* D : a, b , c               */
/* D/R :                      */
/* R                          */
/******************************/
/* Declaration et traitement  */
/* A FAIRE */

void affichage(float x, float y, float z){
    printf("%f %f %f",x ,y ,z);
}


/******************************/
/* Sous-Programme lecture     */
/* Description des paramètres */
/* D :                        */
/* D/R :                      */
/* R                          */
/******************************/
/* Declaration et traitement  */
/* A FAIRE */
void lecture(float *a,float *b,float *c){
    float d,e,f;
    printf("Veuillez saisir 3 reels : ");
    scanf("%f%f%f",&d,&e,&f);
    *a = d;
    *b = e;
    *c = f;

}

/******************************/
/* Fonction principale        */
/******************************/
int main() {
/* Declaration des variables necessaires a l appel des sous-programmes lecture et affichage */
    float a, b, c;

/* Test lecture : Appel du sous-programme lecture avec a, b et c comme parametres */
/* A FAIRE */
    lecture(&a,&b,&c);


/* Verification lecture : Appel du sous-programme affichage pour verifier que la lecture precedente est correcte */
/* A FAIRE */
    affichage(a,b,c);


return 0;
}
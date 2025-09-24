#include<stdio.h>

float det(float a,float b,float c,  float d) {
    float S;
    S = (a*d) - (b*c);
    return S;
}
int main()
{
    float u[3], v[3], w[3];
    int i;

    printf("CALCUL DU PRODUT VECTORIEL EN DIMENSION 3\n");
    //vecteur 1
    printf ("entrer des coordonnées du premier vecteur:x,y,z\n");
    for(i=0; i<3; i++) {
        printf("entrer la valeur %d:",i+1);
        scanf("%f",&u[i]);
    }
    //vecteur 2
    printf ("entree des coordonnées du deuxieme vecteur:x,y,z\n");
    for(i=0; i<3; i++) {
        printf("entrer la valeur %d:",i+1);
        scanf("%f",&v[i]);
    }

    //vecteur resultat
    w[0] = det(u[1],u[2],v[1],v[2]);
    w[1] = det(u[2],u[0],v[2],v[0]);
    w[2] = det(u[0],u[1],v[0],v[1]);
    printf (" le produit vectoriel de ces  vecteurs est le vecteur de coordonnees:\n");
    for(i=0; i<3; i++) {
        if(i==0) {
            printf(" (%.2f,",w[i]);
        } else if(i==1) {
            printf("%.2f",w[i]);
        } else {
            printf(",%.2f).",w[i]);
        }
    }
    return 0;
}
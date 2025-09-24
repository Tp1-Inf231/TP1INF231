#include<stdio.h>

int main()
{
    int a,b;
    printf("Entrer deux nombres entiers positifs différent de zéro");
    scanf("%d%d",&a,&b);

    //CALCUL DU PRODUIT a*b
    int S = 0,i,j;
    for(j=1; j<=a; j++) {
        for(i=1; i<=b; i++) {
            S += 1;
        }
    }
    //RESULTATDU PRODUIT
    printf("Resultat: %d x %d = %d",a,b,S);
    return 0;
}
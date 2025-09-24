#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, a, b, i, j, p, Som;

     printf("******PRODUIT DE DEUX MATRICES******");

    // ENTREE DE LA PREMIÈRE  MATRICE
    do
    {
        printf("Entrer la dimension de la premiere matrice nbre de lignes puis nombre de colonnes\n");
        scanf("%d%d", &n, &m);
        if (n <= 0 || m <= 0)
        {
            printf("⚠️ Dimension invalide❗\nNB: la dimension est strictement positive(<< superieur à 0>>) \n");
        }
    } while (n <= 0 || m <= 0);

    int A[n][m];

    printf("Entree ds coefficients de la  matrice\n Consigne : entrer les coefficients de la matrice de la gauche vers la droite en commençant par la premiere ligne\n ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("entrer un coefficient\n");
            scanf("%d", &A[i][j]);
        }
    }
    // ENTREE DE LA DEUXIEME  MATRICE
    do
    {
        printf("Entrer la dimension de la deuxieme matrice: nbre de lignes puis nombre de colonnes\n");
        scanf("%d%d", &a, &b);
        if (n <= 0 || m <= 0)
        {
            printf("⚠️ Dimension invalide❗\nNB: la dimension est strictement positive(<< superieur à 0>>) \n");
        }
        if (a != m)
        {
            printf("⚠️Produit matricielle IMPOSSIBLE \n Car le nombre de lignes de la deuxième matrice ne correspond pas aux nombres de colonnes de la première matrice");
        }
    } while (a != m ||n <= 0 || m <= 0);
    int B[a][b], C[n][b];

    printf("Entree des coefficients de la matrice\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("entrer un coefficient\n");
            scanf("%d", &B[i][j]);
        }
    }

    //  PRODUIT DES MATRICES

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < b; j++)
        {
            Som = 0;
            for (p = 0; p < a; p++)
            {
                Som = Som + (A[i][p] * B[p][j]);
            }
            C[i][j] = Som;
        }
    }

    // AFFICHAGE DE LA MATRICE OBTENUE APRES ADDITION
    printf("le resultat du produit de ces deux matrices est:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
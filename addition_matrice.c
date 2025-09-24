#include <stdio.h>

int main()
{
    int n, m, i, j;
    printf("******ADDITION DE DEUX MATRICES******\n");
    do
    {
        printf("Entrer la dimension des matrices: lignes puis colonnes\n");
        scanf("%d%d", &n, &m);
        if (n <= 0 || m <= 0)
        {
            printf("⚠️ Dimension invalide❗\nNB: la dimension est strictement positive(<< superieur à 0>>) \n");
        }
    } while (n <= 0 || m <= 0);
    int A[n][m], B[n][m], C[n][m];

    // ENTREE DES MATRICES
    printf("Entree des coefficients des matrices \n Consigne : entrrer les coefficients de la matrice de la gauche vers la droite en commençant par la premiere ligne ");
    printf("Entree des coefficients de la première matrice\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("entrer un coefficient\n");
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entree des coefficients de la deuxieme matrice\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("entrer un coefficient\n");
            scanf("%d", &B[i][j]);
        }
    }

    // ADDITION DES MATRICES
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // AFFICHAGE DE LA MATRICE OBTENUE APRES ADDITION
    printf("le resultat de l'addition de ces deux matrices est:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {

            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
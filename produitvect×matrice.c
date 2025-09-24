#include <stdio.h>

int main() {
    int n, m, i, j;
    
    printf("=== PRODUIT VECTEUR × MATRICE ===\n");
    
    // Saisie des dimensions
    printf("Dimension du vecteur (n): ");
    scanf("%d", &n);
    printf("Dimensions de la matrice (lignes colonnes): ");
    scanf("%d %d", &m, &m);
    
    // Vérification de compatibilité
    if(n != m) {
        printf("Erreur: La taille du vecteur doit égaler le nombre de lignes de la matrice!\n");
        return 1;
    }
    
    float vecteur[n], matrice[m][m], resultat[m];
    
    // Saisie du vecteur
    printf("Elements du vecteur (%d): ", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &vecteur[i]);
    }
    
    // Saisie de la matrice
    printf("Elements de la matrice (%dx%d):\n", m, m);
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            printf("mat[%d][%d] = ", i, j);
            scanf("%f", &matrice[i][j]);
        }
    }
    
    // Calcul du produit vecteur × matrice
    for(j = 0; j < m; j++) {
        resultat[j] = 0;
        for(i = 0; i < n; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }
    
    // Affichage des résultats
    printf("\nVecteur: (");
    for(i = 0; i < n; i++) {
        printf("%.2f", vecteur[i]);
        if(i < n-1) printf(", ");
    }
    printf(")\n");
    
    printf("Matrice:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            printf("%8.2f", matrice[i][j]);
        }
        printf("\n");
    }
    
    printf("Resultat vecteur × matrice: (");
    for(i = 0; i < m; i++) {
        printf("%.2f", resultat[i]);
        if(i < m-1) printf(", ");
    }
    printf(")\n");
    
    return 0;
}
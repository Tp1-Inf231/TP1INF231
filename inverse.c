#include <stdio.h>

int main() {
    int n, i;
    
    printf("Taille tableau: ");
    scanf("%d", &n);
    
    int tab[n]; // Tableau de taille variable
    
    printf("Elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &tab[i]);
    
    printf("Original: ");
    for(i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");
    
    // Inversion
    for(i = 0; i < n/2; i++) {
        int temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
    }
    
    printf("Inverse:  ");
    for(i = 0; i < n; i++)
        printf("%d ", tab[i]);
    printf("\n");
    
    return 0;
}
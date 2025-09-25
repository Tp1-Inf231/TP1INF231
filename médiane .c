#include <stdio.h>

// Fonction pour trier le tableau (tri à bulles)
void trier(int tab[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

// Fonction pour calculer la médiane
double mediane(int tab[], int n) {
    trier(tab, n); // On trie d'abord
    if (n % 2 == 1) {
        return tab[n / 2];  // si n impair → élément du milieu
    } else {
        return (tab[(n - 1) / 2] + tab[n / 2]) / 2.0;  // si n pair → moyenne des deux milieux
    }
}

int main() {
    int n, i;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }

    double med = mediane(tab, n);
    printf("La mediane du tableau est : %.2f\n", med);

    return 0;
}
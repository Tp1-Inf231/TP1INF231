#include <stdio.h>

void trier(int T[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (T[i] > T[j]) {
                int tmp = T[i];
                T[i] = T[j];
                T[j] = tmp;
            }
}

int main() {
    int n;
    printf("Taille du tableau : ");
    scanf("%d", &n);

    int T[n];
    printf("Entrez les elements :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &T[i]);

    trier(T, n);

    if (n % 2 == 1)
        printf("Le median est %d\n", T[n / 2]);
    else
        printf("Le median est %.2f\n", (T[n/2 - 1] + T[n/2]) / 2.0);

    return 0;
}
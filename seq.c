#include <stdio.h>

int main() {
    int n, x, found = 0;
    printf("Taille du tableau : ");
    scanf("%d", &n);

    int T[n];
    printf("Entrez les elements :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &T[i]);

    printf("Element a rechercher : ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (T[i] == x) {
            printf("Element %d trouve a la position %d\n", x, i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Element non trouve.\n");

    return 0;
}
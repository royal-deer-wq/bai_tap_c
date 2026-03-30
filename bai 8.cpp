#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n, k = 0;
    int *x;
    printf("\nNhap so phan tu cua day: ");
    scanf("%d", &n);
    x = (int*) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("\nDay cac so le la: ");
    for (i = 0; i < n; i++) {
        if (x[i] % 2 != 0) {
            printf("%d ", x[i]);
            k++;
        }
    }
    printf("\nCo tat ca %d so le", k);
    free(x);
    return 0;
}
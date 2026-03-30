#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n, d = 0, tg;
    int *x;
    printf("\nNhap so phan tu cua day: ");
    scanf("%d", &n);
    x = (int*) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("x[%d] = ", i);
        scanf("%d", &x[i]);
    }
    printf("\nDay truoc sap xep:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    for (i = 0; i < n; i++) {
        if (x[i] % 2 != 0) {
            tg = x[i];
            x[i] = x[d];
            x[d] = tg;
            d++;
        }
    }
    printf("\nDay sau sap xep:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", x[i]);
    }
    free(x);
    return 0;
}
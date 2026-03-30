#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n, i, s = 0;
    float *x, tduong = 0;
    printf("\nCho biet gia tri cua n: ");
    scanf("%d", &n);
    x = (float*) malloc(n * sizeof(float));
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%f", &x[i]);
        if (x[i] >= 0) {
            tduong += x[i];
            s++;
        }
    }
    printf("\nCo %d so duong", s);
    printf("\nTong cua %d so duong la: %.2f", s, tduong);
    free(x);
    return 0;
}
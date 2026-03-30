#include <stdio.h>
void hien(float a[], int n);
void sapxep(float a[], int n);
int main() {
    int n, i;
    float a[100];
    do {
        printf("\nNhap n = ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    printf("\nNhap mang:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
    printf("\nDay truoc khi sap xep:\n");
    hien(a, n);
    sapxep(a, n);
    printf("\nDay sau khi sap xep:\n");
    hien(a, n);
    return 0;
}
void hien(float a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%6.2f ", a[i]);
    }
    printf("\n");
}
void sapxep(float a[], int n) {
    int i, j;
    float temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
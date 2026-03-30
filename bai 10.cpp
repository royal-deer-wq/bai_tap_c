#include <stdio.h>
int ktra(float x[], int n);
int main() {
    float b[100];
    int m, i, kq;
    do {
        printf("\nNhap m = ");
        scanf("%d", &m);
    } while (m <= 5 || m >= 100);
    for (i = 0; i < m; i++) {
        scanf("%f", &b[i]);
    }
    kq = ktra(b, m);
    if (kq == 0)
        printf("\nDAY DA NHAP LA DON DIEU GIAM");
    else
        printf("\nDAY KHONG DON DIEU GIAM TAI VI TRI %d", kq);
    return 0;
}
int ktra(float x[], int n) {
    int k;
    for (k = 0; k < n - 1; k++) {
        if (x[k] <= x[k + 1]) {
            return k + 1; // vị trí sai
        }
    }
    return 0; 
}
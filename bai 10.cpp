#include <iostream>
#include <vector>
using namespace std;
int ktra(float x[], int n);
int main() {
    float b[100];
    int m, kq;
    do {
        cout << "Nhap m (5 < m < 100): ";
        cin >> m;
    } while (m <= 5 || m >= 100);
    cout << "Nhap " << m << " phan tu cua day:" << endl;
    for (int i = 0; i < m; i++) {
        cout << "b[" << i << "] = ";
        cin >> b[i];
    }
    kq = ktra(b, m);
    if (kq == 0) {
        cout << "\nDAY DA NHAP LA DON DIEU GIAM" << endl;
    } else {
        cout << "\nDAY KHONG DON DIEU GIAM TAI VI TRI " << kq << endl;
    }
    return 0;
}
int ktra(float x[], int n) {
    for (int k = 0; k < n - 1; k++) {
        if (x[k] <= x[k + 1]) {
            return k + 1; 
        }
    }
    return 0;
}

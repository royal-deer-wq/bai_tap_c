#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int i, n, d = 0, tg;
    int *x;
    cout << "\nNhap so phan tu cua day: ";
    cin >> n;
    x = new int[n];
    for (i = 0; i < n; i++) {
        cout << "x[" << i << "] = ";
        cin >> x[i];
    }
    cout << "\nDay truoc sap xep:\n";
    for (i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    for (i = 0; i < n; i++) {
        if (x[i] % 2 != 0) {
            tg = x[i];
            x[i] = x[d];
            x[d] = tg;
            d++;
        }
    }
    cout << "\nDay sau sap xep:\n";
    for (i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    delete[] x;
}

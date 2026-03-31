#include <iostream>
#include <vector>
using namespace std;
int main() {
    int i, n, k = 0;
    int *x;
    cout << "\nNhap so phan tu cua day: ";
    cin >> n;
    x = new int[n];
    for (i = 0; i < n; i++) {
        cout << "Phan tu thu " << i << ": ";
        cin >> x[i];
    }
    cout << "\nDay cac so le la: ";
    for (i = 0; i < n; i++) {
        if (x[i] % 2 != 0) {
            cout << x[i] << " ";
            k++;
        }
    }
    cout << "\nCo tat ca " << k << " so le" << endl;
    delete[] x;
}

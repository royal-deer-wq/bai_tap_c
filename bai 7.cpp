#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int m, n;
    int i, j;
    float a[100][50];
    do {
        cout << "\nNhap so hang m = ";
        cin >> m;
    } while (m < 1 || m > 100);
    do {
        cout << "Nhap so cot n = ";
        cin >> n;
    } while (n < 1 || n > 50);
    cout << "\nNhap mang a:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    cout << "\nMang a sau khi nhap la:\n";
    cout << fixed << setprecision(2);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << setw(8) << a[i][j];
        }
        cout << endl;
    }
}

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int n;
    float x[200], tbc, tong = 0;
    do {
        cout << "Nhap n (1 <= n <= 200): ";
        cin >> n;
    } while (n < 1 || n > 200);
    cout << "Nhap day " << n << " so:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "] = ";
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        tong += x[i];
    }
    tbc = tong / n;
    cout << fixed << setprecision(2);
    cout << "\nTrung binh cong = " << tbc << endl;
    cout << "Cac phan tu thoa man dieu kien (|TBC - x[i]| >= 1): " << endl;
    for (int i = 0; i < n; i++) {
        if (abs(tbc - x[i]) >= 1.0) {
            cout << setw(8) << x[i]; // Thay cho printf("%6.2f")
        }
    }
    cout << endl;
}

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
void hien(float a[], int n);
void sapxep(float a[], int n);
int main() {
    int n;
    float a[100];
    do {
        cout << "Nhap n (1 <= n <= 100): ";
        cin >> n;
    } while (n < 1 || n > 100);
    cout << "Nhap mang:\n";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "\nDay truoc khi sap xep:\n";
    hien(a, n);
    sapxep(a, n);
    cout << "\nDay sau khi sap xep:\n";
    hien(a, n);
    return 0;
}
void hien(float a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(2) << setw(8) << a[i];
    }
    cout << endl;
}
void sapxep(float a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                swap(a[i], a[j]);
            }
        }
    }
}                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

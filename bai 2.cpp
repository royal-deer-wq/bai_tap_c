#include <iostream>
#include <vector>
using namespace std;
int main() {
    int mang[105];
    int min, max;
    cout << "--- Chuong trinh tim Max/Min va vi tri trong mang ---\n";
    cout << "Nhap 105 phan tu cho mang:\n";
    for (int i = 0; i < 105; i++) {
        cout << "Phan tu [" << i << "]: ";
        cin >> mang[i];
    }
    min = max = mang[0];
    for (int i = 1; i < 105; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
        if (mang[i] < min) {
            min = mang[i];
        }
    }
    cout << "\nGia tri Max = " << max << endl;
    cout << "Dat tai cac vi tri: ";
    for (int i = 0; i < 105; i++) {
        if (mang[i] == max) {
            cout << i << " ";
        }
    }
    cout << "\n\nGia tri Min = " << min << endl;
    cout << "Dat tai cac vi tri: ";
    for (int i = 0; i < 105; i++) {
        if (mang[i] == min) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}

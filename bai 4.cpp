#include <iostream>
#include <algorithm>
using namespace std;
const int N = 200;
int main() {
    int day[N], tam;
    cout << "--- Chuong trinh sap xep mang tang dan ---\n";
    cout << "Nhap vao " << N << " phan tu: " << endl;
    for (int i = 0; i < N; i++) {
        cout << "Phan tu [" << i << "]: ";
        cin >> day[i];
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (day[j] < day[i]) {
                swap(day[i], day[j]);
            }
        }
    }
    cout << "\nDay sau khi sap xep tang dan: " << endl;
    for (int i = 0; i < N; i++) {
        cout << day[i] << " ";
    }
    cout << endl;
}

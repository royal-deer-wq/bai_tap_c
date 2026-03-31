#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, i, s = 0;
    float *x, tduong = 0;
    cout << "\nCho biet gia tri cua n: ";
    cin >> n;
    x = new float[n];
    for (i = 0; i < n; i++) {
        cout << "Phan tu thu " << i << ": ";
        cin >> x[i];
        if (x[i] >= 0) {
            tduong += x[i];
            s++;
        }
    }
    cout << "\nCo " << s << " so duong";
    cout << fixed << setprecision(2);
    cout << "\nTong cua " << s << " so duong la: " << tduong << endl;
    delete[] x;
}

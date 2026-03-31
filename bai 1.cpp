#include <iostream>
#include <iomanip> // Thư viện để định dạng số thập phân
using namespace std;
int main() {
    int a[100], sum = 0;
    cout << "\n--- Chuong trinh tinh trung binh cong cua 100 so nguyen ---\n";
    // Vòng lặp nhập dữ liệu
    for (int i = 0; i < 100; i++) {
        cout << "Nhap vao so thu " << i + 1 << ": ";
        cin >> a[i];
    }
    // Tính tổng giá trị các số
    for (int i = 0; i < 100; i++) {
        sum += a[i];
    }
    // Tính và in kết quả trung bình cộng
    // Ép kiểu (float) để phép chia có phần thập phân
    float trungBinh = static_cast<float>(sum) / 100;
    cout << fixed << setprecision(2); // Định dạng lấy 2 chữ số sau dấu phẩy
    cout << "Trung binh cong la: " << trungBinh << endl;
    return 0;
}

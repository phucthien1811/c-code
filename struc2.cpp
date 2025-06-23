#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// �?nh nghia struct SinhVien
struct SinhVien {
    string ten;
    int maSo;
    float diem;
};

// H�m nh?p th�ng tin 1 sinh vi�n
void nhapSinhVien(SinhVien &sv) {
    cout << "Nhap ten: ";
    cin.ignore(1);
    getline(cin, sv.ten);
    cout << "Nhap ma so: ";
    cin >> sv.maSo;
    cout << "Nhap diem: ";
    cin >> sv.diem;
}

// H�m in th�ng tin 1 sinh vi�n
void inSinhVien(const SinhVien &sv) {
    cout << "Ten: " << sv.ten << ", Ma so: " << sv.maSo << ", Diem: " << sv.diem << endl;
}

// H�m so s�nh d? s?p x?p theo di?m gi?m d?n
bool soSanh(const SinhVien &a, const SinhVien &b) {
    return a.diem > b.diem;
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien (toi da 100): ";
    cin >> n;

    // Ki?m tra gi?i h?n
    if (n <= 0 || n > 100) {
        cout << "So luong khong hop le!\n";
        return 1;
    }

    SinhVien ds[100]; // M?ng tinh, t?i da 100

    // Nh?p danh s�ch
    cout << "Nhap thong tin " << n << " sinh vien:\n";
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien " << i + 1 << ":\n";
        nhapSinhVien(ds[i]);
    }

    // In danh s�ch tru?c khi s?p x?p
    cout << "\nDanh sach sinh vien:\n";
    for (int i = 0; i < n; i++) {
        inSinhVien(ds[i]);
    }

    // S?p x?p theo di?m gi?m d?n
    sort(ds, ds + n, soSanh);

    // In danh s�ch sau khi s?p x?p
    cout << "\nDanh sach sau khi sap xep theo diem giam dan:\n";
    for (int i = 0; i < n; i++) {
        inSinhVien(ds[i]);
    }

    return 0;
}

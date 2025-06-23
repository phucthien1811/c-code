#include <iostream>
#include <string>
using namespace std;

// Ð?nh nghia struct SinhVien
struct SinhVien {
    string ten;
    int maSo;
    float diem;
};

// Hàm nh?p thông tin 1 sinh viên
void nhapSinhVien(SinhVien &sv) {
    cout << "Nhap ten: ";
    cin.ignore(1);
    getline(cin, sv.ten);
    cout << "Nhap ma so: ";
    cin >> sv.maSo;
    cout << "Nhap diem: ";
    cin >> sv.diem;
}

// Hàm in thông tin 1 sinh viên
void inSinhVien(const SinhVien &sv) {
    cout << "Ten: " << sv.ten << ", Ma so: " << sv.maSo << ", Diem: " << sv.diem << endl;
}

// Hàm tìm sinh viên có di?m cao nh?t
SinhVien timDiemCaoNhat(SinhVien ds[], int n) {
    int idxMax = 0; // Gi? s? sinh viên d?u tiên có di?m cao nh?t
    for (int i = 1; i < n; i++) {
        if (ds[i].diem > ds[idxMax].diem) {
            idxMax = i; // C?p nh?t ch? s? n?u tìm th?y di?m cao hon
        }
    }
    return ds[idxMax]; // Tr? v? sinh viên có di?m cao nh?t
}

int main() {
    int n = 2; // Ví d? v?i 3 sinh viên
    SinhVien ds[100];

    // Nh?p danh sách
    cout << "Nhap thong tin " << n << " sinh vien:\n";
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien " << i + 1 << ":\n";
        nhapSinhVien(ds[i]);
    }

    // Tìm và in sinh viên di?m cao nh?t
    cout << "\nSinh vien diem cao nhat:\n";
    SinhVien maxSV = timDiemCaoNhat(ds, n);
    inSinhVien(maxSV);

    return 0;
}

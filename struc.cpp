#include <iostream>
#include <string>
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

// H�m t�m sinh vi�n c� di?m cao nh?t
SinhVien timDiemCaoNhat(SinhVien ds[], int n) {
    int idxMax = 0; // Gi? s? sinh vi�n d?u ti�n c� di?m cao nh?t
    for (int i = 1; i < n; i++) {
        if (ds[i].diem > ds[idxMax].diem) {
            idxMax = i; // C?p nh?t ch? s? n?u t�m th?y di?m cao hon
        }
    }
    return ds[idxMax]; // Tr? v? sinh vi�n c� di?m cao nh?t
}

int main() {
    int n = 2; // V� d? v?i 3 sinh vi�n
    SinhVien ds[100];

    // Nh?p danh s�ch
    cout << "Nhap thong tin " << n << " sinh vien:\n";
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien " << i + 1 << ":\n";
        nhapSinhVien(ds[i]);
    }

    // T�m v� in sinh vi�n di?m cao nh?t
    cout << "\nSinh vien diem cao nhat:\n";
    SinhVien maxSV = timDiemCaoNhat(ds, n);
    inSinhVien(maxSV);

    return 0;
}

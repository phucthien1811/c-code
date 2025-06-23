#include <iostream>
#include <string>
using namespace std;

// �?nh nghia struct VatPham
struct VatPham {
    string ten;
    int soLuong;
    float doBen;
};

// H�m nh?p th�ng tin 1 v?t ph?m
void nhapVatPham(VatPham &vp) {
    cout << "Nhap ten vat pham: ";
    cin.ignore(1);
    getline(cin, vp.ten);
    cout << "Nhap so luong: ";
    cin >> vp.soLuong;
    cout << "Nhap do ben: ";
    cin >> vp.doBen;
}

// H�m in th�ng tin 1 v?t ph?m
void inVatPham(const VatPham &vp) {
    cout << "Ten: " << vp.ten << ", So luong: " << vp.soLuong << ", Do ben: " << vp.doBen << endl;
}

// H�m t�m v?t ph?m c� d? b?n cao nh?t
VatPham timDoBenCaoNhat(VatPham ds[], int n) {
    int idxMax = 0;
    for (int i = 1; i < n; i++) {
        if (ds[i].doBen > ds[idxMax].doBen) {
            idxMax = i;
        }
    }
    return ds[idxMax];
}

int main() {
    const int n = 3; // 3 v?t ph?m
    VatPham ds[3];

    // Nh?p danh s�ch
    cout << "Nhap thong tin " << n << " vat pham:\n";
    for (int i = 0; i < n; i++) {
        cout << "Vat pham " << i + 1 << ":\n";
        nhapVatPham(ds[i]);
    }

    // In danh s�ch
    cout << "\nDanh sach vat pham:\n";
    for (int i = 0; i < n; i++) {
        inVatPham(ds[i]);
    }

    // T�m v� in v?t ph?m d? b?n cao nh?t
    cout << "\nVat pham do ben cao nhat:\n";
    VatPham maxVP = timDoBenCaoNhat(ds, n);
    inVatPham(maxVP);

    return 0;
}

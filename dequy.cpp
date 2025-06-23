#include <iostream>
#include <string>
using namespace std;

// Ð?o chu?i d? quy
string reverseString(string s) {
    if (s.empty() || s.length() == 1) return s;
    return s[s.length() - 1] + reverseString(s.substr(0, s.length() - 1));
}

// T?ng m?ng d? quy
int sumArray(int a[], int n) {
    if (n <= 0) return 0;
    return a[n - 1] + sumArray(a, n - 1);
}

// S? mu d? quy
int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    // Bài 1: Ð?o chu?i
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "Chuoi dao nguoc: " << reverseString(s) << endl;

    // Bài 2: T?ng m?ng
    int n;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;
    if (n <= 0) {
        cout << "Kich thuoc khong hop le!" << endl;
        return 1;
    }
    int a[100];
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Tong mang: " << sumArray(a, n) << endl;

    // Bài 3: S? mu
    int base, exp;
    cout << "Nhap co so: ";
    cin >> base;
    cout << "Nhap so mu: ";
    cin >> exp;
    if (exp < 0) {
        cout << "So mu phai khong am!" << endl;
        return 1;
    }
    cout << base << "^" << exp << " = " << power(base, exp) << endl;

    return 0;
}

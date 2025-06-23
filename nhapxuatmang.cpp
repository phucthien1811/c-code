#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;
    if (n <= 0 || n > 100) {
        cout << "So phan tu khong hop le!" << endl;
        return 1;
    }
    int a[100];
    cout << "Nhap " << n << " so: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Mang vua nhap: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    double avg = sum / n;
    cout << "Tong: " << sum << endl;
    cout << "Trung binh: " << fixed << setprecision(2) << avg << endl;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            count++;
        }
    }
    cout << "So chan: " << count << endl;
    int max = a[0], min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i]; 
        }
        if (a[i] < min) {
            min = a[i]; 
        }
    }
    cout << "Lon nhat: " << max << endl;
    cout << "Nho nhat: " << min << endl;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    cout << "Mang dao nguoc: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}

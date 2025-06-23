#include <iostream>
using namespace std;

void inputMatr(int a[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void printMatr(int a[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int sumMatr(int a[][100], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }
    return sum;
}
void printRowSums(int a[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
        cout << "Tong hang " << i << ": " << sum << endl;
    }
}
void rotateMatr(int a[][100], int n) {
    // Bý?c 1: Ð?i ð?i x?ng qua ðý?ng chéo chính
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    // Bý?c 2: Ð?o ngý?c t?ng hàng
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            int temp = a[i][j];
            a[i][j] = a[i][n - 1 - j];
            a[i][n - 1 - j] = temp;
        }
    }
}
int findMax(int a[][100], int n, int m) {
    int maxVal = a[0][0]; // Gi? s? ph?n t? ð?u là l?n nh?t
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > maxVal) {
                maxVal = a[i][j];
            }
        }
    }
    return maxVal;
}
int main() {
    int n, m;
    cout << "Nhap so hang n: ";
    cin >> n;
    cout << "Nhap so cot m: ";
    cin >> m;
    	 
    if (n <= 0 || m <= 0 || n > 100 || m > 100) {
        cout << "Kich thuoc khong hop le!" << endl;
        return 1;
    }
    
    int a[100][100];
    inputMatr(a, n, m);
    cout << "Ma tran vua nhap:\n";
    printMatr(a, n, m);
    cout << "Tong cac phan tu: " << sumMatr(a, n, m) << endl;
    printRowSums(a, n, m);
    if (n == m) {
        rotateMatr(a, n);
        cout << "Ma tran sau khi xoay 90 do:\n";
        printMatr(a, n, m);
    } else {
        cout << "Khong xoay vi ma tran khong vuong!\n";
    }
    cout << "So lon nhat: " << findMax(a, n, m) << endl;
    
    return 0;
}

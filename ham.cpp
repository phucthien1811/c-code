#include <iostream>
#include <cmath>
using namespace std;

int sumOdd(int a[], int n) {
    int sum = 0; // Khai báo sum trong hàm
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) { // S? l?
            sum += a[i];
        }
    }
    return sum;
}
bool isPalindrome(int a[], int n){
	for (int i=0; i < n/2  ; i++){
		if (a[i] == a[n-1-i]){
			return true;
		}
	}
}
bool isPrime(int x) {
    if (x <= 1) return false; 
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false; 
    }
    return true;
}

void printPrimes(int a[], int n) {
    cout << "So nguyen to: ";
    bool found = false; 
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            cout << a[i] << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "Khong co";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap vao so phan tu: ";
    cin >> n;
    
    // Ki?m tra d?u vào
    if (n <= 0 || n > 100) {
        cout << "So phan tu khong hop le!" << endl;
        return 1;
    }
    
    int a[100];
    cout << "Nhap gia tri phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // In m?ng d? ki?m tra
    cout << "Mang vua nhap: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    // G?i hàm và in k?t qu?
    int result = sumOdd(a, n); // Luu giá tr? tr? v?
    cout << "Tong so le: " << result << endl;
    bool rs = isPalindrome(a , n);
    if (rs == true){
    	cout << "doi xung ";
	}else{
		cout <<"ko doi xung: ";
	}
    printPrimes(a, n);
    return 0;
}

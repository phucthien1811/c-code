#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so hang cua tam giac can: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        // In kho?ng tr?ng
        int j = 1;
        while (j <= n - i) {
            cout << " ";
            j++;
        }
        
        // In sao
        j = 1;
        while (j <= 2 * i - 1) {
            cout << "*";
            j++;
        }
        
        // Xu?ng d?ng
        cout << endl;
        i++;
    }

    return 0;
}

#include <iostream>
using namespace std;

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];   // phần tử cần chèn
        int j = i - 1;

        // Dịch các phần tử lớn hơn key sang phải
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;   // chèn key vào đúng vị trí
    }
}

int main() {
    int a[] = {9, 5, 1, 4, 3};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Mang truoc khi sap xep: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";

    insertionSort(a, n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";

    return 0;
}

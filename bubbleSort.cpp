#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
    bool swapped; 
    for (int i = 0; i < n - 1; i++) {
        swapped = false; 
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // đổi chỗ
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = true;
            }
        }
        // Nếu không có đổi chỗ nào → mảng đã sắp xếp
        if (!swapped) break;
    }
}

int main() {
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Mang truoc khi sap xep: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";

    bubbleSort(a, n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";

    return 0;
}

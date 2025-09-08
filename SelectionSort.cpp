#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;  // giả sử a[i] nhỏ nhất
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j; // cập nhật vị trí nhỏ nhất
            }
        }
        // hoán đổi a[i] và a[minIndex]
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
}

int main() {
    int a[] = {64, 25, 12, 22, 11};
    int n = sizeof(a)/sizeof(a[0]);

    cout << "Mang truoc khi sap xep: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";

    selectionSort(a, n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";

    return 0;
}

#include <iostream>

using namespace std;

void interchangeSort(int a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] > a[j]) {
                int temp = a[i];
a[i] = a[j];
a[j] = temp;
            }
        }
    }
}

int main() {
    int a[] = {12, 2, 5, 8, 1, 3, 15};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Mang truoc khi sap xep: ";
    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    cout << "\n";

    interchangeSort(a, n);

    cout << "Mang sau khi sap xep:   ";
    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    cout << "\n";
}

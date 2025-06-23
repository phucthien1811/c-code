#include <iostream>
#include <stack>
using namespace std;

void decimalToBinary(int n) {
    stack<int> s;

    if (n == 0) {
        cout << "0";
        return;
    }

    while (n > 0) {
        s.push(n % 2);
        n /= 2;
    }
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;

    cout << "Dang nhi phan: ";
    decimalToBinary(n);
    cout << endl;

    return 0;
}


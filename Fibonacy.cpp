#include <bits/stdc++.h>
using namespace std;

// Đệ quy thuần (rất chậm khi n lớn, chỉ demo)
long long fib_rec(int n) {
    if (n <= 1) return n;
    return fib_rec(n - 1) + fib_rec(n - 2);
}

// Vòng lặp O(n), O(1) bộ nhớ
long long fib_iter(int n) {
    if (n <= 1) return n;
    long long a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
        long long c = a + b;
        a = b; b = c;
    }
    return b;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; 
    if (!(cin >> n)) return 0;

    cout << fib_rec(n) << "\n";
    cout << fib_iter(n) << "\n";
    return 0;
}

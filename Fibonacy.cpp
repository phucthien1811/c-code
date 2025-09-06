#include <iostream>
using namespace std;


long long fibo_recursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo_recursive(n - 1) + fibo_recursive(n - 2);
}


long long fibo_iterative(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    long long f1 = 0, f2 = 1, fn;
    for (int i = 2; i <= n; i++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return f2;
}

int main() {
    int n;
    cin >> n;
    cout << fibo_recursive(n) << endl;
    cout << fibo_iterative(n) << endl;
    return 0;
}

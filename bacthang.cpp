#include <iostream>
#include <vector>
using namespace std;


long long countWays(int n) {
    if (n <= 1) return 1;
    
    vector<long long> dp(n + 1); 
    dp[0] = 1; 
    dp[1] = 1; 
    
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2]; 
    }
    
    return dp[n];
}

int main() {
    int n;
    cout << "Nhap so bac thang n: ";
    cin >> n;
    if (n < 0) {
        cout << "n phai >= 0\n";
        return 1;
    }
    
    cout << "So cach leo " << n << " bac: " << countWays(n) << endl;
    return 0;
}

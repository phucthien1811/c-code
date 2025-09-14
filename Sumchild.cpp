#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> a) {
    int n = a.size();
    int tong = a[0];       // tổng hiện tại
    int maxSum = a[0];     // tổng lớn nhất

    for (int i = 1; i < n; i++) {
        // Thay cho: tong = max(a[i], tong + a[i]);
        if (tong + a[i] < a[i]) {
            tong = a[i];   // bỏ đoạn cũ, bắt đầu lại từ a[i]
        } else {
            tong = tong + a[i];  // tiếp tục cộng dồn
        }

        // Thay cho: maxSum = max(maxSum, tong);
        if (tong > maxSum) {
            maxSum = tong;  // cập nhật nếu tìm thấy tổng lớn hơn
        }
    }

    return maxSum;
}

int main() {
    vector<int> a = {1, 3, 2 , -5, 2, 3, 4, -1, 0};
    cout << "Doan con co tong lon nhat la: " << maxSubarraySum(a) << "\n";
    return 0;
}

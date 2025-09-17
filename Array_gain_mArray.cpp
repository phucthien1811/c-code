#include <iostream>
using namespace std;

struct result {
    int i_max;    // chỉ số bắt đầu của dãy con dài nhất
    int max_len;  // độ dài dãy con dài nhất
};

result Find(int a[100], int n) {
    result rs;
    rs.i_max = 0;
    rs.max_len = 1;

    int len = 1;     // độ dài hiện tại
    int start = 0;   // chỉ số bắt đầu dãy hiện tại

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) { 
            // tiếp tục dãy tăng không giảm
            len++;
        } else {
            // reset lại khi gặp phần tử nhỏ hơn
            if (len > rs.max_len) {
                rs.max_len = len;
                rs.i_max = start;
            }
            len = 1;
            start = i;
        }
    }

    // kiểm tra nốt đoạn cuối
    if (len > rs.max_len) {
        rs.max_len = len;
        rs.i_max = start;
    }

    return rs;
}

int main() {
    int n;
    int a[100];
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    result rs = Find(a, n);
    cout << "Day con tang khong giam dai nhat bat dau tai vi tri " 
         << rs.i_max << " va co do dai " << rs.max_len << endl;

    cout << "Day con la: ";
    for (int i = rs.i_max; i < rs.i_max + rs.max_len; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    
    stack<char> st; // Stack luu ký t?
    
    // Push t?ng ký t? vào stack
    for (char c : s) {
        st.push(c);
    }
    
    // Pop và in d? d?o ngu?c
    cout << "Chuoi dao nguoc: ";
    while (!st.empty()) {
        cout << st.top(); // L?y ký t? d?nh
        st.pop(); // Xóa d?nh
    }
    cout << endl;
    
    return 0;
}

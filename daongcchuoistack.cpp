#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    
    stack<char> st; // Stack luu k� t?
    
    // Push t?ng k� t? v�o stack
    for (char c : s) {
        st.push(c);
    }
    
    // Pop v� in d? d?o ngu?c
    cout << "Chuoi dao nguoc: ";
    while (!st.empty()) {
        cout << st.top(); // L?y k� t? d?nh
        st.pop(); // X�a d?nh
    }
    cout << endl;
    
    return 0;
}

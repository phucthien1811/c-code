#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    
    cout << (n == 0 ? "So 0" : (n > 0 ? "So duong" : "So am")) << endl;
    
    return 0;
}

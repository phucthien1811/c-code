#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> orders; // Queue luu don hàng
    cout << "Them don hang (nhap 'done' de ket thuc):\n";
    
    // Nh?p don hàng
    while (true) {
        string order;
        cout << "Nhap don hang: ";
        getline(cin, order);
        if (order == "done") break;
        orders.push(order); // Enqueue
    }
    
    // X? lý don hàng theo th? t?
    cout << "Xu ly don hang:\n";
    while (!orders.empty()) {
        cout << "Dang xu ly: " << orders.front() << endl; // Xem d?u
        orders.pop(); // Dequeue
    }
    
    return 0;
}

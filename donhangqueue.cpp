#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> orders; // Queue luu don h�ng
    cout << "Them don hang (nhap 'done' de ket thuc):\n";
    
    // Nh?p don h�ng
    while (true) {
        string order;
        cout << "Nhap don hang: ";
        getline(cin, order);
        if (order == "done") break;
        orders.push(order); // Enqueue
    }
    
    // X? l� don h�ng theo th? t?
    cout << "Xu ly don hang:\n";
    while (!orders.empty()) {
        cout << "Dang xu ly: " << orders.front() << endl; // Xem d?u
        orders.pop(); // Dequeue
    }
    
    return 0;
}

#include <iostream>
#include <string>
#include <iterator>   
using namespace std;

int main() {
    int M2[] = {4 , 5 , 5};   

    cout << "Phan tu dau tien: " << M2[0] << endl;


    int Asize = std::size(M2);
    cout << "So phan tu: " << Asize << endl;

    return 0;
}
6
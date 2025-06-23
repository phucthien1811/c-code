#include <iostream>
using namespace std;

int main() {

    int a, b;
    cout << "Nhap hai so nguyen a va b: ";
    cin >> a >> b;
    cout << "Ket qua cua a cong b la: " << a + b << endl;

    string name;
    double diem;
    cout << "Nhap ten cua ban: ";
    cin >> name;
    cout << "Nhap diem cua ban: ";
    cin >> diem;
    cout << "Ten: " << name << ", Diem: " << diem << endl;

    double dai, rong;
    cout << "Nhap chieu dai va chieu rong hinh chu nhat: ";
    cin >> dai >> rong;
    double chuVi = (dai + rong) * 2;
    double dienTich = dai * rong;
    cout << "Chu vi: " << chuVi << endl;
    cout << "Dien tich: " << dienTich << endl;

    return 0;
}

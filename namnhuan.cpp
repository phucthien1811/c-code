#include<iostream>
using namespace std;


int main(){
	int nam ;
	 cout << " nhap vao nam ban muon kiem tra : ";
	 cin >> nam ;
	 cout << ( nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0 ? "nam nhuan" : "nam ko nhuan" );
}

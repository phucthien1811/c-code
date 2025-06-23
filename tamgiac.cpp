#include<iostream>
using namespace std;



int main(){
	
	int n;
	
	cout<< "nhap vao so nguyen n: ";
	cin>> n;
	int i =1 ;
	while ( i <= n){
		int j = 1;
		while ( j <= i){
			cout << "*";
			j++;
		}
		i++;
		cout << endl;
	}
	
	
	
	
	
}

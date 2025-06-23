#include<iostream>
using namespace std;



int main(){
	int n ;
	cout << "nhap so nguyen n: ";
	cin>> n;
	int count = 0 ;    
	for ( int i = 1 ; i <= n ; i ++){		
			if ( i % 3 == 0 ){	
			count++;		
		}
		
	}
	cout << "so luong" << count;
	
} 

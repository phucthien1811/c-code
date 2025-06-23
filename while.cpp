#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout << "So nguyen tu 1 den n la : " ;
	
	int sum = 0;
	int i = 1;
	while ( i <= 5){
		cout << i << " ";
		sum += i;
		i++;
	} 
	cout << endl;
	cout << "Tong la : " << sum;
	return 0;
	
	
}

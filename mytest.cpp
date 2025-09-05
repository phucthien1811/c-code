#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "input index of n: ";
    cin >> n;
    int a[100];
    cout << "input " << n << " number: ";
    
    for (int i = 0; i < n ; i++){
        cin >> a[i];
    }
    cout<< "The element was input: ";
    for (int i = 0; i < n ; i++){
        cout << a[i] <<" " ;
    }
    cout << endl;
    cout<< "The reverse array element: ";
    for (int j = n - 1; j >= 0; j--) {
    cout << a[j] << " ";
    }

    cout << endl;
    int max = a[0] , min = a[0];;
    for (int i = 0 ; i < n ; i++){

        if (a[i] > max) max = a[i];
        if (a[i] < min ) min = a[i];
    }
    cout << "max value is : "<< max << endl ;
    cout << "min value is : "<< min << endl;

}
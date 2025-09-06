#include <iostream>
using namespace std;

int binarySearch(int a[], int n , int x)
{
    int l = 0 , r = n - 1;
    while ( l <= r){
        int m = l + (r - l)/ 2;
        if (a[m] == x){
            return m;
        }else if (a[m] < x){
            l = m+1;
        }else{
            r= m -1;
        }
    }
    return -1;
}
int main()
{
    int a[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 7;
    int result = binarySearch(a , n , x);
    (result == -1 ) ? cout << "Number not in array " : cout << "The index of number is: " << result << endl ;
}
#include <iostream>
using namespace std;


int SentilnelSearch(int a[],int n, int k){
    a[n+1] = k;
    int i = 0;
    while (a[i] != k){
        i += 1;
    }  
    if (i < n){
        return i;
    }else{
        return -1;
    }
}

int main()
{
    int a[] = { 1 , 2 , 3 , 4 , 5};
    int k = 4;
    int n = sizeof(a) / sizeof(a[0]);
    int result = SentilnelSearch(a , n , k);
    (result == -1) ? cout << "the element not in array . " : cout << "the number in index: "<< result << endl ;
}
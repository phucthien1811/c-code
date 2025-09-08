#include <iostream>
#include <cmath>
using namespace std;


int jumSearch(int a[],int n, int k){
    d = (int)sqrt(n);
    int i = 0;
    int j = i + d;
    while ( j < n && a[j] < k){
        j = j + d;         // i = j 
        i = i + d;         // j = j + d
    }
    if (j >= n){
        j = n - 1;
    }
    for (int idx = i ; idx<= j ; idx++){
        if (a[idx]==k){
            return idx;
        }
   
        
}
return -1;
}


int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 10;

    int result = jumSearch(a, n, k);
    (result == -1) ? cout << "The number not in array ." : cout << "number in array in index: "<< result << endl;
}
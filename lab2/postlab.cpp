#include <iostream>
using namespace std;

void zeroAll(int *arr,int n){
    for(int i =0;i <n; i++){
        // arr[i] = 0;
        *(arr+i) = 0;
    }
}

int main() {
    int a[] = {1,2,3,4,5,6,7,8,9,10}, amt =sizeof(a)/4;
    zeroAll(a,amt);
    cout << &a << endl;
    for(int i=0 ;i < amt ; i++){
        cout << "index : " << i << " equal : " << &a[-1] << endl ;
    }
}



#include<iostream>
using namespace std;
void swap(int *arr1 , int *arr2,int amt,int amt2){
    int lis[amt];
    for(int i=0; i<amt ;i++){
        lis[i] = arr1[i];
        cout << lis[i] << endl;
    }

}
int main() {
    int a[] ={1,2,3,4,5};
    int b[] ={11,12,13,14,15};
    int n = sizeof(a)/4 , n2 = sizeof(b)/4;
    swap(a,b,n,n2);

}
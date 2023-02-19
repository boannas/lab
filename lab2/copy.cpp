#include<iostream>
using namespace std ;


void copy_Arr(int *cp_arr,int *root){
    for(int i=0; i<sizeof(root);i++){
        cp_arr[i] = root[i];
    }
}
int main() {
    int a[] = {1,2,3,4,5,6,10,12};
    int b[sizeof(a)] ;
    copy_Arr(b,a);

    for(int i = 0;i <sizeof(a)/4;i++){
        cout << "index : "<< i << " a : "<< a[i] << " b : "<< b[i] << endl;
    }

    

}    
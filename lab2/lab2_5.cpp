#include<iostream>
using namespace std ;

void swap(int *n,int *m){           //Call by reference
    int temp = *n;
    *n = *m;
    *m = temp;
}
int main() {
    int num1 , num2;
    cout << "In put num1 and num2 :";
    cin >> num1 >>  num2;
    cout <<"num1 : " << num1 << "\tnum2 : " << num2 << endl;

    swap(&num1 , &num2); 
    cout <<"Now num1 : "<<  num1 <<"\tnum2 : " << num2 << endl;
    return 0;
}
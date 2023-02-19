#include<iostream>
using namespace std;

int main() {
    //1st ex - change value
    float num0 = 10;
    cout << "num0 before changing : \t" << num0  << "\taddress\t" << &num0 << endl;
    num0 = 15;
    cout << "num0 before changing : \t" << num0  << "\taddress\t" << &num0 << endl << endl;

    //2nd ex - change value by pointer
    float num1 = 10.0,*n1 = &num1;
    cout <<"num1 before changing \t" << num1 << "\tand\t" << " " << n1 << endl;
    *n1 = 15.0;
    cout <<"num1 after changing \t" << num1 << "\tand\t" << " " << n1;

}

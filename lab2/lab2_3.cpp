#include<iostream>
using namespace std;

void callByValue(int var){
    var = 100;
    // cout << var << endl;
}

void callByReference(int *var){
    *var = 200;
    // cout << *var << endl;
}
int main() {
    int var1 = 1, var2 = 2;
    cout << "Before :\t" << "var1 : " << var1 << "\tvar2 : " << var2 << endl;
    callByValue(var1);
    callByReference(&var2);
    cout << "Afer   :\t" << "var1 : " << var1 << "\t" << "var2 : " << var2;
    return 0;
}
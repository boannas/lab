#include<bits/stdc++.h>
using namespace std;
  
tuple<int, int> foo(int n1, int n2)
{
    return make_tuple(n2, n1);             
}
  

int main()
{
    int a =5 ,b=10;
    tie(a, b) = foo(a,b);        
    cout << "Value before tuple : " << a << " " << b << endl;
    cout << "Values returned by tuple: ";
    cout << a << " " << b << " " << endl;
    return 0;
}

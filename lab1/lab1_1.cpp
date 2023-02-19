#include<iostream>
using namespace std;
int day, i=100;
float cost ,x ;
int main(){
    cout << "Enter the first meal price : " ;
    cin >> x;
    do{
        i++;
        if(i!=15 or i != 1) {
            if(i%2 == 1){
                x = x*1.2;
                // cout << x <<"\t" << i<<s endl;
                // cout << i;
                cost += x;
            }
            else {
                x = x*0.8;
                // cout << x << "\t" << i<< endl;
                cost += x;
            }
        }
    }
    while (i<31 )  ;  
    
    cout << "Total price : "<< cost << endl ;
}
#include"Node.h"
#include"LinkedList.h"
#include<iostream>
using namespace std;

int main(){
    int n ,i =0;
    int list[3];
    cout << "Please Enter amount of Node youu need : " ;
    cin >> n;
    while(i!=n){
        cout << "Enter the value of Node " << i << " : " ;
        cin >> list[i];
        cout << endl;
        if (list[i] != int(list[i]) ){
            cout << "Enter it agian ";
        }
        cout << list[0];
        i++;
        
    }
    cout << list[0];
}
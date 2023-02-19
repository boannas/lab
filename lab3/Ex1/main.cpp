#include<iostream>
#include "Node.h"
using namespace std;

int main() {
    
    Node a;                                                                 //Create Obj name a
    Node b(10,NULL);
    cout << "Before value : " << a.getValue() << endl;                             //print value a
    a.setValue(100);                                                        //set value
    cout << "After Value : " << a.getValue() << endl;
    cout <<"Before set next Node : " << a.getter() << endl;                 //print address of next node
    a.setter(&b);                                             
                  //set next node to b
    cout <<"After set next Node : " << a.getter() << endl;                  //print address of next node
    cout <<b.getValue() << &b <<endl ;
}
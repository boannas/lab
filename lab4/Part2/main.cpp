#include"Stack.h"
#include"Node.h"
#include"Queue.h"
#include"LinkedList.h"
#include<iostream>
using namespace std;
int main() {
    //**********************************************Stack*****************************************************
    cout << "----------------------------------------------"<< endl;
    Stack A;
    Node a,b,c; 
    b.setValue(10);
    c.setValue(20);
    // A.printList();
    A.stackPush(&a);
    // A.printList();
    A.stackPush(&b);
    // A.printList();
    A.stackPush(&c);
    A.printList();
    A.stackPop();
    A.printList();
    A.stackPeek();
    cout << "----------------------------------------------";
    cout << endl;


    //**************************************************Queue**********************************************************
    cout << "----------------------------------------------"<<endl;
    Queue B;
    Node aa,bb,cc;
    bb.setValue(100);
    cc.setValue(200);
    B.enqueue(&aa);
    B.enqueue(&bb);
    B.enqueue(&cc);
    B.printList();
    B.dequeue();
    B.printList();
    B.queuePeek();
    cout << "----------------------------------------------"<<endl;

}
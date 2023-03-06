#include"Stack.h"
#include"Node.h"
#include"Queue.h"
#include"LinkedList.h"
#include<iostream>
using namespace std;
int main() {
    //**********************************************Stack*****************************************************
    cout << "----------------------------------------------"<< endl;
    Stack stack_B;
    Node node_a,node_b(10,NULL),node_c(20,NULL),node_d(30,NULL); 
    stack_B.stackPush(&node_a);
    stack_B.stackPush(&node_b);
    stack_B.stackPush(&node_c);
    stack_B.printList();
    stack_B.stackPop();
    // stack_B.stackPop();
    stack_B.stackPop();
    stack_B.stackPush(&node_d);
    stack_B.printList();
    stack_B.stackPeek();
    cout << "----------------------------------------------";
    cout << endl;


    //**************************************************Queue**********************************************************
    cout << "----------------------------------------------"<<endl;
    Queue queue_B;
    Node node_q1,node_q2(100,NULL),node_q3(200,NULL);
    queue_B.enqueue(&node_q1);
    queue_B.enqueue(&node_q2);
    queue_B.enqueue(&node_q3);
    queue_B.printList();
    queue_B.queuePeek();
    queue_B.dequeue();
    queue_B.printList();
    queue_B.queuePeek();
    cout << "----------------------------------------------"<<endl;

}
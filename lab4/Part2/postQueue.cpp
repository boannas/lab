#include"Stack.h"
#include"Node.h"
#include"Queue.h"
#include"LinkedList.h"
#include<iostream>
using namespace std;
int main() {
    // create Queue
    Queue row_1,row_2,row_3;
    int que[] = {5, 6, 8, 9, 2, 7, 1 };
    for( int i = 0; i < sizeof(que)/4;i++){
        Node *Temp = new Node(que[i],NULL);
        row_1.enqueue(Temp);
    }
    cout << "Row 1 before\t" ;
    row_1.printList();

    // Processing
    while(row_1.count() != 0){
        Node *Temp = row_1.queuePeek();
        // cout << Temp->getValue();
        if ((Temp->getValue())%2 == 0){
            row_1.dequeue();
            row_2.enqueue(Temp);
        }
        else {
            row_1.dequeue();
            row_3.enqueue(Temp);
        }
        if(row_2.count()!=0 && row_3.count()!=0){
            Node *Temp2;
            if(row_2.queuePeek()->getValue() > row_3.queuePeek()->getValue()){
                Temp2 = row_2.queuePeek();
                row_2.dequeue();
                row_2.enqueue(Temp2);
            }
            else {
                Temp2 = row_3.queuePeek();
                row_3.dequeue();
                row_3.enqueue(Temp2);
            }
        }
    }
    cout << "Row 1 after\t" ;
    row_1.printList();
    cout << "Row 2\t" ;
    row_2.printList();
    cout << "Row 3\t" ;
    row_3.printList();
    // cout << row_2.queuePeek()->getValue();
}
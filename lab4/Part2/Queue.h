#ifndef QUEUE_H
#define QUEUE_H
#include"Node.h"
#include"LinkedList.h"
class Queue : public LinkedList{
    public :
        Queue() ;
        ~Queue() ;
        void enqueue(Node *newNode);
        int dequeue();
        Node* queuePeek();
};
#endif
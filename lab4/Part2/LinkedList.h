#ifndef LINK_H
#define LINK_H
#include "Node.h"

class LinkedList
{
    private:
        Node *head;
        Node *tail;
        int size;
    public:
        LinkedList();
        void insert(Node *newNode, int pos);
        Node* remove(int pos);
        void deleteBeg();
        void deleteEnd();
        int count();
        void reverse();
        int findLoop();
        void printList();
        Node* reTail();
        Node* frontNode();

};
#endif
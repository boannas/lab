#include"Node.h"
#include"LinkedList.h"
#include"Queue.h"
#include<iostream>
using namespace std;
Queue::Queue() {                            //Queue is a Linkedlist
    LinkedList();
}

Queue::~Queue(){}

void Queue::enqueue(Node *newNode){         //Add node at the end
    cout << "Node value : " << newNode->getValue() << " has enqueue to the end" << endl;
    LinkedList::insert(newNode,-1);
}

int Queue::dequeue(){                       //remove node firstNode
    Node *temp = frontNode();
    cout << "DEQUEUE node value : " << temp->getValue() << endl;
    LinkedList::remove(0);
    return temp->getValue();
}

int Queue::queuePeek(){                     //return firstNode
    Node *temp = LinkedList::frontNode();
    cout << "PEEK_queue node value : " << temp->getValue() << endl;
    return temp->getValue();
}
#include"Node.h"
#include"LinkedList.h"
#include"Stack.h"
#include<iostream>
using namespace std;

Stack::Stack(){                                                 //Stack as Linkedlist
    LinkedList();
}

Stack::~Stack(){}

void Stack::stackPush(Node *newNode){                           //Add node at the end
    cout << "Node value : " << newNode->getValue() << " has push to the end" << endl;
    LinkedList::insert(newNode,-1);
}

int Stack::stackPop(){                                          //remove node at the end
    Node *temp = LinkedList::reTail();
    LinkedList::remove(-1);
    cout <<"POP node value : " << temp->getValue() << endl ;
    return temp->getValue();
}

int Stack::stackPeek(){                                         //return the last Node
    Node *temp = LinkedList::reTail();
    cout << "PEEK_stack node value : " << temp->getValue() << endl;
    return temp->getValue();
}
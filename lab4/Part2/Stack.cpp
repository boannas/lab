#include"Node.h"
#include"LinkedList.h"
#include"Stack.h"
#include<iostream>
using namespace std;

Stack::Stack(){                                                 //Stack as Linkedlist
}

Stack::~Stack(){}

void Stack::stackPush(Node *newNode){                           //Add node at the end
    // cout << "Node value : " << newNode->getValue() << " has push to the end" << endl;
    LinkedList::insert(newNode,0);
}

int Stack::stackPop(){                                          //remove node at the end
    Node *temp = LinkedList::get_fNode();
    if (LinkedList::count() != 0){
        LinkedList::remove(0);
        // cout <<"POP node value : " << temp->getValue() << endl ;
    }
    
    else if(LinkedList::count() == 0) {
        // cout << "Out of range "<<  endl;
        return 0;
    }
    return temp->getValue();
}

Node * Stack::stackPeek(){                                         //return the last Node
    Node *temp = LinkedList::get_fNode();
    // cout << temp << endl;
    if (LinkedList::count() != 0){
        // cout << "PEEK_stack node value : " << temp->getValue() << endl;
        return temp;
    }
    else {
        cout << "Not has member " << endl ;
        return 0;
    }
}
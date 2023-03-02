#include"Node.h"
#include"LinkedList.h"
#include"Stack.h"
#include<iostream>
using namespace std;

Stack::Stack(){                                                 //Stack as Linkedlist

}

Stack::~Stack(){}

void Stack::stackPush(Node *newNode){                           //Add node at the end
    cout << "Node value : " << newNode->getValue() << " has push to the end" << endl;
    LinkedList::insert(newNode,-1);
}

int Stack::stackPop(){                                          //remove node at the end
    Node *temp = LinkedList::lastNode();
    if (LinkedList::count() != 0){
        LinkedList::remove(-1);
        cout <<"POP node value : " << temp->getValue() << endl ;
    }
    
    else if(LinkedList::count() == 0) {
        cout << "Out of range "<<  endl;
        return 0;
    }
    return temp->getValue();
}

int Stack::stackPeek(){                                         //return the last Node
    Node *temp = LinkedList::lastNode();
    // cout << temp << endl;
    if (temp != 0){
        // cout << "55";
        cout << "PEEK_stack node value : " << temp->getValue() << endl;
        return temp->getValue();
    }
    else {
        cout << "Not has member " << endl ;
        return 0;
    }
}
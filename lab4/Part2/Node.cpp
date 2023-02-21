#include "Node.h"
#include<iostream>
using namespace std;
Node::Node()
{
    value = 0;
    next = NULL;
} 

Node::Node(int newValue, Node *newNext)
{
    value = newValue;
    next = newNext;
}

int Node::getValue()
{
    return value ;
}

void Node::setValue(int newValue)
{
    value = newValue;
}

Node* Node::setter(Node *newval)
            {
                next = newval;
                return next;
            }

Node* Node::getter(){
return next;
}

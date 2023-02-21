#ifndef STACK_H
#define STACK_H

#include"Node.h"
#include"LinkedList.h"
    class Stack: public LinkedList{
        public :
            Stack();
            ~Stack();
            void stackPush(Node *newNode);
            int stackPop();
            int stackPeek();


    };

#endif
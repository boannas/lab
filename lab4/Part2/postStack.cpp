#include"Stack.h"
#include"Node.h"
#include"Queue.h"
#include"LinkedList.h"
#include<iostream>
using namespace std;
int main() {
    // create Stack
    Stack first , second;
    int stack[] = {0,2,3,0,4,5};                        //create array to make a List
    for(int i = 0;i < sizeof(stack)/4;i++){
        Node *Temp = new Node(stack[i],NULL);
        first.stackPush(Temp);

        while(first.count() != 0){                              
            Node *Temp2 = first.stackPeek();
            Node *x = second.stackPeek();
            if(Temp->getValue() != 0){                      // Normal push stack
                first.stackPop();
                second.stackPush(Temp2);
            }
            else if (second.stackPeek() != 0){              // Case when zero appear in the first stack                        
                second.stackPop();
                first.stackPop();
                second.stackPush(Temp2);
                second.stackPush(x);
            }
            else {                                          // Case that second stack start with zero
                second.stackPush(Temp2);
                first.stackPop();
            }
        }
    }
    second.printList();
}
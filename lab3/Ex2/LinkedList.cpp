#include"LinkedList.h"
#include"Node.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
    tail = NULL;
    size = 0;
}

void LinkedList::insert(Node *newNode, int pos)
{
    Node *prev, *curr ;
    prev = NULL;
    curr = head;
    if(pos ==0 && head!=NULL || count() + pos == -1){
        newNode->setter(head);
        head = newNode;
        return ;
    }
    else if (head == NULL){
        head = newNode;
        return;
    }
    else if(pos>0 && pos <= count()){
        int i = 0;
        while(i!=pos) {
            prev = curr;
            curr = curr->setter(curr->getter());
            i++;
            
        }
        prev->setter(newNode);
        newNode->setter(curr);
        return ; 
    }
    else if(pos<0 && -(pos)<count() ){
        int j = count() + pos +1 ;
        int k =0;
        while(k != j){
            prev = curr;
            curr = curr->setter(curr->getter());
            k++;
        }
        prev->setter(newNode);
        newNode->setter(curr);
        return ; 
    }
    else {
        cout << "Position out of list" << endl;
        return ;
    }
    // cout << count() +pos;
}

Node* LinkedList::remove(int pos)
{
    Node *prev, *curr  ;
    Node *temp;
    prev = NULL;
    curr = head;
    
    if (pos == 0 && head!=NULL || count() + pos == 0){
        head = curr->getter();
        temp = curr;
        curr->setter(NULL);
        cout <<"The Node position " << pos << "\tvalue : " << temp->getValue() << "\tat : " << temp << " has been remove " << endl;
        return temp  ; 
    }
   else if(pos > 0 && pos <= count()-1 ){
    int i = 0;
        while(i!=pos) {
            prev = curr;
            curr = curr->setter(curr->getter());
            i++;
        }
        prev->setter(curr->getter()) ;
        temp = curr;
        curr->setter(NULL);
        cout <<"The Node position " << pos << "\tvalue : " << temp->getValue() << "\tat : " << temp << " has been remove " << endl;
        
        return temp ; 
        free(temp);
    }
    else if(pos<0 && -(pos)<=count() ){
        int j = count() + pos;
        int k =0;
        while(k!=j) {
            prev = curr;
            curr = curr->setter(curr->getter());
            // cout << k << endl;
            k++;
        }
        prev->setter(curr->getter()) ;
        temp = curr;
        curr->setter(NULL);
        cout <<"The Node position " << pos << "\tvalue : " << temp->getValue() << "\tat : " << temp << " has been remove " << endl;
        
        return temp ; 
        free(temp);
    }

    else {
        cout << "In position " << pos << " doesn't has member" << endl;
        return 0;
    }
    
}

void LinkedList::deleteBeg()
{
    if (head == NULL) {
        cout << "List is empty" << endl;
    }
    else {
        cout << head << endl ;
        Node *ptr = head;
        head = head->getter();
        cout << head << endl;
        // free(ptr);

    }
}

void LinkedList::deleteEnd()
{
    if(head == NULL){
        cout << "List is Empty" << endl;
    }
    else {
        Node *ptr, *prev;
        ptr = head;
        while (ptr->getter() != NULL){
            prev = ptr;
            ptr = ptr->setter(ptr->getter());
        }
        prev->setter(NULL);
    }
    
}

int LinkedList::count()
{
    size = 0;
    Node *ptr = head;
    if(ptr == NULL){
        cout << "List is empty" << endl;
        return 0;
    }

    else {
        while(ptr!=NULL){
        ptr = ptr->setter(ptr->getter());
        size ++;
        // cout << "value : " << ptr->value << endl;
    }
    }
    return size;
}

void LinkedList::reverse(){
    Node *prev ,*curr ,*nex;
    prev = NULL;
    curr = head;
    while (curr != NULL){
    nex = curr->getter();
    curr->setter(prev);
    prev = curr;
    curr = nex;
    }
    head = prev;
}

int LinkedList::findLoop(){
    Node *slow = head, *fast = head;
    while (fast!=NULL&&fast->getter()!=NULL){
        fast = fast->setter(fast->setter(fast->getter()));
        slow = slow->getter();
        if(slow == fast){
            return 1;
        }

    }
    return 0;
}

void LinkedList::printList()
{
    Node* temp = head;
 
    // Check for empty list.
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }
 
    // Traverse the list.
    cout <<"Size of List : " << count() << "\tLinked List member : " ;
    while (temp != NULL) {
        cout << temp->getValue() << " ";
        temp = temp->getter();
    }
    cout << endl;
}

Node* LinkedList::reTail(){
    Node* temp = head , *prev = NULL;
    // Check for empty list.
    if (head == NULL) {
        cout << "List empty" << endl;
        return 0;
    }
 
    // Traverse the list.
    // cout <<"Size of List : " << count() << "\tLinked List member : " ;
    while (temp != NULL) {
        prev = temp;
        temp = temp->getter();
    }

    cout <<"Last Node Address : " << prev << endl;
    return prev;
}

 
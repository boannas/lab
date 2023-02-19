#include<iostream>
#include"Node.h"
#include"LinkedList.h"
using namespace std;

int main() {                // Position of member is like a index of list
    cout << "-------------------------------------------------------------------------------" << endl;
    // Create the Node
    Node a,b,c,d,f,g;
    LinkedList List;            
    a.setValue(1);
    b.setValue(2);
    c.setValue(3);
    d.setValue(4); 
    f.setValue(5);
    g.setValue(6);

    //Create Linkedlist
    List.insert(&c,0);
    List.insert(&b,0);
    List.insert(&a,-3);
    // List.insert(&d,3);
    // List.insert(&f,4);
    // List.insert(&g,5);
    List.printList();
    // cout <<"Address of c : " << &c << endl ;

    // List.reTail();
    //Try to remove Node
    // List.remove(0);
    List.remove(-3);
    // List.remove(0);
    // List.remove(0);
    // List.remove(0);
    // List.remove(0);
    // Node *AAA = List.remove(2) ;
    // if (AAA != 0){
    //     cout << endl <<"Address of removed Node : " << AAA << "\tValue : " << AAA->value << endl;
    // }
    List.printList();
    cout << "-------------------------------------------------------------------------------" << endl;
    

    // List.reverse();
    // List.printList();


    // List.count();
    // List.insert(&a,5);
    // cout << "Address of A : " << &a << endl;
    // cout << "Address_a -> Node B : " <<a.getter() << endl;
    // List.insert(&b,0);
    // cout << "Address_a -> Node B : " <<a.getter() << endl;
    // cout << "Address B : " << &b << endl;
    // cout << "Address_b -> Node C : " <<b.getter() << endl;
    // List.insert(&c,0);
    // cout << "Address_b -> Node C : " <<b.getter() << endl;
    // cout << "Address c : " << &c << endl;
    // cout << "Address_c -> NULL : " <<c.getter() << endl << endl;
    

    // List.reverse();
    // cout << "Address of A : " << &a << endl;
    // cout << "Address_a -> Node B : " <<a.getter() << endl;
    // cout << "Address_a -> Node B : " <<a.getter() << endl;
    // cout << "Address B : " << &b << endl;
    // cout << "Address_b -> Node C : " <<b.getter() << endl;
    // cout << "Address_b -> Node C : " <<b.getter() << endl;
    // cout << "Address c : " << &c << endl;
    // cout << "Address_c -> NULL : " <<c.getter() << endl << endl;
    // List.deleteBeg();

    // cout << "Address_a -> Node B : " <<a.getter() << endl;
    // cout << "Address_a -> Node B : " <<a.getter() << endl;
    // cout << "Address B : " << &b << endl;
    // cout << "Address_b -> Node C : " <<b.getter() << endl;
    // cout << "Address_b -> Node C : " <<b.getter() << endl;
    // cout << "Address c : " << &c << endl;
    // cout << "Address_c -> NULL : " <<c.getter() << endl << endl;
    // List.count();
    // List.deleteEnd();

    // cout << "Address_a -> Node B : " <<a.getter() << endl;
    // cout << "Address_a -> Node B : " <<a.getter() << endl;
    // cout << "Address B : " << &b << endl;
    // cout << "Address_b -> Node C : " <<b.getter() << endl;
    // cout << "Address_b -> Node C : " <<b.getter() << endl;
    // cout << "Address c : " << &c << endl;
    // cout << "Address_c -> NULL : " <<c.getter() << endl << endl;
    // List.count();
    // List.deleteBeg();

    // cout << "Address_a -> Node B : " <<a.getter() << endl;
    // cout << "Address_a -> Node B : " <<a.getter() << endl;
    // cout << "Address B : " << &b << endl;
    // cout << "Address_b -> Node C : " <<b.getter() << endl;
    // cout << "Address_b -> Node C : " <<b.getter() << endl;
    // cout << "Address c : " << &c << endl;
    // cout << "Address_c -> NULL : " <<c.getter() << endl;
    // List.count();
    // cout << List.findLoop() << endl;
}
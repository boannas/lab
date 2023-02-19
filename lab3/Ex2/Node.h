#ifndef NODE_H
#define NODE_H
class Node
{
    private:
        int value;
        Node *next;
    public:

        Node();
        Node(int newValue, Node *newNext);
        int getValue();
        void setValue(int newValue);

        Node* getter();
        Node* setter(Node *newval);
}; 
#endif 
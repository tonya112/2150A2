#ifndef NODE_H
#define NODE_H

#include "ListItem.h"

class Node {
private:
    ListItem* item;
    Node* next;

public:
    // Constructor
    Node(ListItem* item, Node* nextNode = nullptr);

    // Destructor
    ~Node();

    // Getters
    ListItem* getItem() const;
    Node* getNext() const;

    // Setter
    void setNext(Node* nextNode);
};


#endif // NODE_H

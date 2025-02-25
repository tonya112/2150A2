#include "Node.h"

Node::Node(ListItem* e, Node* nextNode) : item(e), next(nextNode) {}

// Destructor: ensures proper cleanup.
Node::~Node() {
    delete item;  // Ensure we free the memory.
}

// Get the item stored in the node.r
ListItem* Node::getItem() const {
    return item;
}

// Get the next node in the list.
Node* Node::getNext() const {
    return next;
}

// Set the next node.
void Node::setNext(Node* nextNode) {
    next = nextNode;
}
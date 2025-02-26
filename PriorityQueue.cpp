#include "PriorityQueue.h"

PriorityQueue::PriorityQueue() : front(nullptr), rear(nullptr) { }

PriorityQueue::~PriorityQueue() { clear(); }

void PriorityQueue::enqueue(ListItem* p) {
    Node* newNode = new Node(p);

    if (isEmpty()) {
        front = rear = newNode;
        return;
    }

    if (p->compare(front->getItem())) {
        newNode->setNext(front);
        front = newNode;
        return;
    }

    Node* current = front;
    while (current->getNext() != nullptr && !p->compare(current->getNext()->getItem())) {
        current = current->getNext();
    }

    newNode->setNext(current->getNext());
    current->setNext(newNode);

    if (newNode->getNext() == nullptr) {
        rear = newNode;
    }
}

ListItem* PriorityQueue::dequeue() {
    if (isEmpty()) {
        return nullptr;
    } else {
        Node* temp = front;
        ListItem* item = front->getItem();
        front = front->getNext();
        if (!front) {
            rear = nullptr;
        }
        delete temp;
        return item;
    }
}

bool PriorityQueue::isEmpty() {
    return front == nullptr;
}

void PriorityQueue::clear() {
    while (!isEmpty()) {
        dequeue();
    }
}
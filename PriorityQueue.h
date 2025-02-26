#ifndef PriorityQueue_H
#define PriorityQueue_H

#include "Plane.h"
#include "Node.h"

class PriorityQueue {
private:
    Node* front;
    Node* rear;

public:
    PriorityQueue();

    ~PriorityQueue();

    void enqueue(ListItem* p);

    ListItem* dequeue();

    bool isEmpty();

    void clear();

};


#endif //PriorityQueue_H

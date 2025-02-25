#ifndef PROCESSPARAMS_H
#define PROCESSPARAMS_H

#include "PriorityQueue.h"

class ProcessParams {
private:
    bool* runway;
    int sizeRW;
    PriorityQueue* eventQueue;
    PriorityQueue* waitingList;


public:
    ProcessParams(bool* rw, int size, PriorityQueue* eq, PriorityQueue* wl)
            : runway(rw), sizeRW(size), eventQueue(eq), waitingList(wl){}

    bool* getRunway();

    PriorityQueue* getEventQueue();

    PriorityQueue* getWaitingList();

    int checkRunway();
};


#endif //PROCESSPARAMS_H

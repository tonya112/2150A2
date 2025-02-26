#ifndef PROCESSPARAMS_H
#define PROCESSPARAMS_H

#include "PriorityQueue.h"
#include "FileReader.h"

class ProcessParams {
private:
    bool* runway;
    int sizeRW;
    PriorityQueue* eventQueue;
    PriorityQueue* waitingList;
    FileReader* fileReader;


public:
    ProcessParams(bool* rw, int size, PriorityQueue* eq, PriorityQueue* wl, FileReader* fr)
            : runway(rw), sizeRW(size), eventQueue(eq), waitingList(wl), fileReader(fr){}

    bool* getRunway();

    PriorityQueue* getEventQueue();

    PriorityQueue* getWaitingList();

    FileReader* getFileReader();

    int checkRunway();
};


#endif //PROCESSPARAMS_H

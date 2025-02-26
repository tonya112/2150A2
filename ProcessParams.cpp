#include "ProcessParams.h"



ProcessParams::ProcessParams(bool* rw, int size, PriorityQueue* eq, PriorityQueue* wl, FileReader* fr)
        : runway(rw), sizeRW(size), eventQueue(eq), waitingList(wl), fileReader(fr){

    for(int i = 0; i < sizeRW; i++)
    {
        runway[i] = true;
    }
}
bool* ProcessParams::getRunway() {
    return runway;
}

PriorityQueue* ProcessParams::getEventQueue() {
    return eventQueue;
}

PriorityQueue* ProcessParams::getWaitingList() {
    return waitingList;
}

int ProcessParams::checkRunway() {
    int index = -1;

    for(int i=0; i < sizeRW; i++) {
        if(runway[i]){
            index = i;
            break;
        }
    }

    return index;
}

FileReader *ProcessParams::getFileReader() {
    return fileReader;
}



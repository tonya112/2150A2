#include "ProcessParams.h"


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
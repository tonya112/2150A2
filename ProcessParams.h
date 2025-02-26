#ifndef PROCESSPARAMS_H
#define PROCESSPARAMS_H

#include "PriorityQueue.h"
#include "FileReader.h"

class FileReader;  // 告诉编译器 Event 是一个类

class ProcessParams {
private:
    bool* runway;
    int sizeRW;
    PriorityQueue* eventQueue;
    PriorityQueue* waitingList;
    FileReader* fileReader;
    int* timeWasted;


public:
    ProcessParams(bool* rw, int size, PriorityQueue* eq, PriorityQueue* wl, FileReader* fr, int* timeWasted);

    ~ProcessParams();

    bool* getRunway();

    PriorityQueue* getEventQueue();

    PriorityQueue* getWaitingList();

    FileReader* getFileReader();

    int* getTimeWasted();

    void addTimeWasted(int time);

    int checkRunway();
};


#endif //PROCESSPARAMS_H

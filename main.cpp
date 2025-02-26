#include <iostream>
#include "FileReader.h"

int main(int argc, char* argv[]) {
    string filename = argv[1];
    int numRunways = stoi(argv[2]);

    FileReader* fileReader = new FileReader(filename);
    PriorityQueue* planeWaitingList = new PriorityQueue();
    PriorityQueue* eventQueue= new PriorityQueue();
    bool* runway = new bool[numRunways];

    ProcessParams* infoState = new ProcessParams(runway, numRunways, eventQueue, planeWaitingList, fileReader);

    Event* event = fileReader->getNextEvent();
    if(event != nullptr)
    {
        eventQueue->enqueue(event);
    }


    while(!eventQueue->isEmpty())
    {
        Event* nextEvent = dynamic_cast<Event*>(eventQueue->dequeue());
        if(nextEvent != nullptr)
        {
            nextEvent->process(*infoState);
        }
        else
        {
            cout << "Error: Invalid event type" << endl;
        }

    }

    return 0;
}

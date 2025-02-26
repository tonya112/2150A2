#include "Request.h"

int main(int argc, char* argv[])
{

    string filename = argv[1];
    int numRunways = stoi(argv[2]);

    FileReader* fileReader = FileReader(filename);
    PriorityQueue* planeWaitingList = new PriorityQueue();
    PriorityQueue* eventQueue= new PriorityQueue();
    bool* runway = new bool[numRunways];

    ProcessParams* infoState = new ProcessParams(runway, numRunways, eventQueue, planeWaitingList, fileReader);

    fileReader->getNextEvent();
    while(!eventQueue->isEmpty())
    {
        Event* event = dynamic_cast<Event *>(eventQueue->dequeue());
        event->process(*infoState);

    }

    return 0;
}
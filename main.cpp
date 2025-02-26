#include <iostream>
#include "FileReader.h"

int main(int argc, char* argv[]) {
    string filename = argv[1];
    int numRunways = stoi(argv[2]);

    FileReader* fileReader = new FileReader(filename);
    PriorityQueue* planeWaitingList = new PriorityQueue();
    PriorityQueue* eventQueue= new PriorityQueue();
    bool* runway = new bool[numRunways];
    int timeWasted = 0;

    ProcessParams* infoState = new ProcessParams(runway, numRunways, eventQueue, planeWaitingList, fileReader, &timeWasted);

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
            delete(nextEvent);
        }
        else
        {
            cout << "Error: Invalid event type" << endl;
        }

    }

    //ending promote
    cout<<"#######################"<<endl;
    cout<<"The simulation has ended."<<endl;
    cout<<"The number of runways was " + std::to_string(numRunways) + "."<< endl;
    cout<<"The total amount of time wasted because runways were not available was " + to_string(timeWasted) + " minutes."<<endl;
    cout<<"#######################"<<endl;

    delete(infoState);

    return 0;
}

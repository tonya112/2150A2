#ifndef COMPLETE_H
#define COMPLETE_H

#include "Event.h"

class Complete : public Event {
private:
    int runwayNum;

public:
    Complete(int time, Plane* planePtr, int runway);

    void process(ProcessParams& p);

};


#endif // COMPLETE_H
#ifndef LANDING_H
#define LANDING_H

#include "Event.h"

class Landing : public Event{
private:
    int runwayNum;

public:
    Landing(int time, Plane* planePtr, int runway);

    void process(ProcessParams& p) override;
};


#endif // LANDING_H

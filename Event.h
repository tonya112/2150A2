#ifndef EVENT_H
#define EVENT_H

#include "ListItem.h"
#include "ProcessParams.h"
#include <iostream>
#include "Plane.h"
using namespace std;

class ProcessParams;  // 解决循环依赖

class Event : public ListItem {
private:
    int eventTime;
    Plane* plane;

public:
    Event(int time, Plane* planePtr)
        : eventTime(time), plane(planePtr){}

    virtual ~Event(){delete(plane);}

    virtual void process(ProcessParams& p) = 0;

    void removePlane()
    {
        plane = nullptr;
    }

    int getTime() const { return eventTime; }

    Plane* getPlane() const { return plane; }

    bool compare(ListItem* other) override{
        const Event* otherEvent = dynamic_cast<Event*>(other);

        return eventTime < otherEvent->eventTime;
    }
};


#endif // EVENT_H

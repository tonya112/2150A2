#include "Request.h"
#include "Landing.h"


Request::Request(int time, Plane* planePtr) : Event(time, planePtr) {

}

void Request::process(ProcessParams& p) {
    int runwayIndex = p.checkRunway();

    if (runwayIndex != -1) // has a free runway
    {
        Event* newLanding = new Landing(getTime(), getPlane(), runwayIndex);
        p.getEventQueue()->enqueue(newLanding);
    }
    else
    {
        p.getWaitingList()->enqueue(getPlane());
    }
    Event::removePlane();

    Event* newRequest = p.getFileReader()->getNextEvent();
    p.getEventQueue()->enqueue(newRequest);


}


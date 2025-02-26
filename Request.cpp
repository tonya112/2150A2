#include "Request.h"
#include "Service.h"


Request::Request(int time, Plane* planePtr) : Event(time, planePtr) {

}

void Request::process(ProcessParams& p) {
    int runwayIndex = p.checkRunway();

    if (runwayIndex != -1) // has a free runway
    {
        Event* service = new Service(getTime(), getPlane(), runwayIndex);
        p.getRunway()[runwayIndex] = false; //busy the runway
        p.getEventQueue()->enqueue(service);
    }
    else
    {
        p.getWaitingList()->enqueue(getPlane());
    }

    string reqType = " inbound for landing.";

    if (getPlane()->getType() == 1)
    {
        reqType = " ready for takeoff.";
    }

    string output = "TIME: " + std::to_string(getTime()) + " -> " + getPlane()->getAirLine() + " " + getPlane()->getFlightNum() + " (" + std::to_string(getPlane()->getAtcID()) + ") " + Plane::weightToString(getPlane()->getWeight()) + reqType;
    std::cout << output << std::endl;

    Event::removePlane();

    Event* newRequest = p.getFileReader()->getNextEvent();
    if(newRequest != nullptr)
    {
        p.getEventQueue()->enqueue(newRequest);
    }

}


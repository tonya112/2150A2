//
// Created by tonya on 2025-02-25.
//

#include "Service.h"
#include "Complete.h"

Service::Service(int time, Plane* planePtr, int runway) : Event(time, planePtr), runway(runway) {}
void Service::process(ProcessParams &p) {

    Complete* newCompleteEvent = new Complete(getTime() + getPlane()->getSetupTime(), getPlane(), runway);

    p.getEventQueue()->enqueue(newCompleteEvent);

    string eventType = "landing";
    if(getPlane()->getType() == 1)
    {
        eventType = "takeoff";
    }

    string output = "TIME: " + std::to_string(getTime()) + " -> " + getPlane()->getAirLine() + " " + getPlane()->getFlightNum() + " (" + std::to_string(getPlane()->getAtcID()) + ") " + Plane::weightToString(getPlane()->getWeight()) + " cleared for " + eventType + " on runway " + std::to_string(runway+1) + ". (time req. for " + eventType + ": " + std::to_string(getPlane()->getSetupTime()) + +")";
    std::cout << output << std::endl;

    removePlane();

}

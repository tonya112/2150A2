#include "Complete.h"
#include "Service.h"

Complete::Complete(int time, Plane* planePtr, int runway) : Event(time, planePtr), runwayNum(runway){};


void Complete::process(ProcessParams& p) {
    p.getRunway()[runwayNum]= true;

    string output = "TIME: " + std::to_string(getTime()) + " -> " + getPlane()->getAirLine() + " " + getPlane()->getFlightNum() + " (" + std::to_string(getPlane()->getAtcID()) + ") " + Plane::weightToString(getPlane()->getWeight()) + " has cleared the runway " + std::to_string(runwayNum+1) + ".";
    std::cout << output << std::endl;

    if (!p.getWaitingList()->isEmpty()){
        Plane* waitingPlane = dynamic_cast<Plane*>(p.getWaitingList()->dequeue());
        Service* newService = new Service(getTime(), waitingPlane, runwayNum);
        p.getEventQueue()->enqueue(newService);
    }

}

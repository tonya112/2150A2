#include "Complete.h"
#include "Service.h"

Complete::Complete(int time, Plane* planePtr, int runway) : Event(time, planePtr), runwayNum(runway){};


void Complete::process(ProcessParams& p) {
    p.getRunway()[runwayNum]= true;

    if (!p.getWaitingList()->isEmpty()){
        Plane* waitingPlane = dynamic_cast<Plane*>(p.getWaitingList()->dequeue());
        Service* newService = new Service(getTime(), waitingPlane, runwayNum);
        p.getEventQueue()->enqueue(newService);
    }

}

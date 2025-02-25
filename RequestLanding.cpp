#include "RequestLanding.h"
#include "Landing.h"


RequestLanding::RequestLanding(int time, Plane* planePtr) : Event(time, planePtr) {

}

void RequestLanding::process(ProcessParams& p) {
    int runwayIndex = p.checkRunway();

    if (runwayIndex != -1) {
        Landing* newLanding = new Landing(getTime(), getPlane(), runwayIndex);
        //readNextLine();
    } else {
        p.getWaitingList()->enqueue(getPlane());
    }
}


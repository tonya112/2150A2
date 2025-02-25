#include "Complete.h"

Complete::Complete(int time, Plane* planePtr, int runway) : Event(time, planePtr), runwayNum(runway){};


void Complete::process(ProcessParams& p) {
    p.getRunway()[runwayNum]= true;

    if (!p.getWaitingList()->isEmpty()){

    }

}

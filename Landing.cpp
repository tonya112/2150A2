#include "Landing.h"
#include "Complete.h"
Landing::Landing(int time, Plane *planePtr, int runway) : Event(time, planePtr), runwayNum(runway){ }

void Landing::process(ProcessParams& p) {
    Complete* newComplete = new Complete(getTime(), getPlane(), runwayNum);
    p.getRunway()[runwayNum] = false;
}
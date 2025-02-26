#include "Plane.h"

#include <iostream>
using namespace std;

int Plane::idCounter = 1;
Plane::Plane(const string& airLine, string flightNum, Weight weight, int time, int type)
        : airLine(airLine), flightNum(flightNum), ATC_ID(idCounter), weight(weight), time(time), type(type) {idCounter++;}

string Plane::getAirLine() const { return airLine; }

string Plane::getFlightNum() const { return flightNum; }

int Plane::getAtcID() const { return ATC_ID; }

Weight Plane::getWeight() const { return weight; }

int Plane::getTime() const { return time; }

int Plane::getType() const {
    return type;
}

bool Plane::compare(ListItem *other) {
    const Plane* otherPlane = dynamic_cast<Plane*>(other);

    if(time == otherPlane->time)
    {
        if(type == otherPlane->type)
        {
            return ATC_ID < otherPlane->ATC_ID;
        }
        else
        {
            return type < otherPlane->type;
        }
    }
    else
    {
        return time < otherPlane->time;
    }

}

int Plane::getSetupTime() const {
    int initialTime = 1;
    if(type == 0)
    {
        initialTime = 3;
    }

    return initialTime + static_cast<int>(weight);
}

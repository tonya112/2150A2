#include "Plane.h"

#include <iostream>
using namespace std;

int Plane::idCounter = 1;
Plane::Plane(const string& airLine, int flightNum, Weight weight)
        : airLine(airLine), flightNum(flightNum), ATC_ID(idCounter), weight(weight) {idCounter++;}

string Plane::getAirLine() const { return airLine; }

int Plane::getFlightNum() const { return flightNum; }

int Plane::getAtcID() const { return ATC_ID; }

Weight Plane::getWeight() const { return weight; }
#ifndef ASSIGNMENT2_PLANE_H
#define ASSIGNMENT2_PLANE_H

#include "ListItem.h"
#include <iostream>
using namespace std;

enum Weight {
    small=0,
    large=1,
    heavy=2,
    super=3
};

class Plane : ListItem{
private:
    static int idCounter;
    string airLine;
    int flightNum;
    Weight weight;
    int ATC_ID;

public:
    Plane(const string& airLine, int flightNum, Weight weight);

    string getAirLine() const;

    int getFlightNum() const;

    int getAtcID() const;

    Weight getWeight() const;



};


#endif //ASSIGNMENT2_PLANE_H

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

class Plane : public ListItem{
private:
    static int idCounter;
    string airLine;
    string flightNum;
    Weight weight;
    int ATC_ID;
    int time;
    int type;

public:
    Plane(const string& airLine, string flightNum, Weight weight, int time, int type);

    string getAirLine() const;

    string getFlightNum() const;

    int getAtcID() const;

    Weight getWeight() const;

    int getTime() const;

    int getType() const; //1 takeoff 0 landing

    bool compare(ListItem* other) override;

    static Weight stringToWeight(const std::string& size) {
        if (size == "small") return small;
        if (size == "large") return large;
        if (size == "heavy") return heavy;
        if (size == "super") return super;
        throw std::invalid_argument("Invalid weight type: " + size);
    }




};


#endif //ASSIGNMENT2_PLANE_H

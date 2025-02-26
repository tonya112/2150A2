//
// Created by tonya on 2025-02-25.
//

#ifndef A2_REQUESTTAKEOFF_H
#define A2_REQUESTTAKEOFF_H

#include "Request.h"

class RequestTakeoff : public Request {
public:
    RequestTakeoff(int time, Plane* planePtr): Request(time, planePtr) {};

    void process(ProcessParams& p) override {
        string output = "TIME: " + std::to_string(getTime()) + " -> " + getPlane()->getAirLine() + " " + getPlane()->getFlightNum() + " (" + std::to_string(getPlane()->getAtcID()) + ") " + Plane::weightToString(getPlane()->getWeight()) + " ready for takeoff.";
        std::cout << output << std::endl;
        Request::process(p);
    }
};

#endif //A2_REQUESTTAKEOFF_H

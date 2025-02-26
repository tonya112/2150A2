//
// Created by tonya on 2025-02-25.
//

#ifndef A2_REQUESTLANDING_H
#define A2_REQUESTLANDING_H

#include "Request.h"

class RequestLanding : public Request {
public:
    RequestLanding(int time, Plane* planePtr): Request(time, planePtr) {};

    void process(ProcessParams& p) override {
        string output = "TIME: " + std::to_string(getTime()) + " -> " + getPlane()->getAirLine() + " " + getPlane()->getFlightNum() + " (" + std::to_string(getPlane()->getAtcID()) + ") " + Plane::weightToString(getPlane()->getWeight()) + " inbound for landing.";
        std::cout << output << std::endl;
        Request::process(p);
    }
};

#endif //A2_REQUESTLANDING_H

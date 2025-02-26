//
// Created by tonya on 2025-02-25.
//

#ifndef A2_REQUESTLANDING_H
#define A2_REQUESTLANDING_H

#include "Request.h"

class RequestLanding : public Request {
public:
    RequestLanding(int time, Plane* planePtr): Request(time, planePtr) {};
};

#endif //A2_REQUESTLANDING_H

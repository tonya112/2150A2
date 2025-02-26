//
// Created by tonya on 2025-02-25.
//

#ifndef A2_REQUESTTAKEOFF_H
#define A2_REQUESTTAKEOFF_H

#include "Request.h"

class RequestTakeoff : public Request {
public:
    RequestTakeoff(int time, Plane* planePtr): Request(time, planePtr) {};
};

#endif //A2_REQUESTTAKEOFF_H

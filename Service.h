//
// Created by tonya on 2025-02-25.
//

#ifndef A2_SERVICE_H
#define A2_SERVICE_H


#include "Event.h"

class Service : public Event{
private:
    int runway;

public:
    Service(int time, Plane* planePtr, int runway);

    void process(ProcessParams& p) override;

};


#endif //A2_SERVICE_H

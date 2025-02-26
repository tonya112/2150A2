#ifndef RequestLanding_H
#define RequestLanding_H

#include "Event.h"


class Request : public Event{
private:


public:
    Request(int time, Plane* planePtr);

    void process(ProcessParams& p) override;

};


#endif //RequestLanding_H

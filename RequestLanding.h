#ifndef RequestLanding_H
#define RequestLanding_H

#include "Event.h"

class RequestLanding : public Event{
private:

public:
    RequestLanding(int time, Plane* planePtr);

    void process(ProcessParams& p) override;
};


#endif //RequestLanding_H

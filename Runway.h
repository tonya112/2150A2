#ifndef RUNWAY_H
#define RUNWAY_H

class Runway {
private:
    int id;         // runway ID.
    bool available; // True if the runway is free.

public:
    // Constructor: initialize runway with an id; available by default.
    Runway(int runwayID) : id(runwayID), available(true) { }

    // Return the runway ID.
    int getID() const;

    // Check if the runway is available.
    bool isAvailable() const;

    // Mark the runway as busy.
    void markBusy() ;

    // Mark the runway as free.
    void markFree() ;
};

#endif // RUNWAY_H

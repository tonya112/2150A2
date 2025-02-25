#include "Runway.h"

// Return the runway ID.
int Runway::getID() const { return id; }

// Check if the runway is available.
bool Runway::isAvailable() const { return available; }

// Mark the runway as busy.
void Runway::markBusy() { available = false; }

// Mark the runway as free.
void Runway::markFree() { available = true; }
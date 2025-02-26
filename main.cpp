#include "Request.h"

int main(int argc, char* argv[])
{
    FileReader *g = FileReader("a2.txt");
    Weight weight = Plane::stringToWeight("heavy");
    Plane *plane = new Plane("ABC123", "Boeing 747", weight, 100,1);
    Request newR = new Request(100, plane, g);
}
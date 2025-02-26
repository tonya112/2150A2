#include "FileReader.h"
#include "Plane.h"
#include "Request.h"
#include "RequestLanding.h"
#include "RequestTakeoff.h"

FileReader::FileReader(const std::string& filename) {
    inputFile.open(filename);
}

FileReader::~FileReader() {
    if (inputFile.is_open()) {
        inputFile.close();
    }
}

Event* FileReader::getNextEvent() {
    std::string line;
    if (getline(inputFile, line)) { // 读取下一行

        std::cout << line << std::endl;

        std::stringstream sst(line);
        string token;
        int time = 0;
        string callSign = "";
        string flightNum = "";
        string size = "";
        string requestType = "";
        int type = 0;

        sst >> token;  //grabbing the next token (reading time)
        time = stoi(token); //converting time (string format) to an int
        sst >> callSign;//grabbing the next token (reading call sign)
        sst >> flightNum;  //grabbing the next token (reading flight number)
        sst >> size;  //grabbing the next token (reading plane size)
        sst >> requestType;  //grabbing the next token (reading request type, either landing or takeoff)

        Weight weight = Plane::stringToWeight(size);
        if (requestType == "landing") {
            type = 0;
        } else if (requestType == "takeoff") {
            type = 1;
        }
        Plane *plane = new Plane(callSign, flightNum, weight, time, type);

        return new Request(time, plane);

    }
    return nullptr;
}

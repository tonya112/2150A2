#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include <sstream>
#include <string>
#include "Event.h"


class Event;  // 告诉编译器 Event 是一个类

class FileReader {
private:
    std::ifstream inputFile;
public:
    FileReader(const std::string& filename);
    ~FileReader();
    Event* getNextEvent(); // read nextline
};

#endif // FILEREADER_H

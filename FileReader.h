#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include <sstream>
#include <string>
#include "Event.h"
#include "Plane.h"



class FileReader {
private:
    std::ifstream inputFile;
public:
    FileReader(const std::string& filename);
    ~FileReader();
    Event* getNextEvent(); // 读取并解析下一行
};

#endif // FILEREADER_H

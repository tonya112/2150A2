cmake_minimum_required(VERSION 3.28)
project(A2test)

set(CMAKE_CXX_STANDARD 17)

add_executable(A2test main.cpp
        Complete.cpp
        FileReader.cpp
        Node.cpp
        Plane.cpp
        PriorityQueue.cpp
        ProcessParams.cpp
        Request.cpp
        Service.cpp)

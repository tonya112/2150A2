cmake_minimum_required(VERSION 3.27)
project(A2)

set(CMAKE_CXX_STANDARD 17)

add_executable(A2
        Event.h
        Request.h
        Request.cpp
        FileReader.cpp
        FileReader.h
        ProcessParams.h
        ProcessParams.cpp
        main.cpp
        Landing.cpp
        Complete.cpp
        Event.cpp
        RequestLanding.h
        RequestTakeoff.h)

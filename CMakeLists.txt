cmake_minimum_required(VERSION 3.26)
project(OperatorOverloadingLab)

set(CMAKE_CXX_STANDARD 17)

add_executable(OperatorOverloadingLab PersonDriver.cpp
        Person.cpp
        Person.h)

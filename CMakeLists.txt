cmake_minimum_required(VERSION 3.28)
project(RubicksCubeSolver)

set(CMAKE_CXX_STANDARD 17)

add_executable(RubicksCubeSolver main.cpp
        Model/GenericRubiksCube.cpp
        Model/GenericRubiksCube.h
        Model/RubiksCube3d.cpp
        Model/RubiksCube1d.cpp
        Model/RubiksCubeBitboard.cpp)

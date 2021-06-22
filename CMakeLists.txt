cmake_minimum_required(VERSION 3.12)
project(Smoking_Gun_Interactive_Evaluation)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Smoking_Gun_Interactive_Evaluation
        Point2D.cpp
        Point2D.h
        Rectangle2D.cpp
        Rectangle2D.h
        Entity.h
        Entity.cpp
        EntitiesCollision.cpp)

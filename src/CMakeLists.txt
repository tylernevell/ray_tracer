cmake_minimum_required(VERSION 3.17)
project(src)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(src
        Color.cpp
        Color.h
        main.cpp
        Ray.cpp
        Ray.h
        Vec3.cpp
        Vec3.h)

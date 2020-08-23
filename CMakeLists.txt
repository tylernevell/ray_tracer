cmake_minimum_required(VERSION 3.17)
project(ray_tracer_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(src)

add_executable(ray_tracer_2
        src/Color.cpp
        src/Color.h
        src/main.cpp
        src/Ray.cpp
        src/Ray.h
        src/Vec3.cpp
        src/Vec3.h
        README.md)

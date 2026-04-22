cmake_minimum_required(VERSION 3.31)
project(proyecto-2026)

set(CMAKE_CXX_STANDARD 20)

add_executable(proyecto-2026 main.cpp
        Coche.h
        Coche.cpp
        Moto.h
        Moto.cpp
        Cliente.cpp
        Cliente.h)

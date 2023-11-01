cmake_minimum_required(VERSION 3.26)
project(Studio16Recitation)

set(CMAKE_CXX_STANDARD 17)

add_executable(Studio16Recitation main.cpp
        calculator.h
        calculator.cpp
        operators.h
        operators.cpp)

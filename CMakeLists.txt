cmake_minimum_required(VERSION 3.23)
project(Person)

set(CMAKE_CXX_STANDARD 14)

add_executable(Person
        main.cpp
        include/Person.h
        src/Person.cpp
)

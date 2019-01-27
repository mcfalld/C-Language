cmake_minimum_required(VERSION 3.7)
project(tut)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c tut.h IO.h)
add_executable(tut ${SOURCE_FILES})
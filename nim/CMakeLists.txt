cmake_minimum_required(VERSION 3.7)
project(nim)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c)
add_executable(nim ${SOURCE_FILES})
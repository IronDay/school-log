cmake_minimum_required(VERSION 3.26)

project(school-log VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES_FILES src/*.hpp src/*.cpp main.cpp)

add_executable(school-log ${SOURCES_FILES})
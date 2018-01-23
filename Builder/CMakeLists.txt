cmake_minimum_required(VERSION 2.8)

include_directories(${DesignPattern_SOURCE_DIR}/Builder/inc)

file(GLOB builder_srcs ${DesignPattern_SOURCE_DIR}/Builder/src/*.cpp)  

set(SOURCES main.cpp ${builder_srcs})

add_executable(Builder ${SOURCES})
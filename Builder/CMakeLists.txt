cmake_minimum_required(VERSION 2.8)

include_directories(${DesignPattern_SOURCE_DIR}/Builder/inc)

set(SOURCES main.cpp ${DesignPattern_SOURCE_DIR}/Builder/src/cxmldom.cpp)

add_executable(Builder ${SOURCES})
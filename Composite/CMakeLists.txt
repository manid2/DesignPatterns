cmake_minimum_required(VERSION 2.8)

include_directories(${DesignPattern_SOURCE_DIR}/Composite/inc)
file(GLOB composite_srcs ${DesignPattern_SOURCE_DIR}/Composite/src/*.cpp) 
set(SRCS main.cpp ${composite_srcs})

add_executable(Composite ${SRCS})
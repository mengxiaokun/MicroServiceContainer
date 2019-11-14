cmake_minimum_required(VERSION 3.12)

project(Elastos.MicroService.Transmitter)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file( GLOB SOURCES "*.cpp" )

add_library(Transmitter SHARED ${SOURCES})


target_include_directories(Transmitter PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/../Service"
                          )

#cmake min version
cmake_minimum_required(VERSION 3.25)
#project name
project(POC)
#cxx version
set(CMAKE_CXX_STANDARD 20)
#bin path
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
#source code cxx
set(SOURCES main.cpp
            Complex.cpp)
#executable
add_executable(poc.app ${SOURCES})

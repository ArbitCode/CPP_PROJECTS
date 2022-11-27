#cmake min version
cmake_minimum_required(VERSION 3.25)
#project name
project(Editor)
#cxx version
set(CMAKE_CXX_STANDARD 20)
#bin path
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
#source code cxx
set(SOURCES main.cpp
            window/window.cpp)
#executable
add_executable(editor.app ${SOURCES})

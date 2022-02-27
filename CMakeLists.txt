cmake_minimum_required(VERSION 3.22.0)

project(Gor++)

set( CMAKE_CXX_COMPILER "C:/tools/msys64/mingw64/bin/g++.exe" )

set( CMAKE_C_COMPILER "C:/tools/msys64/mingw64/bin/gcc.exe" )
set( CMAKE_MAKE_PROGRAM "C:/tools/msys64/usr/bin/make.exe" FORCE ) 
find_program(CMAKE_MAKE_PROGRAM
  NAMES make
        make.exe
  DOC "Find a suitable make program for building under Windows/MinGW"
  HINTS C:/tools/msys64/usr/bin )

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(includes)

target_include_directories(${PROJECT_NAME} PUBLIC includes)

target_link_directories(${PROJECT_NAME} PRIVATE includes)

target_link_libraries(${PROJECT_NAME} exercises)

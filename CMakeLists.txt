cmake_minimum_required(VERSION 3.22.0)

project(Gor++)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(includes)

target_include_directories(${PROJECT_NAME} PUBLIC includes)

target_link_directories(${PROJECT_NAME} PRIVATE includes)

target_link_libraries(${PROJECT_NAME} exercises)

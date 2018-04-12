cmake_minimum_required(VERSION 3.8)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(Test)
add_subdirectory(cppbase)
add_subdirectory(StructPattern)
add_subdirectory(CreatorPattern)
add_subdirectory(ActionPattern)


#
#set(SOURCE_FILES main.cpp)
#add_executable(DesignPattern ${SOURCE_FILES})
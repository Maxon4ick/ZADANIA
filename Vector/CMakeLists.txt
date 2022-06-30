cmake_minimum_required(VERSION 3.5)

project(12 LANGUAGES CXX)

if(UNITTEST)
        add_subdirectory(googletests/)
endif()

add_subdirectory(MyVec)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(12 main.cpp)

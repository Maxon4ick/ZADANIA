cmake_minimum_required(VERSION 3.5)

project(ListV2 LANGUAGES CXX)

add_subdirectory(List_lib/)
if(UNITTEST)
        add_subdirectory(googletests/)
endif()
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ListV2 main.cpp)

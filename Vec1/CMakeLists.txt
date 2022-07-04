cmake_minimum_required(VERSION 3.5)

project(Vec1 LANGUAGES CXX)
if(UNITTEST)
        add_subdirectory(googletests/)
endif()
add_subdirectory(My/)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vec1 main.cpp)

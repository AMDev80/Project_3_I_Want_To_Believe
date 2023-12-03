cmake_minimum_required(VERSION 3.14)
project(Project_3_I_Want_To_Believe)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp
        Window.cpp
        Toolbox.cpp
        Screen.cpp
        UFO.cpp
        UFO.h
        MergeSort.h
        QuickSort.h)

add_executable(Project_3_I_Want_To_Believe ${SOURCE_FILES})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SFML_STATIC_LIBRARIES TRUE)

set(SFML_DIR C:SFML/lib/cmake/SFML)

find_package(SFML COMPONENTS system window graphics network audio REQUIRED)


include_directories(c:/SFML/include)
target_link_libraries(Project_3_I_Want_To_Believe sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
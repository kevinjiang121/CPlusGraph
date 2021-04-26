cmake_minimum_required(VERSION 3.19)
project(CPlusGraph)

set(CMAKE_CXX_STANDARD 14)

set(PROJECT_HEADERS
        GraphNode.h
        ItemType.h
        )

set(PROJECT_SOURCES
        main.cpp
        GraphNode.cpp
        ItemType.cpp
        )

add_executable(CPlusGraph ${PROJECT_SOURCES} ${PROJECT_HEADERS})
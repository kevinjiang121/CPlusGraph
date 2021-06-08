cmake_minimum_required(VERSION 3.19)
project(CPlusGraph)

set(CMAKE_CXX_STANDARD 14)

set(EIGEN_DIR "C://CPlusGraph//libraries//eigen")
if(NOT EXISTS ${EIGEN_DIR})
    message(FATAL_ERROR "Please check that the set Eigen directory is valid!")
endif()
include_directories(${EIGEN_DIR})

set(PROJECT_HEADERS
        GraphNode.h
        ItemType.h
        EigenGraph.h
        )

set(PROJECT_SOURCES
        main.cpp
        GraphNode.cpp
        ItemType.cpp
        EigenGraph.cpp
        )

add_executable(CPlusGraph ${PROJECT_SOURCES} ${PROJECT_HEADERS})
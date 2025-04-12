cmake_minimum_required(VERSION 3.10)
project(mySwap)


set(CMAKE_CXX_STANDARD 11)


include_directories(includes)


add_executable(mySwap
    main.cpp
    mySwap.cpp
)
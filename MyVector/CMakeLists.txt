cmake_minimum_required(VERSION 3.10)
project(MyVector)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(MyVector
    MyVector.hpp
    main.cpp
)


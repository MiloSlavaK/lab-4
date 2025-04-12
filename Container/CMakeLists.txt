cmake_minimum_required(VERSION 3.10)
project(Container)


set(CMAKE_CXX_STANDARD 11)


include_directories(includes)


add_executable(Container
    main.cpp
    Container.cpp
)
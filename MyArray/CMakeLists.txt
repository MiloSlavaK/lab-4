cmake_minimum_required(VERSION 3.10)
project(MyArrayProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(MyArrayExecutable
    main.cpp
)

target_include_directories(MyArrayExecutable PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

if(MSVC)
    target_compile_options(MyArrayExecutable PRIVATE /W4 /WX)
else()
    target_compile_options(MyArrayExecutable PRIVATE -Wall -Wextra -pedantic -Werror)
endif()
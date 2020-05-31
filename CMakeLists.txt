cmake_minimum_required(VERSION 3.15)
project(main)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wshadow -Wconversion -Wnon-virtual-dtor -pedantic")

file(GLOB files "*.cpp" "*.h")

add_executable(main ${files})
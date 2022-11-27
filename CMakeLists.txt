cmake_minimum_required(VERSION 3.23)
project(for_maloy C)

set(CMAKE_C_STANDARD 99)

add_executable(for_maloy laba6.c)
target_link_libraries(for_maloy m)
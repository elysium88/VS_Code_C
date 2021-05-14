cmake_minimum_required(VERSION 3.19)
project(VS_Code_C C)

set(CMAKE_C_STANDARD 99)

add_executable(Complex Complex.c)
add_executable(test test.c)
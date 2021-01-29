cmake_minimum_required(VERSION 3.0)
project(csapp C)

set(CMAKE_C_STANDARD 99)

add_executable(hello samples/chapter01/hello.c)

add_executable(show_bytes samples/chapter02/show_bytes.c)
add_executable(reverse_array samples/chapter02/reverse_array.c)
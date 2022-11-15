cmake_minimum_required(VERSION 3.23)
project(my_code C)

set(CMAKE_C_STANDARD 11)

add_executable(my_code
        process/fork_1.c)

add_executable(program_break_1
        malloc/program_break_1.c)
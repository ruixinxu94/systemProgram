cmake_minimum_required(VERSION 3.25)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled main.c fork/fork0.c fork/fork_1.c fork/fork_2.c wait/wait.c)

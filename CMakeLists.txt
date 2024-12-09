cmake_minimum_required(VERSION 3.5)

project(term-invaders)

add_executable(tinvaders src/main.cpp)

add_library(term_engine src/term_engine.cpp)

target_link_libraries(tinvaders PUBLIC ncurses PRIVATE term_engine)

add_executable(tinvaders main.cpp)

add_subdirectory(term_engine)

target_link_libraries(tinvaders PRIVATE term_engine)

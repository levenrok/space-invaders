add_library(term_engine term_engine.cpp)

target_include_directories(term_engine PUBLIC include)

target_link_libraries(term_engine PUBLIC ncurses)

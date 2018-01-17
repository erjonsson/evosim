cmake_minimum_required (VERSION 2.6)
project (evosim)
add_executable(evosim main.cpp organism.cpp world.cpp simulator.cpp)
target_compile_options(evosim PUBLIC $<$<COMPILE_LANGUAGE:CXX>:-std=c++14>)
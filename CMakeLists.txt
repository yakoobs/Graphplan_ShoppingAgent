cmake_minimum_required(VERSION 3.6)
project(Graphplan_ShoppingAgent)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Predicate.h Operator.h)
add_executable(Graphplan_ShoppingAgent ${SOURCE_FILES})
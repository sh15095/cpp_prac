cmake_minimum_required(VERSION 3.17)
project(os)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

find_package(Threads)
add_executable(os main.cpp thread1.cpp data_races.h race_condition.cpp race_condition.h data_races.cpp)
target_link_libraries(os Threads::Threads)


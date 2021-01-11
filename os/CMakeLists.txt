cmake_minimum_required(VERSION 3.17)
project(os)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

find_package(Threads)
add_executable(os main.cpp thread1.cpp)
target_link_libraries(os Threads::Threads)


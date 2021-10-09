cmake_minimum_required(VERSION 3.20)
project(ServerProyectoCrazyBreakout)

set(CMAKE_CXX_STANDARD 14)

add_executable(ServerProyectoCrazyBreakout main.cpp Header/ServerListener.h Sources/ServerListener.cpp)

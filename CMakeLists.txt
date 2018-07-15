cmake_minimum_required(VERSION 3.9)
project(Blockchain)

set(CMAKE_CXX_STANDARD 11)

add_executable(Blockchain main.cpp Blockchain.cpp Blockchain.h Block.cpp Block.h sha256.cpp sha256.h)
cmake_minimum_required(VERSION 3.19)
project(Inventory)

set(CMAKE_CXX_STANDARD 14)

add_executable(Inventory main.cpp Items.cpp Items.h Category.cpp Category.h Brand.cpp Brand.h Supply.cpp Supply.h international.cpp international.h Local.cpp Local.h Staff.cpp Staff.h numberGram.cpp numberGram.h Database.cpp Database.h)
cmake_minimum_required(VERSION 3.10)

add_library(mylibraries ${CMAKE_CURRENT_SOURCE_DIR}/source/lib.cpp)

target_link_directories(mylibraries PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/source)

target_include_directories(mylibraries PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

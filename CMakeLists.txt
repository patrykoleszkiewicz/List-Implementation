cmake_minimum_required(VERSION 3.10)

project(ListImplementation)

include_directories("Include")
add_subdirectory("Source")

add_executable(ListImplementation ${SOURCES})

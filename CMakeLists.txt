cmake_minimum_required(VERSION 3.10)

project(ListImplementation)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")

set(LIBRARY_OUTPUT_PATH build/)
set(BINARY_OUTPUT_PATH build/)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

include(External_GTest.cmake)

# SRC
include_directories(Include)
add_subdirectory(Source)

# TEST
include_directories(Test)
add_subdirectory(Test)

add_executable(list_implementation main.cpp ${SOURCES})

set(TEST_BINARY_FILES ${TEST_FILES} ${MAIN_TEST})

add_executable(list_implementation_ut test.cpp ${TEST_BINARY_FILES})
target_link_libraries(list_implementation_ut ${GTEST_MAIN_LIBRARY}
                                       		${GTEST_LIBRARY}
                                       		${GMOCK_MAIN_LIBRARY}
                                       		${GMOCK_LIBRARY})

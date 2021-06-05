cmake_minimum_required(VERSION 3.10)
project(ex1)

set (CMAKE_CXX_STANDARD 11)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

file(GLOB_RECURSE EX1_SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
add_library(ex1_src ${EX1_SRC})
target_include_directories(ex1_src PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(ex1 ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)
target_link_libraries(ex1 ex1_src)

file(GLOB_RECURSE EX1_TEST_SRC ${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp)
add_executable(tests ${EX1_TEST_SRC})
target_link_libraries(tests ex1_src)
target_link_libraries(tests ${CONAN_LIBS})

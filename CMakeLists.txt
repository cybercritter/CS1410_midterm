cmake_minimum_required(VERSION 3.23)

project(midterm VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CODE_DIRECTORY ${CMAKE_SOURCE_DIR}/src)

add_executable(${PROJECT_NAME} ${CODE_DIRECTORY}/main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC "inc")

cmake_minimum_required(VERSION 3.23)

project(midterm)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME} src/main.cpp)

target_sources(${PROJECT_NAME} PRIVATE src/student_record.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC "inc" "src")

add_subdirectory(test)
cmake_minimum_required(VERSION 3.23)

project(midterm VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CODE_DIRECTORY ${CMAKE_SOURCE_DIR}/src)

include(FetchContent)
FetchContent_Declare(
  cli
  GIT_REPOSITORY https://github.com/daniele77/cli.git
  GIT_TAG v2.1.0
)
FetchContent_MakeAvailable(cli)

add_executable(${PROJECT_NAME} ${CODE_DIRECTORY}/main.cpp)
target_sources(${PROJECT_NAME} PUBLIC ${CODE_DIRECTORY}/class_record.cpp
    ${CODE_DIRECTORY}/student_record.cpp
    ${CODE_DIRECTORY}/display.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC inc)
target_link_libraries(${PROJECT_NAME} PRIVATE cli::cli)


add_subdirectory(test)

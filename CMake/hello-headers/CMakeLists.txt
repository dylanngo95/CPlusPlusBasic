cmake_minimum_required(VERSION 3.12.2)

project(test_header)

set(SOURCES
    src/hello.cpp
    src/main.cpp
)

add_executable(hello_headers ${SOURCES})

target_include_directories(hello_headers
    PRIVATE
        ${PROJECT_SOURCE_DIR}/includes
)
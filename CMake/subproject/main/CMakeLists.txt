project(main)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME}
    sub::lib2
    sub::lib3
)
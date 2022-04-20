cmake_minimum_required(VERSION 3.12)

project(MyProject VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/exampleTeachers.txt ${CMAKE_CURRENT_SOURCE_DIR}/exampleStudents.txt 
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

include_directories(include)

add_executable(
    ${PROJECT_NAME}
    src/main.cpp
    src/classroom.cpp
    src/person.cpp
    src/student.cpp
    src/teacher.cpp
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)
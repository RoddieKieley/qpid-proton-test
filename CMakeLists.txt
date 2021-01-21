cmake_minimum_required(VERSION 3.0.0)
project(qpid-proton-test VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(qpid-proton-test main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(ProtonCpp REQUIRED)

target_include_directories(qpid-proton-test
        PUBLIC SYSTEM
        /usr/include
        /usr/local/include
        /opt/local/include
        )

#target_link_libraries(qpid-proton-test qpid-proton-core qpid-proton-cpp qpid-proton-proactor)
target_link_libraries(qpid-proton-test Proton::cpp)
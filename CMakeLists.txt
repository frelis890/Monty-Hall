cmake_minimum_required()
project(Monty Hall game)

include(CTest)
enable_testing()

add_executable(Monty Hall game main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

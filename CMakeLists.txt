cmake_minimum_required(VERSION 3.0.0)
project(DulLists)

include(CTest)
enable_testing()

aux_source_directory(./src DIR_SRCS)
add_executable(Demo ${DIR_SRCS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

cmake_minimum_required(VERSION 3.22)

project(DulLists)

aux_source_directory(./src DIR_SRCS)

add_executable(Demo ${DIR_SRCS})
# CMake最低版本号要求
cmake_minimum_required(VERSION 2.8)

# 项目名称
project(CsvReader)

# C++11 编译
set(CMAKE_CXX_STANDARD 11)

# 查找当前目录下的所有源文件，并赋值到DIR_SRC变量中
aux_source_directory(./ DIR_LIB_SRC)

message("CMAKE_SOURCE_DIR ${CMAKE_SOURCE_DIR}")
#SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)
SET(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)

# 生成链接库
add_library(CsvReader SHARED ${DIR_LIB_SRC})




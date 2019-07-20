cmake_minimum_required(VERSION 2.8)

project(CsvReader)

aux_source_directory(./ DIR_SRC)

# C++11 编译
set(CMAKE_CXX_STANDARD 11)

# 创建共享库
add_library(CsvReader SHARED ${DIR_SRC})

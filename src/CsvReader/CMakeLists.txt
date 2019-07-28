# CMake最低版本号要求
cmake_minimum_required(VERSION 2.8)

# 项目名称
project(CsvReader)

# C++11 编译
#set(CMAKE_CXX_STANDARD 11)

# 查找当前目录下的所有源文件，并赋值到DIR_SRC变量中
#aux_source_directory(./ DIR_SRC)

# 添加头文件路径
include_directories("${PROJECT_SOURCE_DIR}/include")

# 添加子目录
add_subdirectory(googletest-1.8.1)
add_subdirectory(CsvReader)

# 生成链接库
#add_library(CsvReader SHARED ${DIR_SRC})

# http://www.zedwood.com/article/cpp-csv-parser
# https://menrfa.wordpress.com/2012/02/09/%E4%BD%BF%E7%94%A8cmake%E5%92%8Cgtest%E6%9D%A5%E8%A7%84%E5%88%92%E5%8D%95%E5%85%83%E6%B5%8B%E8%AF%95/
# https://www.cnblogs.com/wuchaodzxx/p/8916009.html

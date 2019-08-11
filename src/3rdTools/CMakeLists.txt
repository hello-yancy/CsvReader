# 添加子目录
add_subdirectory(googletest)

# 设置库文件输出路径
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)

include(${CMAKE_SOURCE_DIR}/DownloadProject.cmake)
download_project(
    PROJ                googletest
    PREFIX              ${CMAKE_SOURCE_DIR}/src/3rdTools/googletest_t
    GIT_REPOSITORY      https://github.com/google/googletest.git
    GIT_TAG             release-1.8.1
    ${UPDATE_DISCONNECTED_IF_AVAILABLE}
)

add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})

cmake_minimum_required(VERSION 3.14)
project(ffmpeg-cmake-example C CXX)
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(src)
add_subdirectory(lib/ffmpeg)

add_executable(example ${SOURCES})
target_link_libraries(example ffmpeg)

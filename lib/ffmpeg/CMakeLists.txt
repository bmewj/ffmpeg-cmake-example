cmake_minimum_required(VERSION 3.14)
project(ffmpeg)

find_package(PkgConfig REQUIRED)
pkg_check_modules(AVCODEC  REQUIRED IMPORTED_TARGET libavcodec)
pkg_check_modules(AVFORMAT REQUIRED IMPORTED_TARGET libavformat)
pkg_check_modules(AVUTIL   REQUIRED IMPORTED_TARGET libavutil)

add_library(ffmpeg INTERFACE IMPORTED GLOBAL)
target_include_directories(ffmpeg INTERFACE
    ${AVCODEC_INCLUDE_DIRS}
    ${AVFORMAT_INCLUDE_DIRS}
    ${AVUTIL_INCLUDE_DIRS}
)
target_link_options(ffmpeg INTERFACE
    ${AVCODEC_LDFLAGS}
    ${AVFORMAT_LDFLAGS}
    ${AVUTIL_LDFLAGS}
)

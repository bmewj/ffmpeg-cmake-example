cmake_minimum_required(VERSION 2.8)

#set(CMAKE_OSX_DEPLOYMENT_TARGET "10.10" CACHE STRING "Minimum OS X deployment version")
#project(ffmpeg-cmake-example)

#set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/CMakeModules)
#set(CMAKE_CXX_STANDARD 14)

#add_executable(ffmpeg-cmake-example main.cpp)

#find_package(FFmpeg REQUIRED)
#include_directories(${FFMPEG_INCLUDE_DIR})
#list(APPEND FFMPEG_LIBRARIES
#    "-framework AudioToolbox"
#    "-framework VideoToolbox"
#    "-framework CoreServices"
#    "-framework CoreFoundation"
#    "-framework CoreVideo"
#    "-framework CoreMedia"
#    "-framework Security"
#    "-L/usr/local/opt/openssl/lib"
#    -lz
#    -lBZ2
#    -liconv
#    -llzma
#)
#target_link_libraries(ffmpeg-cmake-example
#    ${FFMPEG_LIBRARIES}
#)

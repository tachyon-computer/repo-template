cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(STUB_PROJECT VERSION 0.0.1 LANGUAGES CXX)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

include(MessageColors)
include(LoggingHelper)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/lib)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(CommonProjectOptions INTERFACE)
include(CommonProjectOptions)

include(ClangTidy)
include(ClangFormat)
include(CTags)

include(CompilerWarnings)
include(CompilerSanitizers)

add_subdirectory(extern)
add_subdirectory(src)

if(BUILD_TESTING AND TACHYON_OPTIONS_BUILD_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif()

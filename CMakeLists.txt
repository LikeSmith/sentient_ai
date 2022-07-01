#
# Scentient AI
#
# Author: Kyle Crandall <crandalk@gmail.com>
# Date: JULY 2022
#
# An artifical intelligence what is sentient
#

cmake_minimum_required(VERSION 3.22)
project(SentientAI VERSION 0.1)

# Compiler Settings
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(BUILD_SHARED_LIBS off)
if(WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS on)
endif()

# Project Settings

# Config Files
configure_file(config/sentient_ai.h.in include/sentient_ai.h)

# Add include directories for all targets
include_directories(
    "${CMAKE_BINARY_DIR}/include"
    "include"
)

# Library Targets

# Executable Targets
add_executable(sentientAI src/main.cpp)

# Add target links

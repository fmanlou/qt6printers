cmake_minimum_required(VERSION 3.14)

project(test LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

find_package(QT NAMES Qt6 COMPONENTS Core REQUIRED)
find_package(Qt6 COMPONENTS Core REQUIRED)

add_executable(test
  main.cpp
)
target_link_libraries(test Qt${QT_VERSION_MAJOR}::Core)

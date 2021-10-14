cmake_minimum_required(VERSION 3.1.0)

project(goose VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(QT NAMES Qt6 Qt5 COMPONENTS
    Core
    Gui
    Widgets
    Concurrent
    Network
    REQUIRED
)

find_package(Qt${QT_VERSION_MAJOR} COMPONENTS
    Core
    Gui
    Widgets
    Concurrent
    Network
    REQUIRED
)

add_executable(goose
    main.cpp
    Goose.hpp
    Goose.cpp
)

target_link_libraries(goose Qt${QT_VERSION_MAJOR}::Widgets)

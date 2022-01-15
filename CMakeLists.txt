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

find_package(QT NAMES Qt5 COMPONENTS
    Core
    Gui
    Multimedia
    Widgets
    Concurrent
    Network
    REQUIRED
)

find_package(Qt5 COMPONENTS
    Core
    Gui
    Widgets
    Multimedia
    Concurrent
    Network
    REQUIRED
)

aux_source_directory("src" coresrc)

add_executable(goose
    ${coresrc}
)

target_include_directories(
    goose PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(goose PRIVATE Qt5::Widgets
                            Qt5::Multimedia)

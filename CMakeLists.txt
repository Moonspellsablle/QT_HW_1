cmake_minimum_required(VERSION 3.10)

project(Palindrome LANGUAGES CXX)
set(APP ${PROJECT_NAME})

set (CMAKE_CXX_STANDARD 11)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(${APP}_H
    MainWindow.h
)

set(${APP}_CPP
    MainWindow.cpp
    main.cpp
)

set(${APP}_ALL
    ${${APP}_H}
    ${${APP}_CPP}
)

set(${APP}_EXT
    Qt5::Widgets
)

add_executable(${APP} ${${APP}_ALL})

target_link_libraries(${APP} ${${APP}_EXT})

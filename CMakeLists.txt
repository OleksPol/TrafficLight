cmake_minimum_required(VERSION 3.12)
project(TrafficLight)

set(CMAKE_CXX_STANDARD 98)
set(EXECUTABLE_NAME "TrafficLight")
add_executable(${EXECUTABLE_NAME}
        Sources/main.cpp

        Sources/GreenLight.cpp
        Sources/YellowLight.cpp
        Sources/TrafficLight.cpp
        Sources/TrafficPicture.cpp
        Sources/TrafficState.cpp
        Sources/TrafficTimer.cpp
        Sources/RedLight.cpp
        Sources/SLogger.cpp

        Headers/GreenLight.h
        Headers/YellowLight.h
        Headers/RedLight.h
        Headers/TrafficPicture.h
        Headers/TrafficTimer.h
        Headers/TrafficLight.h
        Headers/TrafficState.h
        Headers/SLogger.h
        Headers/Utilities.h

        )

find_package( Curses REQUIRED )
include_directories( ${CURSES_INCLUDE_DIRS} )
target_link_libraries( TrafficLight ${CURSES_LIBRARIES} )
cmake_minimum_required(VERSION 3.24)
project(BoostSMLProject)

set(CMAKE_CXX_STANDARD 14)

add_library(sml INTERFACE)

target_include_directories(sml INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/vendor/boost/include>)

add_executable(${PROJECT_NAME}
        src/Actions.hpp
        src/Events.hpp
        src/Guards.hpp
        src/Logger.hpp
        src/Main.cpp
        src/States.hpp
        src/Transitions.hpp)

target_link_libraries(${PROJECT_NAME} PRIVATE sml)

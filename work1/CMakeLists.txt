cmake_minimum_required(VERSION 3.0)
project(Sprouthon)

cmake_policy(SET CMP0135 NEW)

if(WIN32)
  include(FetchContent)
  FetchContent_Declare(
    SFML
    URL https://www.sfml-dev.org/files/SFML-2.6.1-sources.zip
  )
  FetchContent_MakeAvailable(SFML)
else()
  # Find SFML
  find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
endif()

# Add the executable
add_executable(Sprouthon src/main.cpp src/scoreboard.cpp src/python.cpp src/grid.cpp src/game.cpp src/apple.cpp)

# Link SFML
target_link_libraries(Sprouthon sfml-graphics sfml-window sfml-system)
cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

set(PROJECT_NAME "LestaGames")

project(${PROJECT_NAME})

set(HEADERS
  ${CMAKE_CURRENT_SOURCE_DIR}/headers/task1.hpp
)

add_executable(
  ${PROJECT_NAME}
  ${HEADERS}
  main.cpp
)

set_target_properties(
  ${PROJECT_NAME}
  PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED ON
)

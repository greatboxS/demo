cmake_minimum_required(VERSION 3.10)

project(demo VERSION 0.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set(CMAKE_INSTALL_RPATH "${CMAKE_BINARY_DIR}/build/bin")
set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/release")

# add a definition for USE_LIBRARIES
option(USE_LIBRARIES "Use the externded libraries" True)

# add configuration file
configure_file(configuration.h.in configuration.h)

# add subdirectory to current project
add_subdirectory(libraries)
# add executable file
add_executable(${PROJECT_NAME} demo.cpp)

# add libraries to current project
target_link_libraries(${PROJECT_NAME} mylibraries)

# add include directory to current project
target_include_directories(${PROJECT_NAME}  PUBLIC "${CMAKE_BINARY_DIR}"
                                            PUBLIC "${CMAKE_SOURCE_DIR}")

# add the install targets
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/configuration.h" DESTINATION include)
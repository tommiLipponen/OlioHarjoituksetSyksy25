cmake_minimum_required(VERSION 3.16)

project(H6a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable Qt's MOC (Meta-Object Compiler)
set(CMAKE_AUTOMOC ON)

# Find Qt6
find_package(Qt6 COMPONENTS Core REQUIRED)

add_executable(H6a 
    main.cpp
    myclass.h
    myclass.cpp
)

target_link_libraries(H6a Qt6::Core)

include(GNUInstallDirs)
install(TARGETS H6a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

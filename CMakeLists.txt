cmake_minimum_required(VERSION 2.8)

project(vgeometry)
include_directories(./src/VGeometry/)
file(GLOB SOURCES "./src/VGeometry/main.cpp"
                    "src/VGeometry/vgeometry/impl/*.cpp"
)

add_executable( vgeometry ${SOURCES} )
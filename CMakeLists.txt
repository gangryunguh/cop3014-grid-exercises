cmake_minimum_required(VERSION 3.10)
project(grid-exercises)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES app/ex1.cpp app/ex2.cpp app/ex3.cpp)

add_executable(ex1.exe app/ex1.cpp )
add_executable(ex2.exe app/ex2.cpp)
add_executable(ex3.exe app/ex3.cpp)

if (WIN32)
    set(SFML_STATIC_LIBRARIES TRUE)
endif()

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED COMPONENTS audio graphics window system)

#if (SFML_FOUND)
#    include_directories(${SFML_INCLUDE_DIR})
#    if (WIN32)
#        target_link_libraries(draw_sin.exe ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#        target_link_libraries(draw_map.exe ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#    else()
#        target_link_libraries(draw_sin.exe ${SFML_LIBRARIES})
#        target_link_libraries(draw_map.exe ${SFML_LIBRARIES})
#    endif()
#endif()

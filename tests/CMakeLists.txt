# Add directory containing Catch2 header
include_directories(${CMAKE_SOURCE_DIR}/extern/catch2)

# expose project root directory to source code so it can find the files
add_definitions(-DPROJECT_ROOT_DIR="${CMAKE_SOURCE_DIR}")

set(SRC_FILES test_main.cpp compare_files.cpp capture_output.cpp)

add_executable(test_main ${SRC_FILES})
target_link_libraries(test_main)
add_test(NAME test_main COMMAND test_main)
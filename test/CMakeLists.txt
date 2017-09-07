message("=====================================================")
message("===== Start CMakeLists.txt on test/ =================")
message("=====================================================")

find_package(Threads REQUIRED)

enable_testing()

include_directories("${PROJECT_SOURCE_DIR}/test/" "${PROJECT_SOURCE_DIR}/src/")

#### CodeWars ####
set(CODEWARS_TEST "CodeWarsTest")
file(GLOB CODEWARS_SRC_FILES "${PROJECT_SOURCE_DIR}/src/codeWars/kyu8/*.cpp" "${PROJECT_SOURCE_DIR}/src/codeWars/kyu7/*.cpp")
add_executable(${CODEWARS_TEST} main.cpp ${CODEWARS_SRC_FILES})
add_dependencies(${CODEWARS_TEST} gtest gtest_main gmock gmock_main)
target_link_libraries(${CODEWARS_TEST} gtest gtest_main gmock gmock_main ${CMAKE_THREAD_LIBS_INIT})



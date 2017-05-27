message("=====================================================")
message("===== Start CMakeLists.txt on test/ =================")
message("=====================================================")

find_package(Threads REQUIRED)

enable_testing()

#main.cpp test file
file(GLOB TEST_SRC_MAIN_FILES main.cpp)
set(PROJECT_TEST_NAME "${PROJECT_NAME}_test")
add_executable(${PROJECT_TEST_NAME} ${TEST_SRC_MAIN_FILES})
add_dependencies(${PROJECT_TEST_NAME} gtest gtest_main gmock gmock_main)
target_link_libraries(${PROJECT_TEST_NAME} gtest gtest_main gmock gmock_main ${CMAKE_THREAD_LIBS_INIT})

file(GLOB_RECURSE SRC_FILES "${PROJECT_SOURCE_DIR}/src/" "*.cpp")
include_directories(${PROJECT_SOURCE_DIR}/src)
add_executable("${PROJECT_NAME}_main" main.cpp ${SRC_FILES})

cmake_minimum_required(VERSION 3.16)

project(uibasetests)
set(project_type tests)

if(DEFINED DEPENDENCIES_DIR)
    include(${DEPENDENCIES_DIR}/modorganizer_super/cmake_common/project.cmake)
	include(${DEPENDENCIES_DIR}/modorganizer_super/cmake_common/src.cmake)
else()
    include(${CMAKE_SOURCE_DIR}/../cmake_common/project.cmake)
	include(${CMAKE_SOURCE_DIR}/../cmake_common/src.cmake)
endif()

if(NOT WIN32)
    find_package(GTest REQUIRED)
    target_link_libraries(${PROJECT_NAME} GTest::gtest GTest::gtest_main)
endif()

requires_project(uibase)

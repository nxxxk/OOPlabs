cmake_minimum_required(VERSION 3.14)
project(PlantGrowth LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_executable(plant_growth_app src/main.cpp src/plant_growth.cpp)

target_include_directories(plant_growth_app PRIVATE ${CMAKE_SOURCE_DIR}/include)

include(FetchContent)
FetchContent_Declare( googletest URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip DOWNLOAD_EXTRACT_TIMESTAMP TRUE)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(test_plant_growth tests/test_plant_growth.cpp src/plant_growth.cpp)

target_include_directories(test_plant_growth PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(test_plant_growth gtest_main)

add_test(NAME RunPlantGrowthTests COMMAND test_plant_growth)

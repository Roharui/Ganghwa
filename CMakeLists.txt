cmake_minimum_required(VERSION 3.14)
project(rui-coin VERSION 0.1.0)

# C++ settings
SET(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB MY_SRCS ${PROJECT_SOURCE_DIR}/src/**/*.cpp)
set(MY_SRCS ${MY_SRCS} ${PROJECT_SOURCE_DIR}/src/main.cpp)
set(MY_INCLUDES ${PROJECT_SOURCE_DIR}/include)
set(MY_MSYS2_INCLUDES C:/tools/msys64/mingw64/include)
set(MY_LIBS cryptopp jsoncpp)


add_subdirectory(src)
add_subdirectory(tests)
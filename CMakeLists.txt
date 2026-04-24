cmake_minimum_required(VERSION 3.31)
project(proyecto-2026)

set(CMAKE_CXX_STANDARD 20)


include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(proyecto-2026 main.cpp
        Coche.h
        Coche.cpp
        Moto.h
        Moto.cpp
        Cliente.cpp
        Cliente.h)

target_link_libraries(proyecto-2026 gtest_main)

add_test(NAME proyecto-2026 COMMAND proyecto-2026)
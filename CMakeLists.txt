
cmake_minimum_required(VERSION 3.18)

project(MathLibrary)

include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Build the Basics library
add_library(Basics Source/Arithmetic.cpp)

# Build the Polynomial object
add_library(Polynomial OBJECT Source/Polynomial.cpp)
target_link_libraries(Polynomial Basics)

# Build the Arithmetic tests
add_executable(Arithmetic_Tests Tests/Arithmetic_Tests.cpp)
target_link_libraries(Arithmetic_Tests Basics gtest_main)

# Build the Polynomial tests
add_executable(Polynomial_Tests Tests/Polynomial_Tests.cpp)
target_link_libraries(Polynomial_Tests Polynomial gtest_main)

# Build all tests into one large test
add_executable(All_Tests Tests/All_Tests.cpp)
target_link_libraries(All_Tests Polynomial gtest_main)
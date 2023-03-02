
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

# Build the Polynomial object
add_library(Polynomial OBJECT Polynomials/Polynomial.cpp)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(Polynomial_Tests Polynomials/Polynomial_Tests.cpp)
target_link_libraries(Polynomial_Tests gtest_main Polynomial)
# add_test(NAME example_test COMMAND example)

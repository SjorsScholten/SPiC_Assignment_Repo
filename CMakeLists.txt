cmake_minimum_required(VERSION 3.17)
project(SPiC_Assignment_Repo)

set(CMAKE_CXX_STANDARD 20)

add_executable(SPiC_Assignment_Repo main.cpp serialization/include/LocalFileReader.hpp serialization/include/FileReader.hpp serialization/include/FileParser.hpp serialization/include/CSVFileParser.hpp serialization/src/CSVFileParser.cpp serialization/src/LocalFileReader.cpp domain/src/SpaceBody.cpp domain/include/SpaceBody.hpp domain/src/Vector2.cpp domain/include/Vector2.hpp domain/include/Factory/SpaceBodyFactory.hpp domain/src/Factory/PlanetFactory.cpp domain/src/Planet.cpp domain/include/Planet.hpp domain/include/Factory/PlanetFactory.hpp domain/include/Factory/AsteroidFactory.hpp domain/include/Asteroid.hpp domain/src/Asteroid.cpp domain/src/Factory/AsteroidFactory.cpp)

include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(SPiC_Assignment_Repo_Test test/exampleTest.cpp)
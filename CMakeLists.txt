cmake_minimum_required(VERSION 3.17)
project(SPiC_Assignment_Repo)

set(CMAKE_CXX_STANDARD 20)

add_executable(SPiC_Assignment_Repo main.cpp serialization/include/LocalFileReader.hpp serialization/include/FileReader.hpp serialization/include/FileParser.hpp serialization/include/CSVFileParser.hpp serialization/src/CSVFileParser.cpp serialization/src/LocalFileReader.cpp domain/src/SpaceBody.cpp domain/include/SpaceBody.hpp domain/include/Vector2.hpp domain/include/Factory/SpaceBodyFactory.hpp domain/src/Factory/PlanetFactory.cpp domain/src/Planet.cpp domain/include/Planet.hpp domain/include/Factory/PlanetFactory.hpp domain/include/Factory/AsteroidFactory.hpp domain/include/Asteroid.hpp domain/src/Asteroid.cpp domain/src/Factory/AsteroidFactory.cpp domain/include/Builder/SpaceBodyBuilder.h domain/src/Builder/PlanetBuilder.cpp domain/include/Builder/PlanetBuilder.h domain/src/Builder/AsteroidBuilder.cpp domain/include/Builder/AsteroidBuilder.h)

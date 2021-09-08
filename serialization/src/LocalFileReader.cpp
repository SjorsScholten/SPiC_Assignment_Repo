#include <iostream>
#include <fstream>
#include <sstream>

#include "../include/LocalFileReader.hpp"

namespace serialization {
    LocalFileReader::LocalFileReader() {}

    std::string LocalFileReader::read(const std::string &path) {
        std::ifstream readFile;
        readFile.open(path);

        if(!readFile.is_open()){
            std::cerr << "Could not open file on path: '" << path << "'\n";
            return nullptr;
        }

        std::ostringstream fileDataStream;
        fileDataStream << readFile.rdbuf();

        readFile.close();
        return fileDataStream.str();
    }
}
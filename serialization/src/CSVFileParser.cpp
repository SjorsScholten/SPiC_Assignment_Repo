#include <iostream>
#include <sstream>
#include <string>

#include "../include/CSVFileParser.hpp"

namespace serialization{
    CSVFileParser::CSVFileParser(const std::shared_ptr<FileReader> &fr) : FileParser(fr) { }

    void CSVFileParser::parse(const std::string &path) {
        auto content = fileReader->read(path);

        std::stringstream fileStringStream(content);
        std::string headerLine, columnTitle;

        if(fileStringStream.good()){

            //Extract first line as header line
            std::getline(fileStringStream, headerLine);
            std::stringstream headerStream(headerLine);

            while(std::getline(headerStream, columnTitle, ';')){

            }
        }

        while (fileStringStream.good()){
            std::string substr;
            std::getline(fileStringStream, substr);
            std::cout << substr << std::endl;
        }
    }
}

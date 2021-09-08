#include <iostream>
#include <string>

#include "serialization/include/LocalFileReader.hpp"
#include "serialization/include/CSVFileParser.hpp"

int main() {
    std::shared_ptr<serialization::FileReader> localFileReader = std::make_shared<serialization::LocalFileReader>();
    std::shared_ptr<serialization::FileParser> csvFileParser = std::make_shared<serialization::CSVFileParser>(localFileReader);

    //read local file debug test
    std::string fileDataString = localFileReader->read(R"(D:\GitLab\SPiC\SPiC_Assignment_Repo\resources\test.txt)");
    std::cout << fileDataString << std::endl;

    csvFileParser->parse(R"(D:\GitLab\SPiC\SPiC_Assignment_Repo\resources\testdata.csv)");



    return 0;
}

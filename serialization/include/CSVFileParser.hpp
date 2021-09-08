//
// Created by sjors on 9/8/2021.
//

#ifndef SPIC_ASSIGNMENT_REPO_CSVFILEPARSER_HPP
#define SPIC_ASSIGNMENT_REPO_CSVFILEPARSER_HPP

#include "FileParser.hpp"

namespace serialization{
    class CSVFileParser : public FileParser {
    public:
        explicit CSVFileParser(const std::shared_ptr<FileReader> &fr);

        void parse(const std::string &path) override;
    };
}

#endif //SPIC_ASSIGNMENT_REPO_CSVFILEPARSER_HPP

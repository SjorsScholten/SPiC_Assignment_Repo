#ifndef SPIC_ASSIGNMENT_REPO_FILEPARSER_HPP
#define SPIC_ASSIGNMENT_REPO_FILEPARSER_HPP

#include <memory>

#include "FileReader.hpp"

namespace serialization {
    class FileParser{
    public:
        FileParser() = delete;

        explicit FileParser(std::shared_ptr<FileReader> fr) : fileReader(std::move(fr)) {}

        virtual void parse(const std::string &path) = 0;

    protected:
        std::shared_ptr<FileReader> fileReader;
    };
}

#endif

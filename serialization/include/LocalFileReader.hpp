//
// Created by sjors on 9/8/2021.
//

#ifndef SPIC_ASSIGNMENT_REPO_LOCALFILEREADER_HPP
#define SPIC_ASSIGNMENT_REPO_LOCALFILEREADER_HPP

#include "FileReader.hpp"

namespace serialization{
    class LocalFileReader : public FileReader {
    public:
        LocalFileReader();

        std::string read(const std::string &path) override;
    };
}

#endif //SPIC_ASSIGNMENT_REPO_LOCALFILEREADER_HPP

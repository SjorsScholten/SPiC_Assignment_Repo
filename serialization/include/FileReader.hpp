#ifndef SPIC_ASSIGNMENT_REPO_FILEREADER_HPP
#define SPIC_ASSIGNMENT_REPO_FILEREADER_HPP

#include <string>

namespace serialization {
    class FileReader {
    public:
        virtual std::string read(const std::string &path) = 0;
    };
}

#endif

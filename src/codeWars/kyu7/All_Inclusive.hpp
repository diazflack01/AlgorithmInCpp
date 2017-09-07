#pragma once

#include <string>
#include <vector>

namespace codeWars {
namespace kyu7 {

class Rotations
{
public:
    bool containAllRots(const std::string& strng, std::vector<std::string>& arr);
    std::string getRotatedString(const std::string& str, unsigned posToPutfirst);

private:

};

}
}

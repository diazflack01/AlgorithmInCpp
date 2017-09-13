#pragma once

#include <vector>
#include <string>

/*
 * @startuml
 *
 * class MaxDiffLength{
 * +mxdiflg (a1: std::vector<std::string>&, a2: std::vector<std::string>&): int
 * -getLengthOfSmallestStringInVector(vectOfStr: const std::vector<std::string>&): unsigned
 * -getLengthOfLargestStringInVector(vectOfStr: const std::vector<std::string>&): unsigned
 * }
 * @enduml
 *
 * */

//Find max(abs(length(x) − length(y)))

namespace codeWars {
namespace kyu7 {

class MaxDiffLength
{
public:
    static int mxdiflg(std::vector<std::string>& a1, std::vector<std::string>& a2);
//private:
//    unsigned getLengthOfSmallestStringInVector(const std::vector<std::string>& vectOfStr);
//    unsigned getLengthOfLargestStringInVector(const std::vector<std::string>& vectOfStr);
};

}
}

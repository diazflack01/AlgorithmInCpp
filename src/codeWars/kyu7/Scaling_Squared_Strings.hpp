#pragma once

#include <string>

/*
 * https://www.codewars.com/kata/scaling-squared-strings
 *
 * @startuml
 * class ScalingSqStrings{
 * 	+scale(strng: const std::string&, k: int, n: int): std::string
 * 	+horizontalScaleStr(strng: const std::string&, k: int): std::string
 * 	+verticalScaleStr(strng: const std::string&, n: int): std::string
 * 	-getN(strng: const std::string&): unsigned
 * }
 * @enduml
 * */

namespace codeWars {
namespace kyu7 {

class ScalingSqStrings
{
public:
    static std::string scale(const std::string& strng, int k, int n);
    static std::string horozontalScaleStr(const std::string& strng, int k);
	static std::string verticalScaleStr(const std::string& strng, int n);
private:
	static unsigned getN(const std::string& strng);
};

}
}

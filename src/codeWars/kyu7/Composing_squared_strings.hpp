#pragma once

#include <string>

/*
 * https://www.codewars.com/kata/composing-squared-strings/train/cpp
 *
 * @startuml
 * class ComposeSqStrings {
 * +compose(s1: const std::string&, s2: const std::string&): static std::string
 * }
 * @enduml
 *
 * */

namespace codeWars {
namespace kyu7 {

class ComposeSqStrings
{
public:
    static std::string compose(const std::string &s1, const std::string &s2);
};

}
}

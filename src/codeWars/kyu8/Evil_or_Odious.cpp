#include "Evil_or_Odious.hpp"

#include <algorithm>
#include <bitset>

namespace codeWars {
namespace kyu8 {

std::string evil(int n)
{
  auto strForm = std::bitset<(sizeof(int) * 8)>(n).to_string();
  auto totalOnes = std::count_if(strForm.begin(), strForm.end(),
    [](const char c){ return (c == '1') ? true : false; });
  return (totalOnes % 2) ? "It's Odious!" : "It's Evil!";
}

}
}

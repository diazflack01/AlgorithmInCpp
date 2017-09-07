#include "All_Inclusive.hpp"

#include <algorithm>
#include <cstring>
#include <iostream>

namespace codeWars {
namespace kyu7 {

bool Rotations::containAllRots(const std::string& strng, std::vector<std::string>& arr)
{
	if("" == strng) return true;
	std::vector<std::string> vectorOfRotatedStr;
	for(auto i = 0u; i < strng.length(); ++i)
	{
		vectorOfRotatedStr.push_back(getRotatedString(strng, i));
	}
	for(auto it = vectorOfRotatedStr.begin(); it != vectorOfRotatedStr.end(); ++it)
	{
		if(arr.end() == std::find(arr.begin(), arr.end(), *it)) return false;
	}
	return true;
}

std::string Rotations::getRotatedString(const std::string& str, unsigned posToPutfirst)
{
  if(str.empty()) return "";
  std::string ret((str.begin()+posToPutfirst), str.end());
  if(0 ==posToPutfirst) return ret;
  ret += std::string(str.begin(), (str.begin()+posToPutfirst));
  return ret;
}

}
}

#include "Maximum_Length_Difference.hpp"

#include <algorithm>
#include <cmath>
#include <numeric>

namespace codeWars {
namespace kyu7 {

namespace {

struct StlMinElemComparatorClass
{
	bool operator()(const std::string& s1, const std::string& s2)
	{
		return (s1.length() < s2.length()) ? true : false;
	}
};

struct StlMaxElemComparatorClass
{
	bool operator()(const std::string& s1, const std::string& s2)
	{
		return (s1.length() < s2.length()) ? true : false;
	}
};

}

int MaxDiffLength::mxdiflg(std::vector<std::string>& a1, std::vector<std::string>& a2)
{
	if(a1.empty() || a2.empty()) return -1;
	const auto a1MinIt = std::min_element(a1.begin(), a1.end(), StlMinElemComparatorClass());
	const auto a2MinIt = std::min_element(a2.begin(), a2.end(), StlMinElemComparatorClass());
	const auto a1MaxIt = std::max_element(a1.begin(), a1.end(), StlMaxElemComparatorClass());
	const auto a2MaxIt = std::max_element(a2.begin(), a2.end(), StlMaxElemComparatorClass());
	const int a1MinLength = a1MinIt->length();
	const int a2MinLength = a2MinIt->length();
	const int a1MaxLength = a1MaxIt->length();
	const int a2MaxLength = a2MaxIt->length();
	const auto minMaxDiff1 = std::abs(a1MinLength - a2MaxLength);
	const auto minMaxDiff2 = std::abs(a2MinLength - a1MaxLength);
	return (minMaxDiff1 < minMaxDiff2) ? minMaxDiff2 : minMaxDiff1;
}

//int MaxDiffLength::mxdiflg(std::vector<std::string>& a1, std::vector<std::string>& a2)
//{
//	const std::string a1TotalLen = std::accumulate(a1.begin(), a1.end(), std::string(""));
//	const std::string a2TotalLen = std::accumulate(a2.begin(), a2.end(), std::string(""));
//	return (std::abs(a1TotalLen.length() - a2TotalLen.length()));
////	return a1TotalLen.length();
//}

}
}

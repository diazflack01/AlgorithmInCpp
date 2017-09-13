#include "Composing_squared_strings.hpp"

#include <algorithm>

namespace codeWars {
namespace kyu7 {

std::string ComposeSqStrings::compose(const std::string& s1, const std::string& s2)
{
	std::string ret;
	const auto n = (std::count_if(s1.begin(), s1.end(), [](const char c){ return ('\n' == c) ? true : false; }) + 1);

	for(int i = 0, ii = 1, j = (n-1)-i, jj = n; i < n; ++i, ++ii, --j, --jj)
	{
		const auto s1PosToStartCopy = i * (n+1);
		const auto s2PosToStartCopy = j * (n+1);
		ret += s1.substr(s1PosToStartCopy, ii);
		ret += s2.substr(s2PosToStartCopy, jj);
		if(i+1 != n) ret.push_back('\n');
	}
	return ret;
}

}
}

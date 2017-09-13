#include "Complete_The_Pattern_1.hpp"

namespace codeWars {
namespace kyu7 {

std::string pattern(int n)
{
	std::string ret("");

	if(0 >= n) return ret;

	ret += std::to_string(1);

	for(auto i = 2; i <= n; ++i)
	{
		ret.push_back('\n');
		for(auto k = 1; k <= i; ++k)
		{
			ret += std::to_string(i);
		}
	}
	return ret;
}

}
}

#include "Scaling_Squared_Strings.hpp"

#include <algorithm>
#include <iostream>

namespace codeWars {
namespace kyu7 {

std::string ScalingSqStrings::scale(const std::string& strng, int k, int n)
{
	std::string ret("");
	if(ret == strng) return ret;

	if(1 <= k && 1 <= n)
	{
		return verticalScaleStr(horozontalScaleStr(strng, k), n);
	}
	return ret;
}

std::string ScalingSqStrings::horozontalScaleStr(const std::string& strng, int k)
{
	std::string ret("");

	if(0 >= k || ret == strng)
	{
		return ret;
	}
	else if(1 == k)
	{
		return strng;
	}
	else
	{
		const auto n = getN(strng);
		for(auto i = 0u; i < n; ++i)
		{
			const auto posToStartCopy = i * (n + 1);
			for(auto j = 0u; j < n; ++j)
			{
				ret += std::string(k, strng.at(posToStartCopy + j));
			}
			if(i+1 != n) ret.push_back('\n');
		}
	}

	return ret;
}

std::string ScalingSqStrings::verticalScaleStr(const std::string& strng, int n)
{
	std::string ret("");
	if(0 >= n || ret == strng)
	{
		return ret;
	}
	else if(1 == n)
	{
		return strng;
	}
	else
	{
		const auto nn = getN(strng);
		const auto len = (std::find(strng.begin(), strng.end(), '\n') - strng.begin());
		for(auto i = 0u; i < nn; ++i)
		{
			const auto posToStartCopy = i * (len+1);
			auto substr = strng.substr(posToStartCopy, len);
			substr.push_back('\n');
			for(int j = 0u; j < n; ++j)
			{
				ret += std::string(substr);
			}
		}
		ret.pop_back();
	}

	return ret;
}

unsigned ScalingSqStrings::getN(const std::string& strng)
{
	return (std::count_if(strng.begin(), strng.end(), [](const char c){ return ('\n' == c) ? true : false; }) + 1);
}

}
}

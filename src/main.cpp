#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int main()
{
	std::vector<unsigned> v{1,2,3,4,5};
	std::transform(v.rbegin(), v.rend(), v.begin(), [](auto i){ return i; });
	for(auto&& c : v)
	{
		std::cout << c << " "	;
	}
	std::cout << std::endl;
	return 0;
}
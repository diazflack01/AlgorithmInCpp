#include "Sum_of_a_sequence.hpp"


namespace codeWars {
namespace kyu7 {

int sequenceSum(int start, int end, int step)
{
	if(start > end)
		return 0;

	int sumOfSequence = 0;
	int lastNumOfWithStepAdded = start;
	do
	{
		sumOfSequence += lastNumOfWithStepAdded;
		lastNumOfWithStepAdded += step;
	}while(lastNumOfWithStepAdded <= end);
	return sumOfSequence;

}

}
}

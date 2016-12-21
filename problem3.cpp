#include <iostream>
#include <math.h>

int main(void)
{
	unsigned long long factoredNumber = 600851475143;
	unsigned long long seed = 2;
	// Could limit the search the search to less than square root of factoredNumber, due to it being composite
	while(pow(seed, 2) <= factoredNumber)
	{
		// While the "seed" is now a factor of factoredNumber
		while(factoredNumber%seed == 0)
		{
			// Divide and replace
			factoredNumber = factoredNumber / seed;
		}
		// Iterate
		seed += 1;
	}
	std::cout << factoredNumber;
        return 0;
}

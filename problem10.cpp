#include <iostream>
#include <vector>
#include <fstream>

#define SIEVEMAX 2000000

int main(void)
{
	// Fill bit vector with 1's, indicating a prime number
	std::vector numberList(SIEVEMAX, true);
        // Since evens are skipped by checking first bit, set first equal to two
	unsigned long long count = 2;
	for(int i = 3; i < SIEVEMAX; i++)
	{
		// and 0x1, since no even numbers posses the first "odd" bit set
		// And in the sieve of erastothenes, if it has not yet been a factor of a previous number
		// it is prime
		if((i & 0x1) && numberList[i] == true)
		{
			count += i;
			// Iterate through list by multiples of the current sieve seed
			for(int j = i; j < SIEVEMAX; j += i)
			{
				if((i & 0x1) && numberList[j] == true)
				{
					numberList[j] = false;
				}
			}
		}
	}

	std::cout << count;
	return 0;
}

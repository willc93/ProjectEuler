#include <iostream>
#include <vector>

#define SIEVEMAX 2100000000 // Arbitrarily large number, size of bit vector or the max number to check for primality
#define MAXPRIME 10001
int main(void)
{
	// Fill bit vector with 1's, indicating a prime number
	std::vector<bool> numberList(SIEVEMAX, true);
	int count = 1; // Since 2 is bypassed via & 0x1
	for(int i = 3; i < SIEVEMAX; i++)
	{
		// and 0x1, since no even numbers posses the first "odd" bit set
		// And in the sieve of erastothenes, if it has not yet been a factor of a previous number
		// it is prime
		if((i & 0x1) && numberList[i] == true)
		{
			++count;
			if(count == MAXPRIME)
			{
				std::cout << ++count << "th prime is " << i << '\n';
				i = SIEVEMAX;
			}

			else
			{
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
	}

	return 0;
}

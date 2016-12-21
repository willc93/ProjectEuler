#include <iostream>

// Returns calculated collatz chain length
unsigned long long collatzCalc(unsigned long long currentNumber); 

int main(void)
{
	// Create variables to hold compared chain lengths
	unsigned long long chainBuff = 0;
	unsigned long long longestChain = 0;
	int longestSeed;
	// Iterate through all numbers under one million
	for(unsigned long long currentNumber = 1; currentNumber < 1000000; currentNumber++) { // Pass the calculated chain length to the buffer variable chainBuff = collatzCalc(currentNumber); // Compares the buffered chain length against the current longest chain if(chainBuff > longestChain)
		{
			// Replaces if greater
			longestChain = chainBuff;
			longestSeed = currentNumber;
		}
	}

	std::cout << longestSeed << " is the seed of the longest chain, " << longestChain << ", under one million";
}


unsigned long long collatzCalc(unsigned long long currentNumber)
{
	unsigned long long collatzLength = 1;

	while(currentNumber != 1)
	{
		if(currentNumber & 0x1) // if it is odd
		{
			currentNumber += (2*currentNumber) + 1; // Set it equal to 3n + 1 
		}
		else // it is even
		{
			currentNumber /= 2; // Set it equal to n/2
		}
		collatzLength++;
	}
	return ++collatzLength; 
}

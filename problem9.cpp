#include <iostream>
#include <math.h>
bool createTriple(int a, int b);

int main(void)
{
	// Iterate up to 1000, arbitrary number
	for(int i = 0; i < 1000; i++)
	{	
		// Start at i to eliminate redunancies
		for(int j = i; j < 1000; j++)
		{
			// If the function returns true, triplet meeting criterion has been found
			if(createTriple(i, j))
			{
				// Output the found triplet
				std::cout << i << " " << j << " " << sqrt(pow(i, 2) + pow(j, 2)) << std::endl;
			}
		}
	}
	return 1;
}


bool createTriple(int a, int b)
{
	// Set c equal to a^2 + b^2
	int c = pow(a, 2) + pow(b, 2);
	// If the square has no fractional component and a + b + c = 1000, the triplet has been found
	if((sqrt(c) - int(sqrt(c)) == 0.0) && (a + b + sqrt(c)) == 1000)
	{
		return true;
	}
	return false;
}

#include <iostream>
#include <vector> 
#include <fstream>

int main(void)
{
	std::string filePath = "./numbers.txt";
	std::ifstream inFile;
	unsigned long long largestProd = 0;
	unsigned long long prodBuff;
	std::vector<int> intVect;
	char szBuff;

	inFile.open(filePath.c_str());
	
	// Load numbers into program
	while(inFile.get(szBuff))
	{
		// Convert from ASCII value to integer literal
		intVect.push_back(szBuff-48);
	}
	
	// Iterate through the vector, stopping 13 before intVect.end()
	for(int i = 0; i < (intVect.size()-13); i++)
	{
		// Set prodBuff to the first of the 13 digits
		prodBuff = intVect[i];
	
		// Iterate through the list, multiplying against itself
		for(int j = 1; j < 13; j++) { prodBuff *= intVect[i+j]; } // If is larger than current largest, replace if(prodBuff > largestProd)
		{
			largestProd = prodBuff;
		}
	}
	// Output the answer
	std::cout << largestProd;
}

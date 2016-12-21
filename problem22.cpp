#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

int main(void)
{	
	std::string filePath = "./p022_names.txt";
	// For stripping quotations and reading from inFile
	std::string stringBuff;
	// For holding first names; vector for sort algorithm
	std::vector<string> firstNames;
	// Holds the total names
	unsigned long nameScore = 0;
	int scoreBuff;

	std::ifstream inFile;
	inFile.open(filePath.c_str());
	
	while(!inFile.eof())
	{
		// Read from infile delimited by commas
		std::getline(inFile, stringBuff, ',');
		// Erase leading quotation
		stringBuff.erase(0, 1);
		// Erase trailing quotation
		stringBuff.erase(stringBuff.size() - 1);
		// Push onto the string vector
		firstNames.push_back(stringBuff);
	}
	// Sort the names
	std::sort (firstNames.begin(), firstNames.end());

	// Increment through the vector of sorted strings
	for(auto vectorIt = firstNames.begin(); vectorIt != firstNames.end(); vectorIt++)
	{
		// Clean up
		scoreBuff = 0;
		// Increment through each character of the string
		for(auto stringIt = (*(vectorIt)).begin(); stringIt != (*(vectorIt)).end(); stringIt++)
		{
			// static_cast to ascii value, subtract 64 to reduce to alphabetical indexing
			scoreBuff += ((static_cast<int>(*(stringIt)))-64);
		}
		// Multiply by distance from current iterator position to beginning element
		scoreBuff *= (std::distance(firstNames.begin(), vectorIt) + 1);
		nameScore += scoreBuff;
 	}

 	std::cout << std::endl << nameScore << " is the final namescore";
 	return 0;
}

#include <iostream>

int main(void)
{
	double sumOfSquare = 0;
	double squareOfSum = 0;
	for(int i = 0; i <= 100; i++)
	{
		squareOfSum += i;
		sumOfSquare += (i*i);
	}
	squareOfSum *= squareOfSum;
	std::cout << std::endl << std::fixed << "Square of the sum: " << squareOfSum;
	std::cout << std::endl << std::fixed << "Sum of the squares: " << sumOfSquare;
	std::cout << std::endl << std::fixed << "Their difference is: " << squareOfSum - sumOfSquare;
	return 0;
}

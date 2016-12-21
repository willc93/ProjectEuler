#include <iostream>

int main(void)
{
	int numBuff;
	int reverseBuff;
	int reversedNum;
	int largest = 0;
	for(int i = 100; i < 999; i++) // Start at first 3 digit number
	{
		for(int j = 100; j < 999; j++) { 
                        // Multiply the two digits to get a number to test 
                        numBuff = (i * j); 
                        // Reset 
                        reversedNum = 0; 
                        // Set the product to a buffer variable for reversing  
                        reverseBuff = numBuff; 
                        // While reverseBuff is non zero 
                        while(reverseBuff) { 
                                // Move to the left one position, use modulus 10 to get first digit and push it to back 
                                reversedNum = (reversedNum*10) + (reverseBuff%10); reverseBuff /= 10; 
                        }
                        // If they are the same after reversing, palindrome 
                        if(reversedNum == numBuff && reversedNum > largest)
			{
				largest = reversedNum;
			}
		}
	}	
	std::cout << largest;
} 

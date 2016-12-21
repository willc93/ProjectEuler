#include <iostream>

int main(void)
{
	unsigned long long int total;

	for (int i = 999; i > 0; i--){
		if(i%5 == 0 || i%3 == 0)
		{
			total+=i;
		}
	}
	std::cout << "Total: " << total;
	return 0;
}

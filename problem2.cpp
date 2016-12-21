#include <iostream>

int main()
{
	int i, y, z, x = 1;
	unsigned long long total;
	std::cout << "Enter fibbonacci seed number: "; std::cin >> i;
	std::cout << std::endl << "Enter the maximum number: "; std::cin >> z;

	while(i <= z){
		y = i;
		i += x;
		if(i & 0x1){
			total += i;
		}
		x = y;
	}
	std::cout << total;
}

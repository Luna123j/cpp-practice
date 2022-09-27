#include <iostream>

int main ()
{
	int v1=0;
	int sum=0;
	std::cout << "Enter numbers: "<< std::endl;
	while (std::cin >> v1)
	{
		sum += v1;
	}
	std::cout << "the sum is : " << sum << std::endl;
	return 0;
}

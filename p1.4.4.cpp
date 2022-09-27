#include <iostream>
int main ()
{
	std::cout << "Enter two numbers: "<< std::endl;
	int v1=0; int v2=0;
	std::cin >> v1 >> v2;
	int x=0;
	if (v1<v2)
	{
		std::cout << "all integer between " <<v1<< " and "<<v2 << "is: "<< std::endl;
		x=v1;
		while (x>=v1 && x<=v2)
		{
			std::cout << x << std::endl;
			x++;
		}
		
	}
		if (v1>v2)
	{
		std::cout << "all integer between " <<v2<< " and "<<v1 << "is: "<< std::endl;
	    x=v2;
		while (x>=v2 && x<=v1)
		{
			std::cout << x << std::endl;
			x++;
		}
		
	}	
	if (v1==v2)
	{
		std::cout << "the two numbers are equal."<< std::endl;
		
	}	
	
     return 0;
}


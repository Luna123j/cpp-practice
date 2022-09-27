#include <iostream>

int main ()
 {
 	int sum=0;
 	int sub=0;
 	
 	//1.9
 	for (int val = 50; val <= 100; val++) 
 	{
 		sum += val;
 		
	 }
	//1.10
	 
	 for (int val2=10; val2 <=10 && val2>=0; --val2)
	 {
	 	sub -= val2;
	 }
	 std::cout << "sum of 50 to 100 is "
	 		   << sum << std::endl;
	 std::cout << "sub of 10 to 0 is "
	 		   << sub << std::endl;
	 		   
	//1.11
	std::cout << "Enter two numbers: "<< std::endl;
	int v1=0; int v2=0;
	std::cin >> v1 >> v2;
	
	std::cout << "all integer between " <<v1<< " and "<<v2 << "is: "<< std::endl;
	for (int x=v1; x>=v1 && x<=v2;++x)
	{
		std::cout << x << std::endl;
	}
     return 0;
 }

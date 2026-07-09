// Print first 5 odd numbers using while, for and do-while loops

#include <iostream>

int main()
{
	std::cout << "==========~~~~~~First five odd num~~~~~==========\n";

	std::cout << "\n~~~WHILE~~~\n";
	int count = 1;
	int k = 1;
	while (count <= 5)
	{
		std::cout << k << " ";
		k += 2;
		count++;
	}

	std::cout << "\n\n~~DO-WHILE~~\n";
	int coun = 1;
	int g = 1;
	do
	{
		std::cout << g << " ";
		g += 2;
		coun++;
	} while (coun <= 5);

	std::cout << "\n\n~~~~FOR~~~~\n";
	for(int i =1 ;i<=10;i+=2)
	{
		std::cout << i << " ";
	}

	return 0;
}




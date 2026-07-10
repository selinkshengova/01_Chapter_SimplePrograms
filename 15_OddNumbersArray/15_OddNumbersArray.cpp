// Exercise 15 - Create an array filled with odd natural numbers

#include <iostream>

int main()
{
	std::cout << "Write the count of the odd numbers: ";
	int oddNumCount;
	std::cin >> oddNumCount;

	if (oddNumCount <= 0)
	{
		std::cout << "Please enter a positive number.";
		return 0;
	}

	const int MAX_SIZE = 100;
	int oddNumbers[MAX_SIZE];

	if (oddNumCount > MAX_SIZE)
	{
		std::cout << "Maximum allowed is " << MAX_SIZE << ".";
		return 0;
	}
	int currentOddNumber = 1;
	for (int i = 0; i < oddNumCount; i++)
	{
		oddNumbers[i] = currentOddNumber;
		currentOddNumber += 2;
	}
	std::cout << "The first " << oddNumCount
		<< " odd natural numbers are: ";
	for (int j = 0; j < oddNumCount; j++)
	{
		std::cout << oddNumbers[j] << ' ';
	}
}



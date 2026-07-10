// Exercise 14 - Create an array filled with even natural numbers
#include <iostream>

int main()
{
	std::cout << "Write the count of the even numbers: ";
	int evenNumCount;
	std::cin >> evenNumCount;

	if (evenNumCount <= 0) 
	{
		std::cout << "Please enter a positive number.";
		return 0;
	}
	
	const int MAX_SIZE = 100;
	int evenNumbers[MAX_SIZE];
	
	if (evenNumCount > MAX_SIZE)
	{
		std::cout << "Maximum allowed is " << MAX_SIZE << ".";
		return 0;
	}
	

	int currentEvenNumber = 2;
	for (int i=0 ;i< evenNumCount;i++)
	{
		evenNumbers[i] = currentEvenNumber;
		currentEvenNumber += 2;
	}
	std::cout<< "The first " << evenNumCount
		<< " even natural numbers are: ";
	for (int j = 0; j < evenNumCount; j++)
	{
		std::cout << evenNumbers[j] << ' ';
	}
	return 0;
}



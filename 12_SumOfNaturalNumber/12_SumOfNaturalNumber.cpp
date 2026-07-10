// Exercise 12 - Calculate the sum of the first N natural numbers using a function
#include <iostream>

int sumOfNaturalNumbers(int count)
{
    int sum = 0;
    for (int i = 1; i <= count; i++) 
    {
        sum += i;
    }
	return sum;
}

int main()
{
    std::cout << "Write the count of the numbers: ";
    int count;
    std::cin >> count;

    if(count <= 0)
    {
        std::cout << "Please enter a positive number.";
		return 0;
    }

    std::cout << "The sum of the first " << count
        << " natural numbers is "
        << sumOfNaturalNumbers(count);
    return 0;
}



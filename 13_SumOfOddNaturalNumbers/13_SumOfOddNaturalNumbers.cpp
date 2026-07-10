// Exercise 13 - Calculate the sum of the first N odd natural numbers using a function


#include <iostream>
int sumOfOddNaturalNumbers(int oddNumCount) 
{
    int sum = 0;
    for (int i = 1; i <= oddNumCount * 2; i += 2)
    {
        sum += i;
    }
    return sum;
}

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
    std::cout <<"The sum of the first " << oddNumCount
        <<" odd natural numbers is "
        << sumOfOddNaturalNumbers(oddNumCount);

    return 0;
}


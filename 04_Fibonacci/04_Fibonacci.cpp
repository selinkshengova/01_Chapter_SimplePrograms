// Exercise 4 - Print the first N Fibonacci numbers

#include <iostream>

int main()
{
    std::cout << "Write the numbers' count: ";

    int numberCount;
    std::cin >> numberCount;

    if (numberCount <= 0)
    {
        std::cout << "Please enter a positive number.";
        return 0;
    }

    int previous = 1;
    int current = 1;

    for (int i = 0; i < numberCount; i++)
    {
        std::cout << previous << " ";

        int next = previous + current;
        previous = current;
        current = next;
    }

    return 0;
}

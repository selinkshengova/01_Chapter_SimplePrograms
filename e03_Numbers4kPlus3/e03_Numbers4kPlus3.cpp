// Exercise 3 - Print numbers of the form 4k + 3

#include <iostream>

int main()
{
    std::cout << "Write the numbers' count: ";

    int numberCount;
    std::cin >> numberCount;

    std::cout << "\nNumbers: ";

    for (int i = 0; i < numberCount; i++)
    {
        std::cout << 4 * i + 3 << " ";
    }

    return 0;
}


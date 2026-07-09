// Exercise 1 - Print the natural numbers from 1 to 10
#include <iostream>

int main()
{
    std::cout << "WHILE\n";

    int k = 1;
    while (k <= 10)
    {
        std::cout << k << " ";
        k++;
    }

    std::cout << "\n\nFOR\n";

    for (int i = 1; i <= 10; i++)
    {
        std::cout << i << " ";
    }

    std::cout << "\n\nDO-WHILE\n";

    int p = 1;
    do
    {
        std::cout << p << " ";
        p++;
    } while (p <= 10);

    std::cout << std::endl;

    return 0;
}

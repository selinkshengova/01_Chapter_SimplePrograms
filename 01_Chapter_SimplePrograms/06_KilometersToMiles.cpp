// Exercise 6 - Convert kilometers to miles
// 1 mile = 1.60934 kilometers
// 1 kilometer = 0.621371 miles

#include <iostream>

const double KM_TO_MILES = 0.621371;

double convertKilometersToMiles(double kilometers)
{
    return kilometers * KM_TO_MILES;
}

int main()
{
    std::cout << "Write the kilometers: ";

    double kilometers;
    std::cin >> kilometers;

    std::cout << kilometers << " kilometers = "
        << convertKilometersToMiles(kilometers)
        << " miles\n";

    return 0;
}

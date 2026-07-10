// Exercise 7 - Convert kilometers and meters to miles and feet
// 1 kilometer = 0.621371 miles
// 1 meter = 3.28084 feet

#include <iostream> 

const double KM_TO_MILES = 0.621371;
const double METER_TO_FEET = 3.28084;

double convertKilometersToMiles(double kilometers)
{
    return kilometers * KM_TO_MILES;
}

double convertMetersToFeet(double meters)
{
	return meters * METER_TO_FEET;
}

int main()
{
    std::cout << "Write the kilometers: ";

    double kilometers;
    std::cin >> kilometers;

	std::cout << "Write the meters: ";
    double meters;
    std::cin >> meters;

    std::cout << kilometers << " kilometers and "
        << meters << " meters ="
		<< convertKilometersToMiles(kilometers) << " miles and "
        << convertMetersToFeet(meters) << " feet\n";
	return 0;

}



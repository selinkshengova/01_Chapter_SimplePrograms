// Exercise 8 - Convert fathoms (сажени) to meters
// 1 fathom = 2.16 meters 

#include <iostream>
const double FATHOM_TO_METERS = 2.16;

double convertFathomsToMeters(double fathoms) 
{
	return fathoms * FATHOM_TO_METERS;
}

int main()
{
    std::cout << "Write the fathoms: ";
	double fathoms;
	std::cin >> fathoms;

	std::cout << fathoms << " fathoms = "
		<< convertFathomsToMeters(fathoms) << " meters\n";

    return 0;
}



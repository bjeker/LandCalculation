// Ryan Bieker, CS 3060 001, Chapter 2 Programming Challenges, due 2/1/2022, calculates land size from square feet to acres

#include <iostream>

using namespace std;

int main()
{
    
	//acres to 1 square foot
	double acre = 43560;

	//land used
	double land = 389767;

	//acres in land given in square feet
	cout << "389,767 square feet equals " << land / acre << " acres." << endl;

}


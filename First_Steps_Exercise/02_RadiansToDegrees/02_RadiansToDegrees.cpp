#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    double radians;
	cin >> radians;

    const double degrees = (radians * 180) / M_PI;

	cout << round(degrees) << endl;
}


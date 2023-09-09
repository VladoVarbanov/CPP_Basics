#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    const double penPrice = 5.8;
    const double markerPrice = 7.2;
    const double detergentPrice = 1.2;

    int pens, markers, detergentInLiters, discountPercentage;

    cin >> pens >> markers >> detergentInLiters >> discountPercentage;

    double totalCost = pens * penPrice + markers * markerPrice + detergentInLiters * detergentPrice;

    double finalPrice = totalCost - (totalCost * (discountPercentage * 0.01));

    cout << finalPrice << endl;
}


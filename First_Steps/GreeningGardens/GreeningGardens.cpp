// GreeningGardens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::string;

	const double ONE_SQUARE_METER_PRICE = 7.61;
	const double DISCOUNT_PERCENT = 0.18;

	double squareMetersNeeded;
	cin >> squareMetersNeeded;

	double priceBeforeDiscount = squareMetersNeeded * ONE_SQUARE_METER_PRICE;
	double discount = priceBeforeDiscount * DISCOUNT_PERCENT;
	double finalPrice = priceBeforeDiscount - discount;

	cout << "The final price is: " << finalPrice << " lv.";
	cout << "The discount is: " << discount << " lv.";
}


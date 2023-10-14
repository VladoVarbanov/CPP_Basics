#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double budget;
	cin >> budget;
	int nights;
	cin >> nights;

	double priceForNight;
	cin >> priceForNight;

	double percetageExtraExpenses;
	cin >> percetageExtraExpenses;

	if (nights > 7)
	{
		priceForNight *= 0.95;
	}

	double extraExpensesMoney = budget * (percetageExtraExpenses / 100);
	double nightPrice = priceForNight * nights;
	double totoalPrice = extraExpensesMoney + nightPrice;

	if (totoalPrice <= budget)
	{
		cout << fixed << setprecision(2);
		cout << "Ivanovi will be left with " << budget - totoalPrice << " leva after vacation." << endl;
	}
	else
	{
		cout << fixed << setprecision(2);
		cout << totoalPrice - budget << " leva needed." << endl;
	}

	return 0;
}

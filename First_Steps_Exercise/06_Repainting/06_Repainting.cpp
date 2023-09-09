#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    const double nailonForProtection = 1.5;
    const double paint = 14.5;
    const int paintThinner = 5;
    const double bag = 0.40;

    int nailonPerSquareMetr, paintPerLitters, paintThinnerPerLitters, hoursWork;
    cin >> nailonPerSquareMetr >> paintPerLitters >> paintThinnerPerLitters >> hoursWork;

    double paintExpense = (paintPerLitters * 1.1) * paint;
    double nailonExpense = (nailonPerSquareMetr + 2) * nailonForProtection;
    double paintThinnerExpense = paintThinner * paintThinnerPerLitters;

    double workerExpenses = ((paintExpense + nailonExpense + paintThinnerExpense + bag) * 0.3) * hoursWork;

    double allCosts = paintExpense + nailonExpense + paintThinnerExpense + bag + workerExpenses;

    cout << allCosts << endl;
}


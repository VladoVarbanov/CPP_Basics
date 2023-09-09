#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    double depositSum, annualInterestPercentage;
    int depositTermsInMonths;

    cin >> depositSum;
    cin >> depositTermsInMonths;
    cin >> annualInterestPercentage;

    double sum = depositSum + depositTermsInMonths * ((depositSum * annualInterestPercentage * 0.01) / 12);

    cout << sum << endl;
}


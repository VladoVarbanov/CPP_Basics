#include <iostream>

using namespace std;

int main()
{
    // setf -> set flag(s)
    //ios -> input/output stream

    double usd;
    cin >> usd;

    double bgn = 1.79549 * usd;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << bgn << endl;
}
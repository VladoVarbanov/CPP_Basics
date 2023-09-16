#include <iostream>

using namespace std;

int main()
{
    string day;
    cin >> day;

    int price;

    if (day == "Wednesday" || day == "Thursday")
    {
        price = 14;
    } else if (day == "Saturday" || day == "Sunday")
    {
        price = 16;
    }
    else
    {
        price = 12;
    }

    cout << price << endl;

    return 0;
}

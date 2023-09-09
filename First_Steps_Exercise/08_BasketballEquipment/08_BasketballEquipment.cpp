#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    int tax;
    cin >> tax;

    double shoesPrice = tax * 0.6;
    double kitPrice = shoesPrice * 0.8;
    double ballPrice = kitPrice * 0.25;
    double accesoriesPrice = ballPrice * 0.2;

    double totalPrice = tax + shoesPrice + kitPrice + ballPrice + accesoriesPrice;

    cout << totalPrice << endl;
}


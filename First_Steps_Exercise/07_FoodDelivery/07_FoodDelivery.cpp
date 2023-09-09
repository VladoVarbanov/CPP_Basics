#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    const double chickenMenu = 10.35;
    const double fishMenu = 12.40;
    const double vegeterianMenu = 8.15;

    int chickenMenus, fishMenus, vegeterianMenus;
    cin >> chickenMenus >> fishMenus >> vegeterianMenus;

    double menuCost = chickenMenu * chickenMenus + fishMenu * fishMenus + vegeterianMenu * vegeterianMenus;
    double desert = menuCost * 0.2;

    double totalCost = menuCost + desert + 2.5;

    cout << totalCost << endl;
}


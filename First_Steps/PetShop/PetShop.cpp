#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const double DOGS_FOOD_PRICE = 2.50;
    const int CATS_FOOF_PRICE = 4;

    int dogsFoodCount, catsFoodCount;

    cin >> dogsFoodCount;
    cin >> catsFoodCount;

    double finalePrice = dogsFoodCount * DOGS_FOOD_PRICE + catsFoodCount * CATS_FOOF_PRICE;

    cout << finalePrice << " lv." << endl;
}


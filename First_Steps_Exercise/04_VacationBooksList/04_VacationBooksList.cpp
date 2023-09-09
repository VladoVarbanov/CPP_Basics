#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    int pagesCount, pages, daysCount;
    cin >> pagesCount >> pages >> daysCount;

    int allTimeForReading = pagesCount / pages;
    int timeNeededPerDay = allTimeForReading / daysCount;

    cout << timeNeededPerDay << endl;
}


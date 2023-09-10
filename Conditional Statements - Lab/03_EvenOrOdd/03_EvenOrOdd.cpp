#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;


int main()
{
    int number;
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }

    return 0;
}


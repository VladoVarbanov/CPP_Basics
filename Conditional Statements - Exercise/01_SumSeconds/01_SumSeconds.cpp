#include <iostream>

using namespace std;

int main()
{
    int first, second, third;
    cin >> first >> second >> third;

    int sum = first + second + third;

    int minutes = sum / 60;
    int seconds = sum % 60;

    if (seconds < 10)
    {
    cout << minutes << ":" << 0 << seconds << endl;
	    
    }
    else
    {
    cout << minutes << ":" << seconds << endl;
    }

}

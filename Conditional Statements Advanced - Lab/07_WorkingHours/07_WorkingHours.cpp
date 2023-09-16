#include <iostream>

using namespace std;

int main()
{
    int hour;
    string dayInput;
    cin >> hour >> dayInput;

    bool day = dayInput == "Monday" || dayInput == "Tuesday" || dayInput == "Wednesday" || dayInput == "Thursday" || dayInput == "Friday" || dayInput == "Saturday";

    if (day)
    {
	    if (hour >= 10 && hour <= 18)
	    {
            cout << "open" << endl;
        }
        else
        {
            cout << "closed" << endl;
        }
    }else
    {
            cout << "closed" << endl;
	    
    }

    return 0;
}
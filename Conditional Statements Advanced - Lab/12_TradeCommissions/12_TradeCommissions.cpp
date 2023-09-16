#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string city;
    double sales;
    double comission = -1;
    cin >> city >> sales;

    if (sales < 0)
    {
        cout << "error" << endl;
        return 1;
    }

    if (city == "Sofia")
    {
	    if (sales <= 500)
	    {
            comission = sales * 0.05;
	    }
        else if (sales <= 1000)
	    {
            comission = sales * 0.07;
	    }
        else if (sales <= 10000)
        {
            comission = sales * 0.08;
        }
        else if (sales > 10000)
        {
            comission = sales * 0.12;
        }
    }
    else if (city == "Varna")
    {
        if (sales <= 500)
        {
            comission = sales * 0.045;
        }
        else if (sales <= 1000)
        {
            comission = sales * 0.075;
        }
        else if (sales <= 10000)
        {
            comission = sales * 0.10;
        }
        else if (sales > 10000)
        {
            comission = sales * 0.13;
        }
    }
    else if (city == "Plovdiv")
    {
        if (sales <= 500)
        {
            comission = sales * 0.055;
        }
        else if (sales <= 1000)
        {
            comission = sales * 0.08;
        }
        else if (sales <= 10000)
        {
            comission = sales * 0.12;
        }
        else if (sales > 10000)
        {
            comission = sales * 0.145;
        }
    }
    else
    {
        cout << "error" << endl;
        return 1;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

	cout << fixed << setprecision(2) << comission << endl;

    return 0;
}


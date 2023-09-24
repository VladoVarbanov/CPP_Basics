#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int oddSum = 0;
	int evenSum = 0;
	int rows;
	cin >> rows;

	for (int i = 0; i < rows; ++i)
	{
		int num;
		cin >> num;
		if (i % 2 == 0)
		{
			evenSum += num;
		}
		else
		{
			oddSum += num;
		}
	}

	if (oddSum == evenSum)
	{
		cout << "Yes" << endl;
		cout << "Sum = " << evenSum << endl;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << abs(oddSum - evenSum) << endl;
	}

	return 0;
}


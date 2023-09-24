#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int row;
	cin >> row;

	int minNum = INT_MAX;
	int maxNum = INT_MIN;

	for (int i = 0; i < row; ++i)
	{
		int num;
		cin >> num;

		if (num < minNum)
		{
			minNum = num;
		}
		if (num > maxNum)
		{
			maxNum = num;
		}
	}

	cout << "Max number: " << maxNum << endl;
	cout << "Min number: " << minNum << endl;

	return 0;
}

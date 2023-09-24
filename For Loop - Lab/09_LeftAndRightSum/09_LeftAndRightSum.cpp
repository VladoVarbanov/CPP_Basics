#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int leftSum = 0;
	int rightSum = 0;
	int row;
	cin >> row;

	for (int i = 0; i < row; ++i)
	{
		int num;
		cin >> num;
		leftSum += num;
	}

	for (int i = 0; i < row; ++i)
	{
		int num;
		cin >> num;
		rightSum += num;
	}

	if (leftSum == rightSum)
	{
		cout << "Yes, sum = " << leftSum << endl;
	}
	else
	{
		cout << "No, diff = " << abs(leftSum - rightSum) << endl;
	}

	return 0;
}
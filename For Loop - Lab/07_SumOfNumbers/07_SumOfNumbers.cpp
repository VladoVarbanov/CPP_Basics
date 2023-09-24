// 07_SumOfNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int counter;
	cin >> counter;

	int sum = 0;
	int num;

	for (int i = 0; i < counter; ++i)
	{
		cin >> num;
		sum += num;
	}

	cout << sum << endl;

	return 0;
}


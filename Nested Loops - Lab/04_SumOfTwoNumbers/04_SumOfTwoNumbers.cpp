#include <iostream>

using namespace std;

int main()
{
	int combinations = 0;
	int start, end, magicNumber, sum;

	cin >> start >> end >> magicNumber;

	for (int firstNum = start; firstNum <= end; ++firstNum)
	{
		for (int secondNum = start; secondNum <= end; ++secondNum)
		{
			combinations++;
			if (firstNum + secondNum == magicNumber)
			{
				sum = firstNum + secondNum;
				cout << "Combination N:" << combinations << " (" << firstNum << " + " << secondNum << " = " << sum << ")" << endl;

				return 0;
			}
		}
	}
	cout << combinations << " combinations - neither equals " << magicNumber << endl;


}
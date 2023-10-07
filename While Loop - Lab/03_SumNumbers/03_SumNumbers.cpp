#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	int num, inputNum;
	int sum = inputNum;
	cin >> num >> inputNum;

	while (sum < num)
	{
		cin >> inputNum;
		sum += inputNum;
	}

	cout << sum << endl;

	return 0;
}
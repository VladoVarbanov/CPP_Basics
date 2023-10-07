#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int input;
	cin >> input;
	int currNum = 1;

	while (currNum <= input)
	{
		cout << currNum << endl;
		currNum = currNum * 2 + 1;
	}

	return 0;
}


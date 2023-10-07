#include <iostream>

using std::cout;
using std::endl;

int main()
{
	const int MAX_NUMBER = 10;

	for (int i = 1; i <= MAX_NUMBER; ++i)
	{
		for (int j = 1; j <= MAX_NUMBER; ++j)
		{
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}

	return 0;
}


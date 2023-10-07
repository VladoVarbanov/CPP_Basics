#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string username, password, inputPassword;
	cin >> username >> password >> inputPassword;

	while (password != inputPassword)
	{
		cin >> inputPassword;

	}

	cout << "Welcome " << username << "!" << endl;

	return 0;
}
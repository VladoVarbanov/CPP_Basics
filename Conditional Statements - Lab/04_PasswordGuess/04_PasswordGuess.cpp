#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    const string fraze = "s3cr3t!P@ssw0rd";
    string password;
    cin >> password;

    if (password == fraze)
    {
        cout << "Welcome" << endl;
    }
    else
    {
        cout << "Wrong password!" << endl;
    }

    return 0;
}


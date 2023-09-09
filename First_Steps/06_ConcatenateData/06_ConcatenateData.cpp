#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string firstName, lastName, age, town;

    cin >> firstName;
    cin >> lastName;
    cin >> age;
    cin >> town;

    cout << "You are " << firstName << " " << lastName << ", a " << age << "-years old person from " << town << "." << endl;
}


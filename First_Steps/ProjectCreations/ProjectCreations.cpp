#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const int HOURSE_NEEDED_FOR_ONE_PROJECT = 3;

    string arcitectName;
    cin >> arcitectName;

    int projectsCount;
    cin >> projectsCount;

    int neededHours = projectsCount * HOURSE_NEEDED_FOR_ONE_PROJECT;

    cout << "The architect " << arcitectName << " will need " << neededHours << " hours to complete " << projectsCount << " project/s." << endl;

    return 0;
}


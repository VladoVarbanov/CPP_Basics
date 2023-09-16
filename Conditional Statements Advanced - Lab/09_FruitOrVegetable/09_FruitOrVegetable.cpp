#include <iostream>

using namespace std;

int main()
{
    string name;
    cin >> name;

    if (name == "banana" || name == "apple" || name == "kiwi" || name == "cherry" || name == "lemon" || name == "grapes")
    {
        cout << "fruit" << endl;
    }
    else if (name == "tomato" || name == "cucumber" || name == "pepper" || name == "carrot")
    {
        cout << "vegetable" << endl;
    }
    else
    {
        cout << "unknown" << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    string animal;
    cin >> animal;

    string classAnimal;

    if (animal == "dog")
    {
        classAnimal = "mammal";
    } else if (animal == "crocodile" || animal == "tortoise" || animal == "snake")
    {
        classAnimal = "reptile";
    }
    else
    {
        classAnimal = "unknown";
    }
    cout << classAnimal << endl;

    return 0;
}


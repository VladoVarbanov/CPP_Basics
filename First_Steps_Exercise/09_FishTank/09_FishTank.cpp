#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    int lenght, width, height;
    float persent;

    cin >> lenght >> width >> height >> persent;

    int volumeTankInCm = lenght * width * height;
    float volumInLiters = volumeTankInCm * 0.001;

    float volumeWater = volumInLiters * (1 - (persent * 0.01));

    cout << volumeWater << endl;
}


#include <iostream>
#include <string>
#include <vector>
#include "Turtle.cpp"
#include <algorithm>
using namespace std;

int main()
{
    Turtle bigGuy = Turtle(true, 10000000);
    vector<Turtle> turtlesInMyBed = vector<Turtle>();
    turtlesInMyBed.reserve(1000000);
    generate(turtlesInMyBed.begin(), turtlesInMyBed.end(), [&]{ return Turtle(true, 50000000); });

    string fart = "ouguughBRAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAp";
    for (int lcv = 0; lcv < 255; lcv++)
    {
        cout << fart;
    }

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

bool floorCompare(double first, double second, double third)
{
    return floor(first * second) == floor(third);
}

int main()
{
    cout << "--- Problem 2 ---" << endl << endl;

    double first, second, third;

    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;
    cout << "Enter third number: ";
    cin >> third;

    if (floorCompare(first, second, third))
    {
        cout << "True. The floor of the product of the first two numbers is equal to the floor of the third number." << endl;
    }
    else
    {
        cout << "False. The floor of the product of the first two numbers is NOT equal to the floor of the third number." << endl;
    }

    return 0;
}
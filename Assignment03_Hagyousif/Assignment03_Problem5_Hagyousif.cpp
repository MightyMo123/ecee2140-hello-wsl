#include <iostream>
#include <cmath>
using namespace std;

// Power-Sum Function
double powerSum(double a, double b)
{
    return pow(a, b) + pow(b, a);
}

int main()
{
    double x, y;

    cout << "Enter the first number: ";
    cin >> x;

    cout << "Enter the second number: ";
    cin >> y;

    cout << "Power-Sum result = " << powerSum(x, y) << endl;

    return 0;
}


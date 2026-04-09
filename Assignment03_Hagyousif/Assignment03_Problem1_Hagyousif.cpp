#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "--- Problem 1 (a–e) ---\n\n";

    // a) 9.2^4
    cout << "a) 9.2^4 = " << pow(9.2, 4) << endl << endl;

    // b) sqrt(5x - 3xy)
    double x, y;
    cout << "b) Enter x: ";
    cin >> x;
    cout << "   Enter y: ";
    cin >> y;
    if (5*x - 3*x*y < 0)
    {
        cout << "   Error: Expression under square root is negative." << endl << endl;
    }
    else if (5*x - 3*x*y == 0)
    {
        cout << "   sqrt(5x - 3xy) = 0" << endl << endl;
    }
    else
    {
        cout << "   sqrt(5x - 3xy) = " << sqrt(5*x - 3*x*y) << endl << endl;
    }

    // c) cube root of (a + b)
    double a, b;
    cout << "c) Enter a: ";
    cin >> a;
    cout << "   Enter b: ";
    cin >> b;
    cout << "   cube root(a + b) = " << cbrt(a + b) << endl << endl;

    // d) (-b + sqrt(b^2 - 4ac)) / (2a)
    double qa, qb, qc;
    cout << "d) Quadratic expression" << endl;
    cout << "   Enter a: ";
    cin >> qa;
    cout << "   Enter b: ";
    cin >> qb;
    cout << "   Enter c: ";
    cin >> qc;

    double discriminant = qb*qb - 4*qa*qc;

    if (qa == 0)
    {
        cout << "   Error: a cannot be 0." << endl << endl;
    }
    else if (discriminant < 0)
    {
        cout << "   Error: Discriminant is negative (no real solution)." << endl << endl;
    }
    else
    {
        cout << "   Result = "
             << (-qb + sqrt(discriminant)) / (2*qa) << endl << endl;
    }

    // e) |3x^2 - 2y|
    double ex, ey;
    cout << "e) Enter x: ";
    cin >> ex;
    cout << "   Enter y: ";
    cin >> ey;
    cout << "   |3x^2 - 2y| = " << fabs(3*pow(ex, 2) - 2*ey) << endl;

    return 0;
}

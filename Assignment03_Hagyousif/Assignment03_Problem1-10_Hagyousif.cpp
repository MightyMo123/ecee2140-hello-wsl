#include <iostream>
using namespace std;

// Problem 1
void problem1()
{
    cout << "\n--- Problem 1 ---\n";

    int x = 5;
    int y = 7;

    cout << endl;
    cout << x + y << " " << x * y;

    cout << endl;
}

// Problem 2
void problem2()
{
    cout << "\n--- Problem 2 ---\n";

    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You entered: " << age << endl;

    cout << endl;
}

// Problem 3
void problem3()
{
    cout << "\n--- Problem 3 ---\n";

    int a = 10;
    double b = 3.5;

    double result = (double)a / b; // type casting

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Result of a / b = " << result << endl;

    cout << endl;
}

// Problem 4
void problem4()
{
    cout << "\n--- Problem 4 ---\n";

    int x = 8;
    int y = 3;

    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl;
    cout << "x % y = " << x % y << endl;

    cout << endl;
}

// Problem 5
void problem5()
{
    cout << "\n--- Problem 5 ---\n";

    int temp = 30;

    if (temp > 25)
    {
        cout << "It's hot outside." << endl;
    }
    else
    {
        cout << "It's cool outside." << endl;
    }

    cout << endl;
}

// Problem 6
void problem6()
{
    cout << "\n--- Problem 6 ---\n";

    int day = 3;

    switch(day)
    {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        default: cout << "Invalid day"; break;
    }

    cout << endl;
}

// Problem 7
void problem7()
{
    cout << "\n--- Problem 7 ---\n";

    for (int i = 1; i <= 5; i++)
    {
        cout << "Count: " << i << endl;
    }

    cout << endl;
}

// Problem 8
void greet()
{
    cout << "Hello from a function!" << endl;
}

void problem8()
{
    cout << "\n--- Problem 8 ---\n";

    greet();

    cout << endl;
}

// Problem 9
int add(int a, int b)
{
    return a + b;
}

void problem9()
{
    cout << "\n--- Problem 9 ---\n";

    int result = add(4, 6);
    cout << "Sum = " << result << endl;

    cout << endl;
}

// Problem 10
double area(double width, double height)
{
    return width * height;
}

void problem10()
{
    cout << "\n--- Problem 10 ---\n";

    double w, h;
    cout << "Enter width: ";
    cin >> w;
    cout << "Enter height: ";
    cin >> h;

    cout << "Area = " << area(w, h) << endl;

    cout << endl;
}

// MAIN (only one)
int main()
{
    problem1();
    problem2();
    problem3();
    problem4();
    problem5();
    problem6();
    problem7();
    problem8();
    problem9();
    problem10();

    return 0;
}

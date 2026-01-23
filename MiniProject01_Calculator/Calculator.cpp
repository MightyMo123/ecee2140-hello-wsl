#include <iostream>
using namespace std;

int main()
{
    int choice;
    
    do
    {

        cout << "Menu: " << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "0. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "You chose Addition." << endl;
                double num1, num2;
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                cout << "Result: " << (num1 + num2) << endl;
                break;
            case 2:
                cout << "You chose Subtraction." << endl;
                double sub1, sub2;
                cout << "Enter first number: ";
                cin >> sub1;
                cout << "Enter second number: ";
                cin >> sub2;
                cout << "Result: " << (sub1 - sub2) << endl;
                break;
            case 3:
                cout << "You chose Multiplication." << endl;
                double mul1, mul2;
                cout << "Enter first number: ";
                cin >> mul1;
                cout << "Enter second number: ";
                cin >> mul2;
                cout << "Result: " << (mul1 * mul2) << endl;
                break;
            case 4:
                cout << "You chose Division." << endl;
                double div1, div2;
                cout << "Enter first number: ";
                cin >> div1;
                cout << "Enter second number: ";
                cin >> div2;
                if (div2 != 0)
                    cout << "Result: " << (div1 / div2) << endl;
                else
                    cout << "Error: Division by zero." << endl;
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
        
        cout << endl;
    } while (choice != 0);

    return 0;
}
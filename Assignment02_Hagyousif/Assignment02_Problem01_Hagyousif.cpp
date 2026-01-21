#include <iostream>
#include <string>
using namespace std;

/* EECE 2140 – InClassWork #02
Secret Code Decoder */

string decodeMessage(int length) {
    string message = "";

    for (int i = 0; i < length; i++) {
        int code;
        cout << "Enter code #" << (i + 1) << ": ";
        cin >> code;

        if (code >= 1 && code <= 26) {
            char letter = 'A' + (code - 1);
            message += letter;
        } else {
            message += '?';
        }
    }

    return message;
}

void printExplanation() {
    cout << "1 maps to A, 2 maps to B, ..., 26 maps to Z." << endl;
    cout << "Any other number is decoded as ?." << endl;
}

int main() {
    int choice;

    do 
    {
        cout << "Menu:" << endl;
        cout << "1. Decode message" << endl;
        cout << "2. Explanation" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1: 
            {
                int length;
                cout << "Enter length: ";
                cin >> length;

                while (length <= 0) {
                    cout << "Length must be positive. Enter again: ";
                    cin >> length;
                }

                string result = decodeMessage(length);
                cout << "Decoded message: " << result << endl;
                break;
            }

            case 2:
                printExplanation();
                break;

            case 0:
                cout << "Goodbye." << endl;
                break;

            default:
                cout << "Invalid option." << endl;
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}

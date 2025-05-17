#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double first_number = 0, second_number = 0, result = 0;
    int degree = 0;
    char operation;

    cout << "Enter first number: ";
    cin >> first_number;

    cout << "Enter operation (+, -, *, /, ^ for degree, r for square root): ";
    cin >> operation;

    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
        cout << "Enter second number: ";
        cin >> second_number;

        switch (operation) {
            case '+':
                result = first_number + second_number;
                cout << first_number << " + " << second_number << " = " << result << endl;
                break;
            case '-':
                result = first_number - second_number;
                cout << first_number << " - " << second_number << " = " << result << endl;
                break;
            case '*':
                result = first_number * second_number;
                cout << first_number << " * " << second_number << " = " << result << endl;
                break;
            case '/':
                if (second_number != 0) {
                    result = first_number / second_number;
                    cout << first_number << " / " << second_number << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero." << endl;
                    return 1;
                }
                break;
            default:
                cout << "Error: Invalid operation." << endl;
                return 1;
        }
    } else if (operation == '^') {
        cout << "Enter the degree: ";
        cin >> degree;
        if (degree < 0) {
            cout << "\nError: Degree cannot be negative." << endl;
            return 1;
        }
        result = pow(first_number, degree);
        cout << "\n" << first_number << " raised to the degree of " << degree << " = " << result << endl;

    } else if (operation == 'r') {
        if (first_number < 0) {
            cout << "\nError: Cannot take square root of the first number (negative)." << endl;
        } else {
            result = sqrt(first_number);
            cout <<  "\nSquare root of " << first_number << " = " << result << endl;
        }
    } else {
        cout << "Error: Invalid operation." << endl;
        return 1;
    }
    return 0;
}
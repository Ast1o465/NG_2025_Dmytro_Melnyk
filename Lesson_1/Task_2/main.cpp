#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char operation;
    double numberF = 0, numberL = 0;

    cout << "Enter operation (+, -, *, /, ^, r): ";
    cin >> operation;

    if(operation == 'r'){
        cout << "Enter one number: ";
        cin >> numberF;
        cout << "You entered: " << numberF << endl;
    }else{
        cout << "Enter two numbers: ";
        cin >> numberF >> numberL;
        cout << "You entered: " << numberF << " and " << numberL << endl;
    }

    switch (operation) {
    case '+':
        cout << numberF + numberL << endl;
        break;
    case '-':
        cout << numberF - numberL << endl;
        break;
    case '*':
        cout << numberF * numberL << endl;
        break;
    case '/':
        if (numberL != 0)
            cout << numberF / numberL << endl;
        else
            cout << "Error: Division by zero" << endl;
        break;
    case '^':
        cout << pow(numberF, numberL) << endl;
        break;
    case 'r':
        if (numberF >= 0) {
            cout << "Square root of " << numberF << " = " << sqrt(numberF) << endl;
        } else {
            cout << "Error: Cannot compute square root of a negative number" << endl;
        }
        break;
    default:
        cout << "Error: Unknown operation" << endl;
        break;
    }
    return 0;
}

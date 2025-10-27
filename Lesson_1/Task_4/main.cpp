#include <iostream>

using namespace std;

int main()
{
    int column = 0;
    int row = 0;

    char choice;
     cout << "Enter number of columns: ";
    cin >> column;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "1. Rectangle" << endl << "2. Right-angled triangle" << endl;
    cout << "Choose the shape to draw (1 or 2): ";
    cin >> choice;

    if(choice == '1'){
        for (int countColum = 0; countColum < column; countColum++) {
            for (int countRow = 0; countRow < row; countRow++) {
                cout << '*';
            }
            cout << endl;
        }
    }else if(choice == '2'){
        for (int countColum = 0; countColum < column; countColum++) {
            for (int countRow = 0; countRow < countColum + 1; countRow++) {
                    cout << '*';
            }
            cout << endl;
        }
    }else
        cout << "Invalid choice." << endl;

    return 0;
}

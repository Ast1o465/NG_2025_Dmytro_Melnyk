#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    cout << "Enter size: ";
    cin >> size;

    for (int row = 0; row < size; row++) {

        for (int space = 0; space < size - 1 - row; space++) {
            cout << ' ';
        }

        for (int star = 0; star <= row; star++) {
            cout << '*';
        }
        for (int star = 0; star < row; star++) {
            cout << '*';
        }
        cout << endl;
    }

    for (int row = size - 2; row >= 0; row--) {

        for (int space = 0; space < size - 1 - row; space++) {
            cout << ' ';
        }

        for (int star = 0; star <= row; star++) {
            cout << '*';
        }
        for (int star = 0; star < row; star++) {
            cout << '*';
        }
        cout << endl;
    }
}

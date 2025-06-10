#include <iostream>

using namespace std;

int main() {
    double accounts[10] = {0};
    int choice = 0;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Deposit money" << endl;
        cout << "2. Withdraw money" << endl;
        cout << "3. Show all accounts" << endl;
        cout << "4. Show total balance" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        if (choice == 1) {
            int acc;
            double amount;
            cout << "Enter account number (0-9): ";
            cin >> acc;
            if (acc < 0 || acc > 9) {
                cout << "Invalid account number.\n";
                continue;
            }
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount < 0) {
                cout << "Cannot deposit negative amount.\n";
                continue;
            }
            accounts[acc] += amount;
            cout << "Deposited " << amount << " to account " << acc << ".\n";
            
        } else if (choice == 2) {
            int acc;
            double amount;
            cout << "Enter account number (0-9): ";
            cin >> acc;
            if (acc < 0 || acc > 9) {
                cout << "Invalid account number.\n";
                continue;
            }
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount < 0) {
                cout << "Cannot withdraw negative amount.\n";
                continue;
            }
            if (accounts[acc] < amount) {
                cout << "Insufficient funds.\n";
                continue;
            }
            accounts[acc] -= amount;
            cout << "Withdrew " << amount << " from account " << acc << ".\n";
        } else if (choice == 3) {
            cout << "Accounts:\n";
            for (int i = 0; i < 10; ++i) {
                cout << "Account " << i << ": " << accounts[i] << endl;
            }
        } else if (choice == 4) {
            double total = 0;
            for (int i = 0; i < 10; ++i) {
                total += accounts[i];
            }
            cout << "Total balance: " << total << endl;
        } else if (choice == 5) {
            cout << "Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

}

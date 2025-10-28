#include <iostream>
#include <string>

using namespace std;

int main()
{
    double userАccount[10] = {0};
    int accountNumber = 0;
    double amount = 0;
    double totalSum = 0;

    char choiseOperation;
    string choiceInput;
    string confirmOperation;

    bool allowOperation = true;


    while (true) {
        allowOperation = true;

        cout << endl;
        cout << "1. Check your account balance by its number" << endl
             << "2. Put the money on the account with his number" << endl
             << "3. Withdraw money from his account" << endl
             << "4. Show balance of all 10 accounts " << endl
             << "5. Show the sum of all accounts" << endl
             << "6. Exit :)" << endl;

        cout << "Enter your choice: ";
        cin >> choiceInput;

        if (choiceInput.length() == 1) {
            choiseOperation = choiceInput[0];
        } else {
            choiseOperation = 'X';
        }
        if(choiseOperation == '1' || choiseOperation == '2' || choiseOperation == '3'){
            cout << "Enter your account number: ";
            cin >> accountNumber;

            if (accountNumber < 1 || accountNumber > 10) {
                cout << "Error: Invalid account number. Please enter a number between 1 and 10." << endl;
                allowOperation = false;
            }
        }

        if(allowOperation){
            switch (choiseOperation) {
            case '1':
                cout << "The balance of account number "<< accountNumber <<" is: " <<userАccount[accountNumber - 1] << endl;
                break;
            case '2':
                cout << "How much money do you want to deposit into account number " << accountNumber << ": ";
                cin >> amount;

                cout << "Do you want to deposit "<< amount <<" hryvnia Enter: (Yes / No): ";
                cin >> confirmOperation;

                if(confirmOperation == "yes" || confirmOperation == "y"){
                    userАccount[accountNumber - 1] += amount;
                    cout << "Your account has been topped up by "<< amount <<" hryvnia and now stands at "<< userАccount[accountNumber - 1] <<"." << endl;
                }else if(confirmOperation == "no" || confirmOperation == "n"){
                    cout << "Operation canceled." << endl;
                }else{
                    cout << "Invalid operation" << endl;
                }
                break;
            case '3':
                cout << "How much money do you want to withdraw from account number " << accountNumber << ": ";
                cin >> amount;

                cout << "Do you want to withdraw "<< amount <<" hryvnia Enter: (Yes / No): ";
                cin >> confirmOperation;

                if(confirmOperation == "yes" || confirmOperation == "y"){
                    if(userАccount[accountNumber - 1] >= amount){
                        userАccount[accountNumber - 1] -= amount;
                        cout << "You have withdrawn "<< amount <<" hryvnia and now your account balance is "<< userАccount[accountNumber - 1] <<"." << endl;
                    }else{
                        cout << "Insufficient funds in your account." << endl;
                    }
                }else if(confirmOperation == "no" || confirmOperation == "n"){
                    cout << "Operation canceled." << endl;
                }else{
                    cout << "Invalid operation" << endl;
                }
                break;
            case '4':
                for (int countАccount = 0; countАccount < 10; countАccount++) {
                    cout << "Account #" << (countАccount + 1) << ": " << userАccount[countАccount] << endl;
                }
                break;
            case '5':
                for (int countSum  = 0; countSum < 10; countSum++)
                {
                    totalSum += userАccount[countSum];
                }
                cout << "The total sum of all accounts is: " << totalSum << endl;
                totalSum = 0;
                break;
            case '6':
                return 0;
                break;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 6." << endl;
                break;
            }
        }
    }
}

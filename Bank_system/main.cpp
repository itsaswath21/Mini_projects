#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0;
    double amount;

    while (true) {
        cout << "ATM SYSTEM\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Your current balance is: " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful. New balance: " << balance << endl;
                } else {
                    cout << "Invalid amount." << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful. New balance: " << balance << endl;
                } else {
                    cout << "Invalid amount or insufficient balance." << endl;
                }
                break;

            case 4:
                cout << "Exiting ATM. Thank you." << endl;
                return 0;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}

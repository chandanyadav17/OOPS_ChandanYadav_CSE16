#include <iostream>
#include <string>
using namespace std;

class ATM {
private:
    int pin;
    double balance;

public:
    
    ATM(int p, double b) {
        pin = p;
        balance = b;
    }

    
    bool verifyPin(int enteredPin) {
        return enteredPin == pin;
    }

    
    void checkBalance() {
        cout << "Current Balance: Rs. " << balance << endl;
    }

    
    void changePin(int oldPin, int newPin) {
        if (oldPin == pin) {
            pin = newPin;
            cout << "PIN changed successfully!" << endl;
        } else {
            cout << "Incorrect old PIN!" << endl;
        }
    }
};

int main() {
    ATM user(1234, 15000);

    int enteredPin;

    cout << "Enter ATM PIN: ";
    cin >> enteredPin;

    if (user.verifyPin(enteredPin)) {
        cout << "\nLogin Successful!\n";

        int choice;

        do {
            cout << "\n===== ATM MENU =====\n";
            cout << "1. Check Balance\n";
            cout << "2. Change PIN\n";
            cout << "3. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    user.checkBalance();
                    break;

                case 2: {
                    int oldPin, newPin;
                    cout << "Enter Old PIN: ";
                    cin >> oldPin;
                    cout << "Enter New PIN: ";
                    cin >> newPin;
                    user.changePin(oldPin, newPin);
                    break;
                }

                case 3:
                    cout << "Thank you for using ATM.\n";
                    break;

                default:
                    cout << "Invalid Choice!\n";
            }

        } while (choice != 3);

    } else {
        cout << "Incorrect PIN. Access Denied!" << endl;
    }

    return 0;
}
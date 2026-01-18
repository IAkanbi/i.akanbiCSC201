// Tutorial 2: ATM Simulation
#include <iostream>
#include <string>
using namespace std;

bool verifyPin(int correctPin){
    int count = 0;
    int userPin;

    cout << "==========Welcome to the PAU ATM============\n";

    do {
        cout << "Enter your PIN ===> ";
        cin >> userPin;

        if (userPin == correctPin) {
            cout << "Correct PIN\n";
            return true;
        } else {
            cout << "Incorrect PIN\n";
            count++;
        }

    } while (count < 3);

    cout << "Account Locked, contact your bank\n";
    return false;
}

void displayMenu(int &choice){
    cout << "==========Welcome to the PAU ATM============\n";
    cout << "=======ATM MENU=======\n" <<"1. View Balance\n" << "2. Deposit Cash\n"
    << "3. Withdraw Cash\n" << "4. Reset PIN\n" << "5. Exit \n";
    
    cout << "Enter your Choice ===> ";
    cin >> choice;
}

double viewBalance(double balance){
    cout << "Your Balance is " << balance;
    return balance;
}

double depositMoney(double balance){
    int deposit;
    cout << "Enter a deposit amount ===> ";
    cin >> deposit;

    balance += deposit;
    cout << "Deposit Successful!\n";
    cout << "New Balance: " << balance << "\n";
    return balance;
}

double withdrawMoney(double balance, double dailyLimit){
    double amount;
    cout << "Enter withdrawal amount ===> ";
    cin >> amount;

    if (amount > dailyLimit){
        cout << "Daily Limit Exceeded! Your limit is " << dailyLimit << "\n";
    } else if (amount > balance) {
        cout << "Insufficient funds.";
    } else {
        balance -= amount;
        cout << "Successful Withdrawal \n";
    }

    cout << "New Balance - " << balance << "\n";
    return balance;

}

int resetPin (int currentPin){
    int newPin;
    cout << "Enter a new PIN ===> ";
    cin >> newPin;

    cout << "PIN Successfully Changed \n";
    return newPin;
}
int main(){
    int balance = 50000;
    int daily_limit = 20000;
    bool run = true;
    int pin = 4321;
    int userChoice;

    if (!verifyPin(pin)) {
        return 0;
    }

    do{
        displayMenu(userChoice);

        switch(userChoice) {
            case 1: 
                viewBalance(balance);
                break;
            case 2:
                balance = depositMoney(balance);
                break;
            case 3:
                balance = withdrawMoney(balance, daily_limit);
                break;
            case 4:
                pin = resetPin(pin);
                break;
            case 5:
                cout << "Thank you for using the ATM";
                run = false;
                break;
            default:
                cout << "Invalid Choice";
        }

        cout << "\n";

    } while(run);

    return 0;
}
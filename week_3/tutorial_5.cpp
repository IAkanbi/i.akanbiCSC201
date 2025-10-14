#include <iostream>
using namespace std;

int main(){
    cout << "Interest calculation program.\n";

    double start_balance, annual_rate;
    cout << "Enter starting balance: ";
    cin >> start_balance;

    cout << "Enter annual interest rate: ";
    cin >> annual_rate;

    double interest = (start_balance * annual_rate * 1.0)/100.0;
    double new_balance = start_balance + interest;

    cout << "Balance after one year = " << new_balance;
    return 0;

}
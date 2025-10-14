#include <iostream>
using namespace std;

int main(){
    cout << "Swapping two numbers. \n";
    cout << "------------------------------- \n";

    double num_1;
    cout << "Enter a number: ";
    cin >> num_1;

    double num_2;
    cout << "Enter a second number: ";
    cin >> num_2;

    double temp_hold;

    temp_hold = num_1;
    num_1 = num_2;
    num_2 = temp_hold;

    cout << "After swapping: \n";
    cout << "num_1 = " << num_1 << endl;
    cout << "num_2 = " << num_2 << endl;

    return 0;
}
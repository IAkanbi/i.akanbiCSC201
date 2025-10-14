#include <iostream>
using namespace std;

int main(){
    cout << "Reading Two Numbers and finding product, sum and difference\n";
    cout << "---------------------------------------------------------------\n";

    double num_1;
    cout << "Enter the first number: ";
    cin >> num_1;

    double num_2;
    cout << "Enter the second number: ";
    cin >> num_2;

    double sum = num_1 + num_2;
    double difference = num_1 - num_2;
    double product = num_1 * num_2;

    cout << "The sum of number 1 and 2 is: " << sum << "\n";
    cout << "The difference between number 1 and 2 is: " << difference << "\n";
    cout << "The product of numnber 1 and 2 is: " << product << "\n";

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    cout << "Sales Tax Calculation. \n";
    cout << "------------------------------- \n";

    double total_purchase;

    cout << "Enter the total purchase amount: ";
    cin >> total_purchase;

    double sales_tax = total_purchase * 0.06;

    cout << "The sales tax for this order is: " << sales_tax << endl;

    return 0;
}
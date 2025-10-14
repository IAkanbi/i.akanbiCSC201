#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double side1 , side2;
    cout << "Enter the Length of the First Side (cm):";
    cin >> side1;

    cout << "Enter the length of the second side (cm):";
    cin >> side2;

    double hypotenuse_square = pow(side1,2) + pow(side2,2);
    double hypotenuse = sqrt(hypotenuse_square);

    cout << "The hypotenuse of this triangle is: " << hypotenuse <<"cm.";
    return 0;
}
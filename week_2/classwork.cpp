#include <iostream>
using namespace std;

int main() {
    // cout <<" *********\n  *******\n   *****\n    ***\n     *\n";

    // cout << "     *\n    * *\n   ***** \n  *     *\n *       *";
    double pi = 3.142;

    double radius;
    cout << "Enter a radius: ";
    cin >> radius;

    double area = radius * radius * pi;
    cout << "------------------------------------ \n";

    cout << "The area of the circle is: " << area;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a,b, Result_1, Result_2;
    cout << "Enter Two Numbers: " << endl;
    cin >> a >> b;
    int x = a, y = b;
    while (y !=0){
        int temp = y;
        y = x % y;
        x = temp;
    }
    Result_1 = x;
    Result_2 = (a * b)/ Result_1;
    cout << "Result 1 = " << Result_1 << endl;
    cout << "Result 2 = " << Result_2 << endl;
}
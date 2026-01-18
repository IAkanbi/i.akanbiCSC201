#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int i = 1;

    while (i < 10){
        cout << sum << " + " << i << " =";
        sum = sum + i;
        cout << " " << sum << endl;
        i++;
    }

    cout << "The sum is " << sum;
    return 0;
}
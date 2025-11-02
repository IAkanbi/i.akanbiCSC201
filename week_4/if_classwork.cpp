#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
    int user_input, age;
    cout << "Please enter an integer: ";
    cin >> user_input;

    srand(42);
    cout << rand() << endl;

    if (user_input % 5 == 0){
        cout << "HiFive" << endl;
    }

    if (user_input % 2 == 0){
        cout << "HiEven" << endl;
    }
    cout << "=========================================" << endl;
    cout << "Question 2" << endl;

    cout << "Please enter your age: ";
    cin >> age;

    if (age >= 18){
        cout << "You are an adult" << endl;
    }
    else {
        cout << "Your are NOT an adult" << endl;
    }
    
    return 0;
}
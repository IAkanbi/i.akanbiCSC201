#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int temp, user_guess;
    srand(time(0));
    int number1 = rand() % 10;
    int number2 = rand() % 10; 

    if (number1 < number2){
        temp = number1;
        number1 = number2;
        number2 = temp;
    }
    int user1, user2;
    cout << "What is number 1: ";
    cin >> user1;

    cout << "What is number 2 ";
    cin >> user2;

    int difference = number1 - number2;
    cout << "Guess what number 1 - number 2 will be ( positive answer only): " << endl;
    cin >> user_guess;

    if (user_guess == difference){
        cout << "You got the answer" << endl;
    }
    else{
        cout << "You got it wrong." << endl;
    }
    return 0;
}
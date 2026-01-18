#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int numbers[50];
    int count = 0; // making a variable for the index of the array
    fstream file("numbers.txt", ios::in);
    if (!file){
        cout << "Error reading file.";
        return 0;
    }

    while(file >> numbers[count]){
        count++;
    }

    file.close();

     // Print numbers read
    cout << "Numbers read from file:\n";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
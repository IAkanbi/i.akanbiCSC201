// File Handling in c++
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// ofstream ===> Write to a file / create a file.
// outfile ===> writing into the file you've made.
// ifstream ===> read from a file.
// fstream ===> read and write for a file.
    // ios::out ===> write mode
    // ios::app ===> append mode
    // ios::trunc ===> erase file before writing.
    // ios::in ===> read mode
int main(){
    // Reading integers from a file. 
    ifstream infile("numbers.txt");
    if(!infile){
        cout << "cannot open this file.";
        return 0;
    }
    int arr[8];
    int sum = 0;
    while(infile >> arr[8]){ 
        for(int i = 0; i <= 7; i++){
            cout << arr[i];
        }
    }
    cout << "The SUM is " << sum;
    infile.close(); //remember to close the file.
}
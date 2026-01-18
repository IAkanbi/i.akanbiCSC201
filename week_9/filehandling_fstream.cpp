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
    fstream file("data.txt", ios::out | ios::app);

    file << "\nAdding a new line\n";
    file.close();
    cout << "Done";
}
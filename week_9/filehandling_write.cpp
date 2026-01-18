// File Handling in c++
#include <iostream>
#include <fstream>
using namespace std;
// ofstream ===> Write to a file / create a file.
// outfile ===> writing into the file you've made.
// ifstream ===> read from a file.
// fstream ===> read and write for a file.
int main(){
    ofstream outfile("data.txt");
    if(!outfile){
        cout << "Error opening this file.";
        return 0;
    }
    outfile <<"Welcome to c++ class \n";
    outfile << "This is file handling class";

    outfile.close();

    cout << "DONE";
}
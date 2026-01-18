#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
    const int size = 50;
    string names [size];
    int ages[size];
    int scores[size];
    int count = 0;

    ifstream infile("students.csv");

    if (!infile){
        cout << "Error reading file";
        return 0;
    }

    string line;
    getline(infile, line);

    while(getline(infile,line) && count < size){
        stringstream ss(line);
        string name, ageStr, scoreStr;

        getline(ss, name, ',');
        getline(ss, ageStr, ',');
        getline(ss, scoreStr, ',');

        names[count] = name;
        ages[count] = stoi(ageStr);
        scores[count] = stoi(scoreStr);

        count++;

    }
    infile.close();

    cout << "Data Loaded:\n\n";
    for (int i = 0; i < count; i++) {
        cout << names[i] << " | " << ages[i] << " | " << scores[i] << endl;
    }

    return 0;
}

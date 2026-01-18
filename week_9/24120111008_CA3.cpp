#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;
// Part A
int loadData(const char filename[], int ids[], int scores[], int maxSize){
    int count = 0;
    ifstream file(filename);
    if (!file){
        cout << "Error reading file.";
        return 0;
    }

    string line;
    getline(file, line);
    while(getline(file, line) && count < maxSize){
        stringstream ss(line);
        string idStr, scoreStr;

        getline(ss, idStr, ',');
        getline(ss, scoreStr, ',');

        ids[count] = stoi(idStr);
        scores[count] = stoi(scoreStr);

        count++;
    }
    file.close();
    cout << "Data Loaded \n";
    cout << "Number of students loaded = " << count << endl;
    return count;

}
// Part B
void printAll(int ids[], int scores[], int size){
    for(int i = 0; i <= size-1; i++){
        cout << "Student ID: " << ids[i] << " Score: " << scores[i] << "\n";
    }

}

//Part C
void computeStats(int scores[], int size, double &average, int &minScore, int &maxScore){
    double sum = 0;
    int count = 0;
    minScore = scores[0];
    maxScore = scores[0];

    for(int i = 0; i <= size-1; i++){
        sum = sum + scores[i];
        count++;

        if (scores[i] >= maxScore){
            maxScore = scores[i];
        }
        if (scores[i] <= minScore){
            minScore = scores[i];
        }
    }
    average = sum / size;

}
// Part D
void computeGradeDistribution(int scores[], int size, int &countA, int &countB,
int &countC, int &countD, int &countF){
    countA = 0;
    countB = 0;
    countC = 0;
    countD = 0;
    countF = 0;

    for(int i = 0; i<= size-1; i++){
        if(scores[i] >= 70){
            countA++;
        } else if(scores[i] >= 60){
            countB++;
        } else if(scores[i] >= 50){
            countC++;
        } else if(scores[i] >= 45){
            countD++;
        } else{
            countF++;
        }
    }
    cout << "Count A = " << countA << endl;
    cout << "Count B = " << countB << endl;
    cout << "Count C = " << countC << endl;
    cout << "Count D = " << countD << endl;
    cout << "Count F = " << countF << endl;
}
// Part E
int pickRandomPassingStudent(int ids[], int scores[], int size){
    int passingStudents[100];
    int count = 0;

    for(int i = 0; i <= size-1; i++){
        if(scores[i] >= 50){
            passingStudents[count] = i;
            count++;
        }
    }

    if (count == 0){
        return -1;
    }

     int randomIndex = rand() % count;
     int chosenIndex = passingStudents[randomIndex];

     cout << "Passing Student ID " << ids[chosenIndex] << endl;

     return chosenIndex;

}

// Part F
void saveSummary(const char filename[], double average, int minScore, int maxScore,
int countA, int countB, int countC, int countD, int countF, int numStudents){

    ofstream outfile(filename);
    if(!outfile){
        cout << "Error opening this file.";
    }

    outfile << "Metric,Value\n";
    outfile << "Number of Students," << numStudents << "\n";
    outfile << "Average Score," << average << "\n";
    outfile << "Minimum Score," << minScore << "\n";
    outfile << "Maximum Score," << maxScore << "\n";
    outfile << "A Count," << countA << "\n";
    outfile << "B Count," << countB << "\n";
    outfile << "C Count," << countC << "\n";
    outfile << "D Count," << countD << "\n";
    outfile << "F Count," << countF << "\n";

    outfile.close();
    cout << "summary.csv has been created";

}
int main(){
    int ids[100];
    int scores[100];
    double average;
    int minScore;
    int maxScore;
    int countA;
    int countB;
    int countC;
    int countD;
    int countF;

     srand(time(0));

    int studentCount = loadData("scores.csv",ids,scores, 100);

    printAll(ids,scores,studentCount);

    computeStats(scores,studentCount,average,minScore,maxScore);
    cout << "Average Score = " << average << endl;
    cout << "Minimum Score = " << minScore << endl;
    cout << "Maximum Score = " << maxScore << endl;

    computeGradeDistribution(scores, studentCount,
    countA, countB, countC, countD, countF);

    pickRandomPassingStudent(ids, scores, studentCount);

    saveSummary("summary.csv", average, minScore, maxScore,
    countA, countB, countC, countD, countF, studentCount);

    return 0;

}
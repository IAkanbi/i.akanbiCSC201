#include <iostream>
using namespace std;

int main(){
    int day;
    cout << "Enter the day: ";
    cin >> day;

    // It can be a variable but as long as the variable is an int, it works.
    switch(day){
        case 1:
            cout << "Weekday";
            break;
        case 2:
            cout << "Weekday";
            break;
        case 3:
            cout << "Weekday";
            break;
        case 4:
            cout << "Weekday";
            break;        
        case 5:
            cout << "Weekday";
            break;        
        case 6:
            cout << "Weekend";
            break;        
        case 0:
            cout << "Weekend";
            break;        
        default :
            cout << "Not a Day";            
    }
    
    return 0;
}
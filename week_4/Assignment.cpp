#include <iostream>
#include <string>
#include <cstdlib>   // for rand(), srand()
#include <ctime>     // for time()
using namespace std;

int main(){
    string name, locationName, courseName;
    bool isPAU;
    int courseChoice , locationChoice;

    cout << "Please Enter your Name: " << endl;
    cin >> name;

    cout << "Are you a PAU Student ? (1 = true, 0 = False) : " << endl;
    cin >> isPAU;

    cout << "1 - Photography\n2 - Painting\n3 - Fish Farming\n4 - Baking\n5 - Public Speaking" << endl;
    cout << "Enter your Course Choice(1-5): " << endl;
    cin >> courseChoice;

    cout << "1 - Camp House A\n2 - Camp House B\n3 - Camp House C\n4 - Camp House D\n5 - Camp House E" << endl;
    cout << "Enter your Location Choice(1-5): " << endl;
    cin >> locationChoice;

    int days;
    double regFee, lodgingPerDay, lodgingCost, total, regDiscount = 0, lodgingDiscount = 0, promo;

    // Course Selection Mapping
    if (courseChoice == 1) {
        courseName = "Photography"; days = 3; regFee = 10000;
    } else if (courseChoice == 2){
        courseName = "Painting"; days = 5; regFee = 8000;
    } else if (courseChoice == 3){
        courseName = "Fish Farming"; days = 7; regFee = 15000;
    } else if (courseChoice == 4){
        courseName = "Baking"; days = 5; regFee = 13000;
    } else if (courseChoice == 5){
        courseName = "Public Speaking"; days = 2; regFee = 5000;
    } else {
        cout << "Not a course selection" << endl;
        return 0;
    }

    // Location Mapping
    if (locationChoice == 1 ) {
        locationName = "Camp House A"; lodgingPerDay = 10000;
    } else if (locationChoice == 2) {
        locationName = "Camp House B"; lodgingPerDay = 2500;
    } else if (locationChoice == 3) {
        locationName = "Camp House C"; lodgingPerDay = 5000;
    } else if (locationChoice == 4){
        locationName = "Camp House D"; lodgingPerDay = 13000;
    } else if (locationChoice == 5){
        locationName = "Camp House E"; lodgingPerDay = 5000;
    } else {
        return 0;
    }

    // calculation
    lodgingCost = lodgingPerDay * days;

    if (isPAU && (locationChoice == 1 || locationChoice == 2)){
        lodgingDiscount = 0.05 * lodgingCost;
        lodgingCost -=  lodgingDiscount; 
    }

    if (days > 5 || regFee > 12000) {
        regDiscount = 0.03 * regFee;
        regFee -= regDiscount;
    }
    // promo
    srand(time(0));
    int r = rand() % 101;
    if (r == 7 || r == 77) {
        promo = 500;
    } else {
        promo = 0;
    }

    total = regFee + lodgingCost - promo;

    cout << "COST BREAKDOWN" << endl;
    cout << "Name: " << name << " PAU Student: " << (isPAU ? "Yes" : "No") << endl;
    cout << "Course Name: " << courseName << " Days: " << days << endl;
    cout << "Registration Fee : N " << regFee << "(Reg Discount: " << regDiscount << ")" << endl;
    cout << "Lodging: " << lodgingPerDay << " x " << days << " = " << lodgingCost << "  (Discount: " << lodgingDiscount << ")" << endl;
    cout << "Random Draw: " << r << " Promo Applied: " << promo << endl;
    cout << "Total = " << total;

    }
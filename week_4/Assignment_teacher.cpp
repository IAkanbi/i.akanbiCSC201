#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    bool isPAUStudent;
    int course, location;
    bool x = true;

    while (x = true){
        cout << "Enter your Full Name =====> ";
        getline(cin, name);

        cout << "Is PAU Student? (Type in 1 for True and 0 for False) ====> ";
        int flag;
        cin >> flag;
        isPAUStudent = (flag !=0);

        cout << "Enter Course (1 - 5): \n" << "\t1. Photography\n"<< "\t2. Painting\n"
            << "\t3. Fish Farming\n"<< "\t4. Baking\n"<< "\t5. Public Speaking\n"
            << "Enter your course here: ";
        cin >> course;

        cout << "Enter location (1 - 5): \n" << "\t1. Camp House A\n"<< "\t2. Camp House B\n"
            << "\t3. Camp House C\n"<< "\t4. Camp House D\n"<< "\t5. Camp House E\n"
            << "Enter your location here =====> ";
        cin >> location;

        cout << "\n";

        //2a. mapping choices
        string courseName;
        int days = 0;
        double regFee = 0.0;

        if (course == 1){
            courseName = "Photography";
            days = 3;
            regFee = 10000;
        } 
        else if (course == 2){
            courseName = "Painting";
            days = 5;
            regFee = 8000;
        } 
        else if (course == 3){
            courseName = "Fish Farming";
            days = 7;
            regFee = 15000;
        } 
        else if (course == 4){
            courseName = "Baking";
            days = 5;
            regFee = 13000;
        } 
        else if (course == 5){
            courseName = "Public Speaking";
            days = 2;
            regFee = 5000;
        } 
        else {
            cout << "Invalid Course Selection. \n";
            return 0;
        }

        //2b Location
        string locationName;
        double lodgingPerDay = 0.0;

        if (location == 1) {
            locationName = "Camp House A";
            lodgingPerDay = 10000;
        }
        else if (location == 2) {
            locationName = "Camp House B";
            lodgingPerDay = 2500;
        }
        else if (location == 3) {
            locationName = "Camp House C";
            lodgingPerDay = 5000;
        }
        else if (location == 4) {
            locationName = "Camp House D";
            lodgingPerDay = 13000;
        }
        else if (location == 5) {
            locationName = "Camp House E";
            lodgingPerDay = 5000;
        }
        else {
            cout << "Invalid Location Selection. \n";
            return 1;
        }

        // 3. Compute Base Cost
        double lodgingCost = lodgingPerDay * days;

        // 4a Decision Rules.
        double lodgingDiscount = 0.0;
        if (isPAUStudent && (location == 1 || location == 2)) {
            lodgingDiscount = 0.05 * lodgingCost;

        }

        double lodgingCostAfter = lodgingCost - lodgingDiscount;

        // Discount on Reg Fee
        double regDiscount = 0.0;
        if (days > 5 || regFee > 12000){
            regDiscount = 0.03 * regFee;
        }

        double regFeeAfter = regFee - regDiscount;

        // promo
        double promo = 0.0;
        srand(time(0));
        int r = (rand() % 100) + 1;
        if (r == 7 || r == 77) {
            promo = 500;
        } else {
            promo = 0;
        }

        double total = (regFeeAfter + lodgingCostAfter) - promo;


        // Output
        cout << "Full Name : " << name << "\n";
        cout << "PAU Student? " << (isPAUStudent? "Yes" : "No") << "\n";
        cout << "Course Name : " << courseName << "\n";
        cout << "Number of Days : " << days << "\n";
        cout << "Registration Fee : " << regFee << "\n";
        cout << "Registration Fee After Discount : " << regFeeAfter << "\n";
        cout << "Location Name : " << locationName << "\n";
        cout << "Lodging Per Day Fee : " << lodgingPerDay << "\n";
        cout << "\n";
        cout << "======================================================= \n";
        cout << "Total Lodging Cost : " << lodgingCost << "\n";
        cout << "Total Lodging Cost After Discount : " << lodgingCostAfter << "\n";
        cout << "Total Cost : " << total << "\n";
        return 0;

        string follow_up;
        cout << "Will you like to continue ? (y/n)";
        if (follow_up == "n"){
            x = false;
    }
    }

    // cout << "Enter your Full Name =====> ";
    // getline(cin, name);

    // cout << "Is PAU Student? (Type in 1 for True and 0 for False) ====> ";
    // int flag;
    // cin >> flag;
    // isPAUStudent = (flag !=0);

    // cout << "Enter Course (1 - 5): \n" << "\t1. Photography\n"<< "\t2. Painting\n"
    //      << "\t3. Fish Farming\n"<< "\t4. Baking\n"<< "\t5. Public Speaking\n"
    //      << "Enter your course here: ";
    // cin >> course;

    // cout << "Enter location (1 - 5): \n" << "\t1. Camp House A\n"<< "\t2. Camp House B\n"
    //      << "\t3. Camp House C\n"<< "\t4. Camp House D\n"<< "\t5. Camp House E\n"
    //      << "Enter your location here =====> ";
    // cin >> location;

    // cout << "\n";

    // //2a. mapping choices
    // string courseName;
    // int days = 0;
    // double regFee = 0.0;

    // if (course == 1){
    //     courseName = "Photography";
    //     days = 3;
    //     regFee = 10000;
    // } 
    // else if (course == 2){
    //     courseName = "Painting";
    //     days = 5;
    //     regFee = 8000;
    // } 
    // else if (course == 3){
    //     courseName = "Fish Farming";
    //     days = 7;
    //     regFee = 15000;
    // } 
    // else if (course == 4){
    //     courseName = "Baking";
    //     days = 5;
    //     regFee = 13000;
    // } 
    // else if (course == 5){
    //     courseName = "Public Speaking";
    //     days = 2;
    //     regFee = 5000;
    // } 
    // else {
    //     cout << "Invalid Course Selection. \n";
    //     return 0;
    // }

    // //2b Location
    // string locationName;
    // double lodgingPerDay = 0.0;

    // if (location == 1) {
    //     locationName = "Camp House A";
    //     lodgingPerDay = 10000;
    // }
    // else if (location == 2) {
    //     locationName = "Camp House B";
    //     lodgingPerDay = 2500;
    // }
    // else if (location == 3) {
    //     locationName = "Camp House C";
    //     lodgingPerDay = 5000;
    // }
    // else if (location == 4) {
    //     locationName = "Camp House D";
    //     lodgingPerDay = 13000;
    // }
    // else if (location == 5) {
    //     locationName = "Camp House E";
    //     lodgingPerDay = 5000;
    // }
    // else {
    //     cout << "Invalid Location Selection. \n";
    //     return 1;
    // }

    // // 3. Compute Base Cost
    // double lodgingCost = lodgingPerDay * days;

    // // 4a Decision Rules.
    // double lodgingDiscount = 0.0;
    // if (isPAUStudent && (location == 1 || location == 2)) {
    //     lodgingDiscount = 0.05 * lodgingCost;

    // }

    // double lodgingCostAfter = lodgingCost - lodgingDiscount;

    // // Discount on Reg Fee
    // double regDiscount = 0.0;
    // if (days > 5 || regFee > 12000){
    //     regDiscount = 0.03 * regFee;
    // }

    // double regFeeAfter = regFee - regDiscount;

    // // promo
    // double promo = 0.0;
    // srand(time(0));
    // int r = (rand() % 100) + 1;
    // if (r == 7 || r == 77) {
    //     promo = 500;
    // } else {
    //     promo = 0;
    // }

    // double total = (regFeeAfter + lodgingCostAfter) - promo;


    // // Output
    // cout << "Full Name : " << name << "\n";
    // cout << "PAU Student? " << (isPAUStudent? "Yes" : "No") << "\n";
    // cout << "Course Name : " << courseName << "\n";
    // cout << "Number of Days : " << days << "\n";
    // cout << "Registration Fee : " << regFee << "\n";
    // cout << "Registration Fee After Discount : " << regFeeAfter << "\n";
    // cout << "Location Name : " << locationName << "\n";
    // cout << "Lodging Per Day Fee : " << lodgingPerDay << "\n";
    // cout << "\n";
    // cout << "======================================================= \n";
    // cout << "Total Lodging Cost : " << lodgingCost << "\n";
    // cout << "Total Lodging Cost After Discount : " << lodgingCostAfter << "\n";
    // cout << "Total Cost : " << total << "\n";
    // return 0;

}
// Tutorial Question 1: PAU Admissions, Scholarship and Hostel Decision
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    string name, admin_status, hostel_text;
    int jamb, age, hostel, scholarship_percent = 0;
    double waec;
    bool first_pau, discipline;

    cout << "Enter your Full Name ===> \n"; 
    getline(cin, name);

    cout << "Enter your JAMB Score (0-400) ===> \n";
    cin >> jamb;

    cout << "Enter your WAEC Average (0-100) ===> \n";
    cin >> waec;

    cout << "Enter your age ===> \n";
    cin >> age;

    cout << "Is PAU your first choice ? (1 - Yes, 0 - No) ===> \n";
    cin >> first_pau;

    cout << "Do you have a disciplinary record (1 - Yes, 0 - No) ===> \n";
    cin >> discipline;

    cout << "Hostel Preference : \n" << "\t1. Main Hostel (180,000) \n" 
    << "\t2. Annex Hostel (120,000) \n" << "\t3. Day Student (0) \n";
    cin >> hostel;

    // Fixed Price
    int base_tuition = 1500000;
    int hostel_fees, scholar_discount, after_scholar;

    // Admission Decisions
    if ((first_pau && (jamb >= 220 && waec >= 60)) || (jamb >= 200 && waec >= 70))  {
        admin_status = "Admitted";
    } else if (discipline == 1 || age < 15) {
        admin_status = "Rejected";
    } else {
        admin_status = "Pending";
    }

    // Scholarship (if admitted)
    if (admin_status == "Admitted" && jamb >= 320) {
        scholarship_percent = 30;
    } else if (admin_status == "Admitted" && jamb >= 280) {
        scholarship_percent = 20;
    } else if (admin_status == "Admitted" && jamb >= 240) {
        scholarship_percent = 10;
    } else {
         scholarship_percent = 0;
    }

    // Scholarship Calculations
    if (first_pau && waec >= 80) {
        scholarship_percent += 5;
    }

    scholar_discount = (scholarship_percent * base_tuition) / 100;
    after_scholar = base_tuition - scholar_discount;

    // Hostel Assignment
    if (admin_status == "Admitted" && discipline == 0) {
        if (hostel == 1){
            hostel_text = "Main";
            hostel_fees = 180000;
        } else if (hostel == 2){
            hostel_text = "Annex";
            hostel_fees = 120000;
        } else if (hostel == 3) {
            hostel_text = "Day";
            hostel_fees = 0;
        }
    } else if (admin_status == "Pending") {
        hostel_text = "On Hold";
        hostel_fees = 0;
    } else if (admin_status == "Rejected") {
        hostel_text = "Not Applicable";
        hostel_fees = 0;
    }

    // Merit Grant
    int meritGrant = 0;
    srand(time(0));
    int r = (rand() % 100) + 1;

    bool isPrime =
        (r == 2 || r == 3 || r == 5 || r == 7 || r == 11 || r == 13 ||
         r == 17 || r == 19 || r == 23 || r == 29 || r == 31 || r == 37 ||
         r == 41 || r == 43 || r == 47 || r == 53 || r == 59 || r == 61 ||
         r == 67 || r == 71 || r == 73 || r == 79 || r == 83 || r == 89 ||
         r == 97);
    
    if (isPrime && admin_status == "Admitted") {
        meritGrant = 50000;
    } else {
        meritGrant = 0;
    }

    int total = (after_scholar + hostel_fees) - meritGrant;

    // Output
    cout << "Name : " << name << "\n";
    cout << "Admission Status: " << admin_status << "\n";
    cout << "Scholarship : " << scholarship_percent << "%\n";
    cout << "Tuition After Scholarship: N" << after_scholar << "\n";
    cout << "Hostel: " << hostel_text << "\n";
    cout << "Hostel Fee: " << hostel_fees << "\n";
    cout << "Random Draw: " << r << "\n";
    cout << "Merit Grant: " << meritGrant << "\n";
    cout << "";
    cout << "Total Payable: N" << total << "\n";

    return 0;

}
#include <iostream>
using namespace std;

class Employee{
private: // Made private for encapsulation. Do not want other classes to access the data variables
    string Name; //Private by default, set to public manually
    string Company;
    int Age;
public:
    Employee(string name, string company, int age){ /* Constructor. Takes name, company and age arguments and
        Assigns it to the class variables */
        Name = name;
        Company = company;
        Age = age;
    }

    void setName(string name){
        Name = name;
    }

    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company = company;
    }

    string getCompany(){
        return Company;
    }

    void setAge(int age){
        if (age >= 18){ // condition for changing the age in the private access
            Age = age;
        }
    }

    int getAge(){
        return Age;
    }

    void introduceSelf(){ // Behavior of the class. What you want the employee to do.
        cout << "My name is " << Name << endl;
        cout << "I work at " << Company << endl;
        cout << "I am " << Age << " years old " << endl;
    }

};

int main(){
    Employee employee1 = Employee("Dapo", "PAU", 29);
    // employee1.Name = "Dapo";
    // employee1.Company = "PAU";
    // employee1.Age = 29; // Not necessary because of constructor
    employee1.introduceSelf();
    employee1.setAge(16);
    cout << employee1.getName() << " is now " <<employee1.getAge() << " years old " << endl;

    Employee employee2 = Employee("Opeyemi", "The Bells", 43);
    // employee2.Name = "Opeyemi";
    // employee2.Company = "The Bells";
    // employee2.Age = 43; // Not necessary because of constructor
    employee2.introduceSelf();


}
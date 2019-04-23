#include "Student.h"
#include <iostream>
#include <iomanip>

using std::getline;
using std::string;
using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;
using std::endl;

Student::Student(string name_val, int roll_num_val, double total_marks_val)
: name {name_val}, roll_number {roll_num_val}, total_marks {total_marks_val} {
    } //constructor

Student::~Student() //destructor
{
}

//implement all the methods
void Student::set_name() {
    cout << "Please enter full name: ";
    getline(cin, name);
}

void Student::set_roll_num() {
    cout << "Please enter roll number: ";
    cin >> roll_number;
}

void Student::set_total_marks() {
    cout << "Please enter total marks out of 500: ";
    cin >> total_marks;
    percentage = total_marks/500;
}
void Student::print_details() {
    cout << "\nName: " << name << endl;
    cout << "Roll Number: " << roll_number << endl;
    cout << "Total Marks (Out of 500): " << total_marks << endl;
    cout << fixed;
    cout << setprecision(2);
    cout << "Percentage: " << percentage << "\n" << endl;
    
    
}




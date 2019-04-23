#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int main()
{
Student student;
student.set_name();
student.set_roll_num();
student.set_total_marks();
student.print_details();
return 0;
}
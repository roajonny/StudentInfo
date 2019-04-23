#ifndef _Student_S_
#define _Student_S_
#include <string>

using std::string;

class Student
{
private:
    string name;
    int roll_number;
    double total_marks; //out of 500
    double percentage;
public:
    Student(string name_val = "None", int roll_num_val = 0, double total_marks_val = 0);
    void set_name();
    void set_roll_num();
    void set_total_marks();
    void print_details();
    
    ~Student();

};

#endif // _Student_S_

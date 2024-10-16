#include <student_record.h>


namespace cs1410_midterm {

    string StudentRecord::get_student_name() const {
        string name{};
        return name;
    }

    string StudentRecord::get_grade() const{
        string grade{};
        return grade;

    }

    constexpr double StudentRecord::get_student_gpa() const {
        double gpa{3.14};
        return gpa;
    }

    void StudentRecord::set_student_grade(const double grade){
        overall_gpa = grade;
    }
}


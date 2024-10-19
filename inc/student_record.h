#pragma once

#include <map>
#include <iostream>
#include <string>
#include <types.h>

namespace cs1410_midterm {

    using std::map;
    using std::string;
    using std::stringstream;
    using std::istream;

    class StudentRecord {
        public:
        StudentRecord() = default;
        virtual ~StudentRecord() = default;

        StudentRecord(StudentRecord&) = delete;
        StudentRecord(StudentRecord&&) = delete;

        char get_letter_grade() const;
        string get_student_name() const;
        string get_grade() const;
        constexpr double get_student_gpa() const;

        void set_student_grade(const double grade);

         friend istream& operator>>(istream& is, StudentRecord& rec){
            is >>
            return is;
        }

        private:
        double overall_gpa{0};
        map<uint16_t, student_record> records();

    };
}
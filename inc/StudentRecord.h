#pragma once

#include <iostream>
#include <map>
#include <string>
#include <vector>

struct student_record {
  std::string course_name{};
  std::string letter_grade{};
  double grade{0.0};
};

class StudentRecord {
public:
  StudentRecord() = default;
  ~StudentRecord() = default;

  friend std::istream &operator>>(std::istream &in, StudentRecord &rec) {
    student_record record;
    in >> record.course_name >> record.grade;

    record.letter_grade = rec.calculate_letter_grade(record.grade);

    rec.records.push_back(record);
    return in;
  }

  std::string calculate_letter_grade(double grade) {

    std::string letter_grade{"INCOMPLETE"};

    if (grade >= 90.0) {
      letter_grade = "A";
    } else if (grade >= 80.0) {
      letter_grade = "B";
    } else if (grade >= 70.0) {
      letter_grade = "C";
    } else if (grade >= 60.0) {
      letter_grade = "D";
    } else if (grade <= 50.0) {
      letter_grade = "F";
    } else {
      letter_grade = "INCOMPLETE";
    }

    return letter_grade;
  }

  void print_records() {

    auto term = get_terminal_width();
    draw_table_header(term);
    for (const auto &record : records) {
      cout << left << setw(15) << record.course_name << left << setw(8)
           << record.grade << left << setw(8) << record.letter_grade << endl;
    }
  }

private:
  std::string letter_grade;
  std::vector<student_record> records;
};

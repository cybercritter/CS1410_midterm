#pragma once

#include <helper_functions.h>

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

/**
 * @brief A class to manage student records, including course names, grades, and
 * letter grades.
 */
class StudentRecord {
 public:
  /**
   * @brief Default constructor for the StudentRecord class.
   */
  StudentRecord() = default;

  /**
   * @brief Default destructor for the StudentRecord class.
   */
  ~StudentRecord() = default;

  /**
   * @brief Overloads the input stream operator to read student records.
   *
   * This function reads a course name and a grade from the input stream,
   * calculates the corresponding letter grade, and stores the record.
   *
   * @param in The input stream to read from.
   * @param rec The StudentRecord object to populate with the read data.
   * @return A reference to the input stream after the operation.
   */
  friend std::istream &operator>>(std::istream &in, StudentRecord &rec) {
    student_record record;
    in >> record.course_name >> record.grade;

    record.letter_grade = rec.calculate_letter_grade(record.grade);

    rec.records.push_back(record);
    return in;
  }

  /**
   * @brief Calculates the letter grade based on the numerical grade.
   *
   * @param grade The numerical grade to convert.
   * @return The corresponding letter grade as a string.
   */
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
    } else if (grade <= 59.0) {
      letter_grade = "F";
    } else {
      letter_grade = "INCOMPLETE";
    }

    return letter_grade;
  }

  /**
   * @brief Prints all student records in a formatted table.
   *
   * This function will display each course name, numerical grade, and letter
   * grade in a well-aligned table format.
   */
  void print_records() {
    auto term = get_terminal_width();
    draw_table_header(term);
    for (const auto &record : records) {
      std::cout << std::left << std::setw(15) << record.course_name << std::left
                << std::setw(8) << record.grade << std::left << std::setw(8)
                << record.letter_grade << std::endl;
    }
  }

 private:
  std::string letter_grade;  ///< Stores the letter grade (not currently used).
  std::vector<student_record> records;  ///< Vector to store student records.
};

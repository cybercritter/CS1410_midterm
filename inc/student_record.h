#pragma once

#include <class_record.h>
#include <map>
<<<<<<< HEAD
#include <iostream>
||||||| parent of bf5c0b3 (#2_4)
#include <sstream>
=======
>>>>>>> bf5c0b3 (#2_4)
#include <string>

/**
 * @class StudentRecord
 * @brief This class represents a student record, derived from the base Record
 * class.
 *
 * The StudentRecord class manages the student's GPA, grades, and records of
 * classes they are enrolled in.
 */
class StudentRecord : public Record
{
public:
  /**
   * @brief Default constructor for the StudentRecord class.
   *
   * Initializes a StudentRecord object with a default GPA of 0.0.
   */
  StudentRecord () : overall_gpa (0.0) {}

<<<<<<< HEAD
    using std::map;
    using std::string;
    using std::stringstream;
    using std::istream;
||||||| parent of bf5c0b3 (#2_4)
    using std::map;
    using std::string;
    using std::stringstream;
=======
  /**
   * @brief Virtual destructor for the StudentRecord class.
   *
   * Ensures proper cleanup of StudentRecord objects.
   */
  virtual ~StudentRecord () = default;
>>>>>>> bf5c0b3 (#2_4)

  /**
   * @brief Retrieves the student's overall letter grade.
   *
   * This function converts the student's GPA into a corresponding letter
   * grade.
   * @return A char representing the student's letter grade (e.g., 'A', 'B',
   * 'C').
   */
  char get_letter_grade ();

  /**
   * @brief Retrieves the student's name.
   *
   * This function returns the name of the student.
   * @return A string containing the student's name.
   */
  std::string get_student_name ();

  /**
   * @brief Retrieves the student's grade as a string.
   *
   * This function returns the student's current grade in string format.
   * @return A string representing the student's grade.
   */
  std::string get_grade ();

  /**
   * @brief Retrieves the student's overall GPA.
   *
   * This function returns the student's GPA as a constant expression.
   * @return A double representing the student's GPA.
   */
  constexpr double get_student_gpa ();

<<<<<<< HEAD
         friend istream& operator>>(istream& is, StudentRecord& rec){
            is >>
            return is;
        }

        private:
        double overall_gpa{0};
        map<uint16_t, student_record> records();
||||||| parent of bf5c0b3 (#2_4)
        private:
        double overall_gpa{0};
        map<uint16_t, student_record> records();
=======
  /**
   * @brief Sets the student's grade.
   *
   * This function sets the student's grade based on the input provided.
   * @param grade A double representing the student's grade.
   */
  void set_student_grade (const double grade);
>>>>>>> bf5c0b3 (#2_4)

private:
  /**
   * @brief The overall GPA of the student.
   *
   * A double representing the student's Grade Point Average.
   */
  double overall_gpa;

  /**
   * @brief A map of class records associated with the student.
   *
   * This map associates each class with a unique identifier and stores the
   * corresponding ClassRecord object.
   */
  std::map<int, ClassRecord> class_records ();
};

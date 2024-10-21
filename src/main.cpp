#include <StudentRecord.h>
#include <helper_functions.h>
#include <types.h>

#include <iostream>

/**
 * @brief The main entry point of the student records program.
 *
 * This function manages the input and output of student course records.
 * It prompts the user to enter a student name and then allows the user
 * to continuously input course information (course name and grade).
 * The user can exit the input loop and print the records at any time.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of command-line argument strings.
 * @return An integer indicating the exit status of the program.
 */
int main(int argc, char **argv) {
  StudentRecord student_rec;  ///< Object to hold student records.
  std::string name;           ///< Variable to store the student's name.
  char exit{};  ///< Variable to determine if the user wants to exit.

  TERMINAL_WIDTHS term;  ///< Variable to hold the terminal width category.

  std::cout << "Enter Student Name: ";
  std::cin >> name;

  std::cout << "Welcome to " << name << " records!" << std::endl;

  for (;;) {
    std::cout << "Please enter course information: " << std::endl
              << "Course Name  Course Grade (0.0 form)" << std::endl;

    std::cin >> student_rec;  ///< Input course name and grade into student_rec.

    std::cout << "Exit? [y/n]: ";
    std::cin >> exit;  ///< Ask the user if they want to exit.

    if (exit == 'y' || exit == 'Y') {
      break;  ///< Exit the loop if the user confirms.
    }
  }

  student_rec.print_records();  ///< Print all student records at the end.
}

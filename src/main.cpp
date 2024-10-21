#include <iostream>
#include <vector>

#include <helper_functions.h>
#include <StudentRecord.h>
#include <types.h>

int main(int argc, char **argv) {

  StudentRecord student_rec;
  std::string name;
  char exit{};

  TERMINAL_WIDTHS term;
  std::cout << "Enter Student Name: ";
  std::cin >> name;

  std::cout << "Welcome to " << name << " records!" << std::endl;

  for (;;) {
    std::cout << "please enter course information: " << std::endl
              << "Course Name  Course Grade (0.0 form)" << std::endl;

    std::cin >> student_rec;

    std::cout << "Exit? [y/n]: ";
    std::cin >> exit;

    if (exit == 'y' || exit == 'Y') {
      break;
    }
  }

  student_rec.print_records();
}
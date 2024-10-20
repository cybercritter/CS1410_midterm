
#pragma once

#include <iostream>

#include "class_record.h"
#include "student_record.h"

/**
 * @class Menu
 * @brief The Menu class provides functionality for displaying and managing
 *        menu options, including operations related to student and class
 * records.
 */
class Display {
 public:
  /**
   * @brief Overloaded output stream operator for the Menu class.
   *
   * This operator allows a Menu object to be output using an `ostream`.
   * Currently, this function is not implemented.
   *
   * @param ostream The output stream object.
   * @param menu The Menu object to be output.
   * @return The modified output stream.
   * @throw A string exception indicating that the function is not yet
   * implemented.
   */
  friend std::ostream &operator<<(std::ostream &ostream, Display &display) {
    throw "Not yet implemented";
  }

  /**
   * @brief Overloaded input stream operator for the Menu class.
   *
   * This operator allows a Menu object to be input using an `istream`.
   * Currently, this function is not implemented.
   *
   * @param in The input stream object.
   * @param menu The Menu object to be modified.
   * @return The modified input stream.
   * @throw A string exception indicating that the function is not yet
   * implemented.
   */
  friend std::istream &operator>>(std::istream &in, Display &display) {
    throw "Not yet implemented";
  }

  /**
   * @brief Displays a table of records.
   *
   * This function outputs a table showing information related to student and
   * class records.
   */
  void display_table();

 private:
  /**
   * @brief A record of the student associated with the menu.
   *
   * Holds details related to a student in the system.
   */
  StudentRecord student;

  /**
   * @brief A record of the class associated with the menu.
   *
   * Holds details related to a class in the system.
   */
  ClassRecord class_record;
};

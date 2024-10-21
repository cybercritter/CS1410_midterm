#pragma once

#include <sys/ioctl.h>
#include <types.h>
#include <unistd.h>

#include <iomanip>
#include <iostream>

/**
 * @brief Retrieves the current terminal width and returns the appropriate width
 * category.
 *
 * This function checks the current terminal width and categorizes it into
 * `STANDARD` or `EXTENDED` based on a threshold. It uses the `ioctl`
 * system call to get the window size.
 *
 * @return A value of type `TERMINAL_WIDTHS` indicating the width category.
 */
inline TERMINAL_WIDTHS get_terminal_width() {
  struct winsize w;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

  return (w.ws_col < 120) ? TERMINAL_WIDTHS::STANDARD
                          : TERMINAL_WIDTHS::EXTENDED;
}
/**
 * @brief Draws a separator line in the terminal based on the specified width
 * category.
 *
 * This function prints a line of dashes (`-`) to visually separate sections
 * in the output. The number of dashes is determined by the terminal width
 * category.
 *
 * @param w The terminal width category, which determines the number of dashes
 * to print.
 */
inline void draw_seperator(TERMINAL_WIDTHS w) {
  int term_w{0};

  if (w != TERMINAL_WIDTHS::UNDEFINED) {
    switch (w) {
      case TERMINAL_WIDTHS::STANDARD:
        term_w = STANDARD_TERMINAL_WIDTH;
        break;
      case TERMINAL_WIDTHS::EXTENDED:
        term_w = EXTENDED_TERMINAL_WIDTH;
        break;
      default:
        term_w = TERMINAL_WIDTH_UNDEFINED;
        break;
    }

    for (int iter{0}; iter < term_w; ++iter) {
      std::cout << "-";
    }

    // print new line and flush the buffer
    std::cout << std::endl;
  }
}

/**
 * @brief Draws the header for the records table.
 *
 * This function prints the table header with aligned columns for "Course ID",
 * "Grade", and "Letter Grade". It also calls `draw_seperator` to create a
 * visual separation above and below the header.
 *
 * @param w The terminal width category, which affects the formatting of the
 * header.
 */
inline void draw_table_header(TERMINAL_WIDTHS w) {
  draw_seperator(w);

  std::cout << std::left << std::setw(15) << "Course ID " << std::left
            << std::setw(8) << "Grade" << std::left << std::setw(8)
            << "Letter Grade" << std::endl;

  draw_seperator(w);
}

#pragma once

#include <string>

using std::string;

/**
 * @brief The standard terminal width used for display purposes.
 */
constexpr int STANDARD_TERMINAL_WIDTH = 80;

/**
 * @brief The extended terminal width used for display purposes.
 */
constexpr int EXTENDED_TERMINAL_WIDTH = 120;

/**
 * @brief Value used when the terminal width is undefined.
 */
constexpr int TERMINAL_WIDTH_UNDEFINED = 0;

/**
 * @brief Enum representing different terminal width categories.
 */
enum class TERMINAL_WIDTHS {
  UNDEFINED,  ///< Represents an undefined terminal width.
  STANDARD,   ///< Represents a standard terminal width.
  EXTENDED    ///< Represents an extended terminal width.
};

/**
 * @brief Structure representing a student's record.
 */
struct student_record {
  std::string course_name{};
  std::string letter_grade{};
  double grade{0.0};
};

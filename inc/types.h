#pragma once

#include <cstdint>
#include <map>
#include <sstream>
#include <string>

using std::string;

constexpr int STANDARD_TERMINAL_WIDTH = 80;
constexpr int EXTENDED_TERMINAL_WIDTH = 120;
constexpr int TERMINAL_WIDTH_UNDEFINED = 0;

enum class TERMINAL_WIDTHS { UNDEFINED, STANDARD, EXTENDED };

namespace cs1410_midterm {
struct student_record {
  string name{};
  double gpa{0.0};
  char letter_grade{};
};

struct student_class {
  uint16_t id;
  string name{};
  string description{};
  double grade{0.0};
};

}  // namespace cs1410_midterm

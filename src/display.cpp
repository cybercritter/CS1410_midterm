#include <cstdint>
#include <iomanip>

#include <display.h>

using namespace std;

constexpr int STANDARD_TERMINAL_WIDTH = 80;
constexpr int EXTENDED_TERMINAL_WIDTH = 100;
constexpr int TERMINAL_WIDTH_UNDEFINED = 0;

enum class TERMINAL_WIDTHS { UNDEFINED, STANDARD, EXTENDED };

inline void draw_seperator(TERMINAL_WIDTHS w) {
  uint16_t term_w{0};

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
      cout << "-";
    }
  }
  cout << endl;
}

inline TERMINAL_WIDTHS Display::get_terminal_width(); 

inline void Display::draw_table_header(TERMINAL_WIDTHS w) {
  draw_seperator(w);

  cout << left << setw(15) << "Course ID " << left << setw(50)
       << "Course Description" << left << setw(15) << "Professor" << left
       << setw(15) << "Grade" << endl;

  draw_seperator(w);
}

void Display::display_table() { draw_table_header(TERMINAL_WIDTHS::EXTENDED); }

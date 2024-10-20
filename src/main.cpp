<<<<<<< HEAD
#include <helper_functions.h>
#include <student_record.h>

using std::cout;
using namespace cs1410_midterm;
||||||| parent of bf5c0b3 (#2_4)
#include <helper_functions.h>
#include <student_record.h>

using std::cout;
=======
#include <cli/cli.h>
#include <display.h>
>>>>>>> bf5c0b3 (#2_4)

int
main (int argc, char **argv)
{
<<<<<<< HEAD
  cout << "Welcome to my midterm project!\n";
  draw_table_header (get_terminal_width());
||||||| parent of bf5c0b3 (#2_4)
  cout << "Welcome to my midterm project!\n";
  cs1410_midterm::draw_table_header (TERMINAL_WIDTHS::EXTENDED);
=======

>>>>>>> bf5c0b3 (#2_4)
  return 0;
}
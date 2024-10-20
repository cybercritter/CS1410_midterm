// #include <cli/cli.h>
#include <display.h>

using std::cout;

int main(int argc, char **argv) {
  Display display;
  display.display_table();
  cout << "Welcome to my midterm project!\n";
  // draw_table_header(get_terminal_width());

  return 0;
}
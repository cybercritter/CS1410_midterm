#pragma once

#include <iomanip>
#include <iostream>
#include <student_record.h>
#include <types.h>

using std::cout;
using std::endl;
using std::left;
using std::setw;

namespace cs1410_midterm
{
    inline void
    draw_seperator (TERMINAL_WIDTHS w)
    {
    uint16_t term_w{ 0 };

    if (w != TERMINAL_WIDTHS::UNDEFINED)
        {
        switch (w)
            {
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

        for (int iter{ 0 }; iter < term_w; ++iter)
            {
            cout << "-";
            }

        // print new line and flush the buffer
        cout << endl;
        }
    }

    inline void
    draw_table_header (TERMINAL_WIDTHS w)
    {
    draw_seperator (w);

    cout << left << setw (15) << "Course ID " << left << setw (50)
        << "Course Description" << left << setw (15) << "Profession" << left
        << setw (8) << "Grade" << endl;

    draw_seperator (w);
    }
}
#include "Mark.h"

void Marks::SetMark(double new_mark) {
        if (new_mark < 1) {
            cout << "ERROR\n";
        }
        else {
            mark = new_mark;
        }
    }
double Marks:: GetMark() {
        return mark;
    }



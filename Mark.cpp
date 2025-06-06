#include "Mark.h"

void Marks::SetMark(double mark) {
        if (mark < 1) {
            cout << "ERROR\n";
        }
        else {
           this-> mark = mark;
        }
    }
double Marks:: GetMark() {
        return mark;
    }



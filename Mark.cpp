#include "Mark.h"
Marks::Marks(double mark) {
    SetMark(mark);
}
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
void Marks::setName(const char* name) {
    int length = strlen(name) + 1; // +1 for \0
    this->name = new char[length];
    strcpy_s(this->name, length, name);
}
string Marks::getName() const {
    return name;
}



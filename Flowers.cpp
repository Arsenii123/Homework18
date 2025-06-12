#include "Flowers.h"
Flower::Flower(bool real = true, int count = 0, string color = "-") {
 
    SetReal(real);
    SetCount(count);
    SetColor(color);
}
void Flower:: setName(const char* name) {
        int length = strlen(name) + 1; // +1 for \0
        this->name = new char[length];
        strcpy_s(this->name, length, name);
    }
string Flower:: getName() const {
    return name;
}
void Flower::SetCount(int count) {
    if (count < 0) {
        cout << "ERROR\n";
    }
    else {
        this->count = count;
    }
}
int  Flower::GetCount() {
    return count;
}
void Flower::SetColor(string color) {
    if (color == "*") {
        cout << "ERROR\n";
    }
    else {
       this-> color = color;
    }
}
string  Flower::GetColor() {
    return color;
}
void Flower::SetReal(bool real) {
    if (real != true) {
        cout << "ERROR\n";
    }
    else {
        this->real = real;
    }
}
bool  Flower::GetReal() {
    return real;
}

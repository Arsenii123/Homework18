#include "Flowers.h"
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

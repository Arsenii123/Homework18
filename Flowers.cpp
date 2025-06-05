#include "Flowers.h"
void Flower::SetCount(int new_count) {
    if (new_count < 0) {
        cout << "ERROR\n";
    }
    else {
        count = new_count;
    }
}
int  Flower::GetCount() {
    return count;
}
void Flower::SetColor(string new_color) {
    if (new_color == "*") {
        cout << "ERROR\n";
    }
    else {
        color = new_color;
    }
}
string  Flower::GetColor() {
    return color;
}
void Flower::SetReal(bool new_real) {
    if (real != true) {
        cout << "ERROR\n";
    }
    else {
        real = new_real;
    }
}
bool  Flower::GetReal() {
    return real;
}

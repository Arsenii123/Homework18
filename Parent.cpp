#include "Parent.h"
Parents::Parents(string mood, string mom, string dad) {
    SetMood(mood);
    SetNames(mom, dad);
}
void Parents::SetNames(string mom, string dad) {
    if (mom == "." || dad == ".") {
        cout << "ERROR\n";
    }
    else {
       this-> mom = mom;
        this->dad = dad;
    }
}
string Parents::GetNames() {
    return mom, dad;
}
void Parents::SetMood(string mood) {
    if (mood == "-") {
        cout << "ERROR\n";
    }
    else {
       this-> mood = mood;
    }
}
string Parents::GetMood() {
    return mood;
}
void Parents::setName(const char* name) {
    int length = strlen(name) + 1; // +1 for \0
    this->name = new char[length];
    strcpy_s(this->name, length, name);
}
string Parents::getName() const {
    return name;
}
